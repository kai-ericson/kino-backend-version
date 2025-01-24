const apiBase = "https://plankton-app-xhkom.ondigitalocean.app/api";


export async function getMovies(){
    const response = await fetch(apiBase + "/movies");
    const payload = await response.json();
    const movies = payload.data.map(toMovieObject);
    console.log(movies);
    return movies;
}

export async function getMovie(id){
    const response = await fetch(apiBase + "/movies/" + id);
    const payload = await response.json();
    return toMovieObject(payload.data);
}

function toMovieObject(apiObject){
    return {
        id: apiObject.id,
        ...apiObject.attributes,
    }
}