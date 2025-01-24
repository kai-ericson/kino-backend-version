* {
  margin: 0px;
  padding: 0px;
  box-sizing: border-box;
  font-family: "Roboto", serif;
  color: #ffffff;
}

body {
  background-color: #0e0e1b;
}

header {
  background-color: #0e0e1b;
  padding: 1rem;
  display: flex;
  flex-direction: column;
  align-items: center;
}
header .kinoLogo {
  max-width: 100vw;
  height: auto;
  margin-bottom: 1rem;
}
header .navContainer {
  display: flex;
  align-items: center;
  justify-content: space-between;
  width: 95%;
  gap: 1rem;
}
header .headerNav {
  display: flex;
  flex-wrap: wrap;
  gap: 1rem;
}
header .headerNav .headerNavItem {
  text-decoration: none;
  color: #ffffff;
  font-size: 2rem;
}
header .searchBar {
  display: flex;
  align-items: center;
  gap: 0.5rem;
}
header .searchBar .searchInput {
  padding: 0.5rem;
  border: none;
  border-radius: 4px;
  outline: none;
  font-size: 1rem;
}
header .searchBar .searchBtn {
  padding: 0.5rem 1rem;
  border: none;
  background-color: #175dcc;
  color: #ffffff;
  border-radius: 4px;
  font-size: 1rem;
  cursor: pointer;
}

* {
  margin: 0px;
  padding: 0px;
  font-family: "Roboto", serif;
}

.skiReviewerSection {
  background-color: #0e0e1b;
  width: 100vw;
  display: flex;
  padding-top: 30px;
  gap: 1rem;
  justify-content: center;
}

.skiReviewer {
  width: 25vw;
  border-radius: 20%;
}

/*.movieModalWrapper {

  //position: fixed;
  background-color: $backgroundColor;
  top: 0px;
  width: 100%;
  height: 100%;
  overflow: auto; 
 }*/
.allMoviesBtn {
  position: absolute;
  left: 70%;
  margin: 1rem;
  border: none;
  background-color: #175dcc;
  color: white;
  font-size: 1.5rem;
  padding: 0.5rem;
  top: 0px;
}

.exitBtn {
  color: white;
  font-size: 50px;
  display: block;
  position: relative;
  float: right;
  margin: 2rem;
  cursor: pointer;
}

/* moviecontent layout */
.movieContent {
  display: grid;
  grid-template-rows: 40%;
  margin-left: auto;
  margin-right: auto;
  width: 80%;
  height: 100%;
  margin-top: 2rem;
  color: #ffffff;
}

.mediaWrapper {
  grid-row-start: 1;
  display: flex;
  width: 100%;
  height: 100%;
  gap: 2rem;
  margin-bottom: 5rem;
}
.mediaWrapper .movieImg {
  width: 60%;
  flex-shrink: 0;
  height: 100%;
}
.mediaWrapper .movieInfoBox {
  width: calc(40% - 2rem);
  height: 100%;
  flex-shrink: 0;
  object-fit: cover;
}
.mediaWrapper .movieInfoBox .rightColumn {
  width: calc(60% - 2rem);
}
.mediaWrapper .movieInfoBox .rightColumn .rightTitle {
  font-size: 2.5rem;
  padding: 2rem 0;
}
.mediaWrapper .movieInfoBox .rightColumn .descriptionContainer p {
  font-size: 1.25rem;
  line-height: 1.5;
}

/*.movieInfoBox {
   grid-row-start: 2;
   display: flex;
   gap: 2rem;
   height: 520px;


   .rightColumn {
      width: calc(60% - 2rem);

      .rightTitle {
         font-size: 2.5rem;
         padding: 2rem 0;
      }

      .descriptionContainer {
         p {
            font-size: 1.25rem;

            line-height: 1.5;
         }
      }
   }
}*/
.topTitle {
  place-self: center;
  font-family: sans-serif;
  margin-top: 50px;
  color: black;
}

.lineX {
  margin-top: 50px;
}

.topThree {
  display: grid;
  grid-template-columns: minmax(0, 1.8fr) minmax(0, 1fr);
  gap: 5px;
  margin: 5%;
  overflow: hidden;
  border-radius: 10px;
  user-select: none;
  box-shadow: black 0px 0px 9px 0.01px;
}
.topThree button {
  padding: 10px 20px;
  border: none;
  font-family: sans-serif;
  border-radius: 7px;
  cursor: pointer;
  max-height: fit-content;
  background-color: blue;
  color: white;
}
.topThree button:hover {
  background-color: white;
  color: black;
}
.topThree .containerLeft {
  background-color: #0e0e1b;
}
.topThree .containerLeft .imgLeft {
  width: 100%;
  height: 89%;
}
.topThree .containerLeft .imgLeft:hover {
  opacity: 0.8;
}
.topThree .containerLeft .infoCard {
  display: flex;
  justify-content: space-between;
  padding: 5px 10px;
}
.topThree .containerRight {
  display: grid;
  grid-template-rows: 1fr 1fr;
  gap: 5px;
}
.topThree .containerRight .movieCardTop {
  background-color: #0e0e1b;
}
.topThree .containerRight .movieCardTop .imgTop {
  max-width: 100%;
  max-height: 100%;
}
.topThree .containerRight .movieCardTop .imgTop:hover {
  opacity: 0.8;
}
.topThree .containerRight .movieCardTop .infoCard {
  display: flex;
  justify-content: space-between;
  padding: 5px 10px;
}
.topThree .containerRight .movieCardBottom {
  background-color: #0e0e1b;
}
.topThree .containerRight .movieCardBottom .imgBottom {
  max-width: 100%;
  max-height: 100%;
}
.topThree .containerRight .movieCardBottom .imgBottom:hover {
  opacity: 0.8;
}
.topThree .containerRight .movieCardBottom .infoCard {
  display: flex;
  justify-content: space-between;
  padding: 5px 10px;
}

.upComingEvents {
  display: grid;
}
.upComingEvents .eventLine {
  margin: 50px 0px;
}
.upComingEvents h2 {
  color: black;
  margin-left: 50px;
}
.upComingEvents .cardsContainer {
  margin: 0px 30px 0px 30px;
  display: flex;
  padding: 20px;
  gap: 20px;
}
.upComingEvents .cardsContainer .eventCard {
  display: grid;
  background-color: #0e0e1b;
  max-width: fit-content;
  overflow: hidden;
  border-radius: 10px;
  padding-bottom: 20px;
}
.upComingEvents .cardsContainer .eventCard .eventInfo {
  color: white;
  margin-left: 10px;
}
.upComingEvents .cardsContainer .eventCard #eventBtn {
  max-width: fit-content;
  place-self: end;
  margin-right: 20px;
  padding: 5px 10px;
  background-color: white;
  color: black;
  border: none;
  border-radius: 5px;
  cursor: pointer;
}
.upComingEvents .cardsContainer .eventCard #eventBtn:hover {
  background-color: blue;
  color: white;
}

footer {
  background-color: #0e0e1b;
  font-size: 1.5rem;
  height: 100%;
  width: 100%;
}
footer nav {
  display: grid;
  padding-top: 5rem;
  grid-template-columns: 17rem 17rem 17rem auto;
  grid-template-rows: auto auto auto;
}
footer .footerNav {
  text-decoration: none;
  color: #ffffff;
  text-align: left;
  padding: 0.5rem 5rem 0.5rem 5rem;
  width: 100%;
}
footer .footerAboutUsLink {
  grid-column: 1;
  grid-row: 1;
}
footer .footerAllMoviesLink {
  grid-column: 1;
  grid-row: 2;
}
footer .footerInstagramLink {
  grid-column: 2;
  grid-row: 1;
}
footer .footerFacebookLink {
  grid-column: 2;
  grid-row: 2;
}
footer .footerXLink {
  grid-column: 2;
  grid-row: 3;
  padding-bottom: 3rem;
}
footer .footerTosLink {
  grid-column: 3;
  grid-row: 1;
}
footer .footerPrivacyPolicyLink {
  grid-column: 3;
  grid-row: 2;
}

.allMovies {
  display: flex;
  flex-direction: column;
  align-items: center;
  gap: 20px;
  margin: 20px;
}

.movies {
  display: flex;
  flex-wrap: wrap;
  gap: 15px;
  justify-content: center;
  align-items: flex-start;
}

.movieWrapper {
  background-color: #101827;
  display: grid;
  margin: 10px 0;
  border-radius: 10px;
  overflow: hidden;
  width: 300px;
  transition: transform 0.2s, box-shadow 0.2s;
  object-fit: contain;
}

.movieWrapper:hover {
  box-shadow: 0 0 9px 4px rgba(255, 181, 9, 0.5);
  transform: scale(1.009);
}

.movieImage {
  width: 100%;
  object-fit: cover;
}

.movieCardHeader {
  color: white;
  text-align: center;
  padding: 10px;
}

.movieBtn {
  max-width: fit-content;
  text-decoration: none;
  place-self: end;
  padding: 10px;
  margin: 10px;
  border: none;
  border-radius: 10px;
  font-family: "Work Sans", sans-serif;
  font-weight: bold;
  cursor: pointer;
  background-color: #2d7dfe;
  color: white;
  transition: background-color 0.2s;
}

.movieBtn:hover {
  background-color: #ffb509;
  color: white;
}

/*# sourceMappingURL=main.cc.map */
