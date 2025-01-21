export async function getMovies(){
    const response = await fetch("https://plankton-app-xhkom.ondigitalocean.app/api/movies");
    const payload = await response.json();
    return payload.data
}

export async function getMovie(id){

}