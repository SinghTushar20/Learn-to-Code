## WebScrapping

### **Introduction**

- Websites are useful to get the data as visual data is percived by humans easily as they find it difficult to extract the same data if given in a table format or database directly.

- Webscrapping is extracting the data from a website and store it in a organised manner like in Excel sheet, Database, Pdf etc.

### **Request Response Cycle**

- When we try to access a specific website we use a web address (http://www.xxx.xxx) then a request is made to the server, the server then give back a response in the form of html, the browser knows how to parse a html text so it displays the website.

### **Process of Web Scrapping**

- We request the server from a http request module, parse the http response and then pass it to a extractor which is going to orgainse the data.

  - Extractor will be a function that we wil create.

- The request is given using axios module.
- Parsing is done using cherio (similar to beautiful soup in python) module, this is used in web scrapping.
- Organisation of data is done usine some other modules.
