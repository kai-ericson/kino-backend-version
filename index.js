import express from "express";
import { engine } from "express-handlebars";
import fs from "fs/promises";
import renderPage from "./lib/renderPage.js";

const app = express();
app.engine("handlebars", engine());
app.set("view engine", "handlebars");
app.set("views", "./templates");

app.get("/", async (request, response) => {
    renderPage(response, "index");
});
app.get("/allMovies", async (request, response) =>{
    renderPage(response, "allMovies");
});
app.get("events", async (request, response) =>{
    renderPage(response, "events");
})

app.use("/static", express.static("./static"));
app.use("/public", express.static("public"));
app.listen(5080);