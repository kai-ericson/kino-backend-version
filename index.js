import express from "express";
import { engine } from "express-handlebars";
import fs from "fs/promises";
//import  renderPage from "./lib/renderPage.js";
//import  renderMoviePage from "./lib/renderPage.js";
import { getMovie } from "./static/getMovies.js";

//function initApp(api){
const app = express();
app.engine("handlebars", engine());
app.set("view engine", "handlebars");
app.set("views", "./templates");

app.get("/", async (request, response) => {
    response.render("index");
});

app.get("/allMovies", async (request, response) =>{
    response.render("allMovies");
});
app.get("/events", async (request, response) =>{
    response.render("events");
}) 

app.get("/movies/:movieId", async (request, response) => {
    const movie = await getMovie(request.params.movieId);
    response.render("movieInfo", { movie});
    //renderMoviePage(response, "movieInfo", movie);
})

app.use("*/static", express.static("./static"));
app.use("*/public", express.static("public"));
app.listen(5080);
