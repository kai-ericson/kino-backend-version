import { movieCard } from "/static/movies.js";
import { getMovies, getMovie } from "/static/getMovies.js";

// to decide where movieCards should be appended
const figureCard = document.querySelector("figure.movies");

showMovies();


async function showMovies(){
    console.log("in show movies");
    const movies = await getMovies();
    console.log("movie title: "+movies[1].title);
    movieCard.createMovieCardsFromArray(movies, figureCard);
    //movieCard.clickEventMovieModal(movies);
}

