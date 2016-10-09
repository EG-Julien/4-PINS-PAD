# 1 "D:\\Lab\\PAD_4_PINS\\pad.c"
# 1 "D:\\Lab\\PAD_4_PINS\\pad.c"
const int V1[2] = {1000, 1023};
const int V2[2] = {640, 660};
const int V3[2] = {280, 300};
const int V4[2] = {160, 190};
String touch = "";

void setup() {
    Serial.begin(9600);
    Serial.println("Next");
}

void loop() {
    touch = "";
    int v1 = analogRead(0);
    int v2 = analogRead(1);
    int v3 = analogRead(2);
    int v4 = analogRead(3);

    /* LIGNE 1 */

    if (v1 > V1[0] && v1 < V1[1]) {
        touch = "A";
    }
    if (v2 > V1[0] && v2 < V1[1]) {
        touch = "3";
    }
    if (v3 > V1[0] && v3 < V1[1]) {
        touch = "2";
    }
    if (v4 > V1[0] && v4 < V1[1]) {
        touch = "1";
    }

    /* LIGNE 2 */

    if (v1 > V2[0] && v1 < V2[1]) {
        touch = "B";
    }
    if (v2 > V2[0] && v2 < V2[1]) {
        touch = "6";
    }
    if (v3 > V2[0] && v3 < V2[1]) {
        touch = "5";
    }
    if (v4 > V2[0] && v4 < V2[1]) {
        touch = "4";
    }

    /* LIGNE 3 */

    if (v1 > V3[0] && v1 < V3[1]) {
        touch = "C";
    }
    if (v2 > V3[0] && v2 < V3[1]) {
        touch = "9";
    }
    if (v3 > V3[0] && v3 < V3[1]) {
        touch = "8";
    }
    if (v4 > V3[0] && v4 < V3[1]) {
        touch = "7";
    }

    /* LIGNE 4 */

    if (v1 > V4[0] && v1 < V4[1]) {
        touch = "D";
    }
    if (v2 > V4[0] && v2 < V4[1]) {
        touch = "#";
    }
    if (v3 > V4[0] && v3 < V4[1]) {
        touch = "0";
    }
    if (v4 > V4[0] && v4 < V4[1]) {
        touch = "*";
    }

    if (touch != "") {
        Serial.println(touch);
        Serial.println("--------------------------------------------------------------------------");
    }

    delay(50);
}
