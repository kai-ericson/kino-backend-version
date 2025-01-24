import express from "express";
import { engine } from "express-handlebars";
import { getMovie, getMovies } from "../static/getMovies.js";


const app = express();
app.engine("handlebars", engine());
app.set("view engine", "handlebars");
app.set("views", "./templates");

app.get("/", async (request, response) => {
    const movies = await getMovies();
    response.render("index", {movies});

});

app.get("/allMovies", async (request, response) =>{
    response.render("allMovies");
});
app.get("/events", async (request, response) =>{
    response.render("events");
}) 

app.get("/movies/:movieId", async (request, response) => {
    const movie = await getMovie(request.params.movieId);
    response.render("movieInfo", { movie });
})

app.use("*/static", express.static("./static"));
app.use("*/public", express.static("public"));
export default app;