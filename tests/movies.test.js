import { expect, test } from "@jest/globals";
import request from "supertest";

import app from "../lib/app.js";

test("Home page shows movie cards", async () => {
    const response = await request(app)
        .get("/")
        .expect("Content-Type", /html/)
        .expect(200);
    expect(response.text).toMatch("Encanto");
    expect(response.text).toMatch("Forrest Gump");
    expect(response.text).toMatch("Training Day");
})