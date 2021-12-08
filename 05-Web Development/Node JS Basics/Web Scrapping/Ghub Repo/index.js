const cheerio = require("cheerio");

const { getHtml, dataToFile, getRepo } = require("./utils.js");

(async function () {
  const idNames = process.argv.slice(2);
  for (const idName of idNames) {
    const userUrl = `https://github.com/${idName}`;

    dataToFile(idName, `USER ID: ${idName}\n\n`);

    await getHtml(userUrl).then((html) => {
      const $ = cheerio.load(html);
      const search = $("span.text-bold.color-fg-default");
      $(search).each((i, data) => {
        dataToFile(
          idName,
          `${i == 0 ? "Followers" : i == 1 ? "Following" : "Stars"} ${$(
            data
          ).text()}\n`
        );
      });
    });

    const reposUrl = `https://github.com/${idName}?tab=repositories`;
    dataToFile(idName, `\nLatest Repos and their last 5 commits\n\n`);

    getHtml(reposUrl).then(async (html) => {
      const $ = cheerio.load(html);
      const search = $(".wb-break-all a");
      let repos = [];
      $(search).each((i, data) => {
        if (i < 3) repos.push($(data).text().split(" "));
      });
      for (let repo of repos) {
        await getRepo(repo, idName);
        dataToFile(idName, "\n");
      }
    });
  }
})();
