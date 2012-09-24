var express = require("express")
 , url = require("url")
 , swagger = require("./Common/node/swagger.js")
 , db = false

var app = express.createServer(
  function(req, res, next) { if (req.db === undefined) { req.db = db; } next(); });
app.use(express.bodyParser());
swagger.setAppHandler(app);  

// resources for the demo
var hydronicsApi = require("./apis/HydronicsApi.js");
swagger.addModels(models)
  .addGET(hydronicsApi.getZones)
  ;

// configures the app
swagger.configure("http://localhost:8002", "0.1");

//  start the server
app.listen(8002);

