.container {
  display: flex;
  flex-direction: row;
}

footer {
  background: rgb(149, 57, 12);
  background: linear-gradient(270deg, rgb(149, 57, 12) 8.48%, rgb(83, 40, 161) 72.24%);
  border: 0ch;
}
footer nav-footer {
  display: flex;
  flex-direction: row;
}
footer li {
  list-style-type: none;
}

@media screen and (min-weight: 1240) {
  .header {
    max-width: 1200px;
  }
}
header {
  padding: 0 0 201px;
  color: white;
}

.header-main {
  background-image: url("../images/banner.png");
  background-position: center;
  background-size: cover;
}

.header-artist {
  background-image: url("../images/Morten Harket.png");
  background-position: center;
  background-size: cover;
}

.top {
  position: absolute;
  top: 25px;
  text-transform: uppercase;
  font-size: 11px;
  box-sizing: border-box;
}

.logo {
  width: 150px;
  float: left;
  box-sizing: border-box;
}
.logo > img {
  width: 24px;
  height: 24px;
  float: left;
  margin-right: 16px;
  box-sizing: border-box;
}
.logo > p {
  margin: 0 90px 0 0;
  float: left;
  box-sizing: border-box;
}

.nav {
  width: 350px;
  margin: 0;
  padding: 0;
  float: left;
  list-style: none;
}
.nav > li {
  display: inline;
  margin-right: 24px;
  box-sizing: border-box;
}

.header-search {
  margin-top: 8px;
  float: right;
}

.search {
  padding: 5px 10px;
  min-width: 248px;
  background-color: #3C3B3D;
  border-radius: 50px;
  border: none;
  box-sizing: border-box;
}
.search::placeholder {
  font-size: 13.3px;
  text-transform: uppercase;
}

.banner-main {
  margin: 0 20px 0;
  padding-top: 250px;
  text-align: center;
}
.banner-main h1 {
  margin-top: 0;
  margin-bottom: 0;
}
.banner-main h2 {
  margin: 0 auto;
}
.banner-main p {
  margin: 31px auto 17px;
}

.banner-artist {
  padding: 200px 20px;
}

.form {
  margin: auto;
  max-width: 570px;
}
.form div {
  display: flex;
  flex-wrap: wrap;
  justify-content: space-between;
}
.form input {
  width: 273px;
  min-height: 50px;
  padding-left: 20px;
  margin-bottom: 1.5rem;
  border: #3C3B3D solid 2px;
  border-radius: 3px;
  background-color: transparent;
  box-sizing: border-box;
}
.form input::placeholder {
  color: white;
}
.form .btn {
  width: 100%;
  background-color: green;
}

.icon-heart {
  width: 20px;
  height: 18px;
  fill: white;
}

.icon-play {
  width: 20px;
  height: 20px;
  fill: white;
}

.btn-group {
  display: flex;
  flex-wrap: wrap;
  margin-top: 48px;
}

#page-pricing {
  background-color: #08020D;
  padding: 100px;
}

.catalog {
  display: flex;
  flex-wrap: wrap;
  max-width: 1200px;
  text-align: center;
}

.catalog-item {
  padding: 0 1.5rem;
  margin: 25px;
  background-position: center;
  background-size: cover;
  border-radius: 1rem;
  flex: 1 1 200px;
}
.catalog-item.free {
  background-image: url(../images/subscribe_1.png);
}
.catalog-item.standart {
  background-image: url(../images/subscribe_2.png);
}
.catalog-item.vip {
  background-image: url(../images/subscribe_3.png);
}
.catalog-item h3 {
  margin-bottom: 200px;
}

.catalog-footer {
  font-weight: 400;
  font-size: 12.8px;
  line-height: 150%;
}

* {
  box-sizing: border-box;
}

@font-face {
  font-family: Roboto;
  font-weight: 400;
  src: url("/src/fonts/Roboto-Regular.ttf");
}
body {
  font-family: "Roboto";
  font-size: 18px;
  line-height: 1.5;
  color: #cacaca;
  background-color: #08020d;
}

h1 {
  font-size: 60px;
  line-height: 90px;
  font-weight: 700;
  text-transform: uppercase;
}

h2 {
  font-size: 38px;
  line-height: 57px;
  font-weight: 700;
  text-transform: uppercase;
}

h3 {
  font-size: 18px;
  font-weight: 700;
  line-height: 27px;
}

.text-center {
  text-align: center;
}

.btn {
  padding: 20px 30px;
  border: 1px solid #FFFFFF;
  border-radius: 5px;
}

/*# sourceMappingURL=main.c.map */
