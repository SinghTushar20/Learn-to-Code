const axios = require("axios");
const fs = require("fs");
const path = require("path");
const cheerio = require("cheerio");

async function getHtml(url) {
  try {
    const response = await axios.get(url);
    return response.data;
  } catch (error) {
    console.error(error);
  }
}

function dataToFile(filename, text) {
  fs.appendFileSync(path.join(process.cwd(), filename), text);
}

async function getRepo(repo, idName) {
  const repoName = repo[8];
  dataToFile(idName, `Following are the commit of ${repoName}:\n`);
  const repoUrl = `https://github.com/${idName}/${repoName}/commits/main`;
  const html = await getHtml(repoUrl);
  const $ = cheerio.load(html);
  const commits = $(
    ".Link--primary.text-bold.js-navigation-open.markdown-title"
  );
  const committers = $(".f6.color-text-secondary.min-width-0");
  let i = 0;
  let j = 0;
  for (; i < commits.length; ) {
    const commit = $(commits[i]).text().split("\n");
    const committer = $(committers[j]).text().split("\n");
    if (commit[0] != "Merge pull request") {
      dataToFile(
        idName,
        `${commit[0].trim()} by ${committer[2].trim()} on ${committer[6].trim()}\n`
      );
      i++;
      j++;
    } else {
      dataToFile(idName, `${commit[0].trim()} `);
      i++;
    }
    if (j == 5) break;
  }
}

module.exports = {
  getHtml,
  dataToFile,
  getRepo,
};
