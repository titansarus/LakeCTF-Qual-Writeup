#include <bits/stdc++.h>


using namespace std;

int e1 = 0;
int e2 = 0;

int c = 0;
int e = 0;
int p = 0;
int np = 0;
int uni = 0;
int prevp = 0;
int pprevp = 0;
int sum = 0;
int temp = 0;
int ucount = 0;
int on = 0;
int musts = 0;
int isOn = 0;
int aOn = 0;
int cOn = 0;
int even = 0;
int odd = 0;
int rX = 0;
int rValue = 0;
int nX = 0;
int nValue = 0;
int lt = 0;
int gt = 0;
int eq = 0;
int m = 0;
int adda = 0;
int addb = 0;
int addc = 0;
int addd = 0;
int adde = 0;
int addf = 0;
int addg = 0;
int addh = 0;
int addi = 0;
int addj = 0;
int addk = 0;
int addl = 0;
int addm = 0;
int addn = 0;
int nmem = 0;
int ltmem = 0;
int gtmem = 0;
int eqmem = 0;
int mmema = 0;
int mmemb = 0;
int mmemc = 0;
int mmemd = 0;
int mmeme = 0;
int mmemf = 0;
int mmemg = 0;
int mmemh = 0;
int mmemi = 0;
int mmemj = 0;
int mmemk = 0;
int mmeml = 0;
int mmemm = 0;
int mmemn = 0;
int mmemo = 0;
int mmemp = 0;
int pmema = 0;
int pmemb = 0;
int pmemc = 0;
int pmemd = 0;
int dataa = 0;
int datab = 0;
int datac = 0;
int datad = 0;
int datae = 0;
int dataf = 0;
int datag = 0;
int datah = 0;
int datai = 0;
int dataj = 0;
int datak = 0;
int datal = 0;
int datam = 0;
int datan = 0;


void must() {

    if (m == 1) {
        mmema--;
    }

    if (m == 2) {
        mmemb--;
    }
    if (m == 3) {
        mmemc--;
    }
    if (m == 4) {
        mmemd--;
    }
    if (m == 5) {
        mmeme--;
    }
    if (m == 6) {
        mmemf--;
    }
    if (m == 7) {
        mmemg--;
    }
    if (m == 8) {
        mmemh--;
    }
    if (m == 9) {
        mmemi--;
    }
    if (m == 10) {
        mmemj--;
    }
    if (m == 11) {
        mmemk--;
    }
    if (m == 12) {
        mmeml--;
    }

    if (m == 13) {
        mmemm--;
    }
    if (m == 14) {
        mmemn--;
    }
    if (m == 15) {
        mmemo--;
    }
    if (m == 16) {
        mmemp--;
    }

    musts += 1;
}

void err() {
    e++;
}


void step() {
    if (c % 2 == 1) {
        c = c * 3 + 1;
    } else {
        c = c / 2;
    }
}

void flag() {
    printf("Success");

}


void eval() {


    p = p * np;
    if (c < 5) {
        err();
    }

    if (np == 1) {
        temp = 1;
        if (ucount == 0) {
            if (c == 203978920) {
            } else {
                err();
            }
            temp = 0;
        }
        if (ucount == 1) {
            if (c == 76492096) {
            } else {
                err();
            }
            if (sum == 123) {
            } else {
                err();
            }
            temp = 0;
        }
        if (ucount == 2) {
            if (c == 2390378) {
            } else {
                err();
            }
            if (p == 360) {
            } else {
                err();
            }
            temp = 0;
        }
        if (ucount == 3) {
            if (c == 896392) {
            } else {
                err();
            }
            if (isOn == 0) {
                err();
            }
            if (sum == 36) {
            } else {
                err();
            }
            temp = 0;
        }
        if (ucount == 4) {
            if (c == 47272) {
            } else {
                err();
            }
            if (sum == 25) {
            } else {
                err();
            }
            temp = 0;
        }
        if (ucount == 5) {
            if (c == 416) {
            } else {
                err();
            }
            if (sum == 14) {
            } else {
                err();
            }
            temp = 0;
        }
        if (ucount == 6) {
            if (c == 52) {
            } else {
                err();
            }
            temp = 0;
        }
        if (temp > 0) {
            err();
        }
        p = 1;
        isOn = 1;
        ucount++;
    } else {


        sum = np;
        sum += prevp;
        sum += pprevp;


        if (c < 52) {
            if (uni < 96) {
                err();
            }
            if (np < prevp) {
                err();
            }
        } else {


            if (c == 725258376) {
                if (np == 29) {
                } else {
                    err();
                }
            }
            if (c < 19123025) {
                if (c > 4780755) {
                    if (uni > 96) {
                        err();
                    }
                }
            }
            if (c == 208) {
                if (uni == 'a') {
                } else {
                    err();
                }
            }
            if (c == 104) {
                if (uni == 'b') {
                } else {
                    err();
                }
            }


            if (c == 362629188) {
                pmema = np;
            }
            if (c == 9561512) {
                pmemb = np;
            }
            if (c == 63028) {
                pmemc = np;
            }
            if (c == 50994730) {
                pmemd = np;
            }


            if (np == pmema) {
                temp = 0;
                if (c == 362629188) {
                    temp++;
                }
                if (c == 67992973) {
                    temp++;
                }
                if (c == 25497365) {
                    temp++;
                }
                if (c == 19123024) {
                    temp++;
                }
                if (c == 3585568) {
                    temp++;
                }
                if (c == 11818) {
                    temp++;
                }
                if (c == 277) {
                    temp++;
                }
                if (temp < 1) {
                    err();
                }
            }


            if (c == 362629188) {
                if (np == pmema) {
                } else {
                    err();
                }
            }
            if (c == 67992973) {
                if (np == pmema) {
                } else {
                    err();
                }
            }
            if (c == 25497365) {
                if (np == pmema) {
                } else {
                    err();
                }
            }
            if (c == 19123024) {
                if (np == pmema) {
                } else {
                    err();
                }
            }
            if (c == 3585568) {
                if (np == pmema) {
                } else {
                    err();
                }
            }
            if (c == 11818) {
                if (np == pmema) {
                } else {
                    err();
                }
            }
            if (c == 277) {
                if (np == pmema) {
                } else {
                    err();
                }
            }

            if (np == pmemb) {
                temp = 0;
                if (c == 9561512) {
                    temp++;
                }
                if (c == 1195189) {
                    temp++;
                }
                if (c == 252112) {
                    temp++;
                }
                if (c == 31514) {
                    temp++;
                }
                if (c == 17728) {
                    temp++;
                }
                if (c == 832) {
                    temp++;
                }
                if (temp < 1) {
                    err();
                }
            }


            if (c == 9561512) {
                if (np == pmemb) {
                } else {
                    err();
                }
            }
            if (c == 1195189) {
                if (np == pmemb) {
                } else {
                    err();
                }
            }
            if (c == 252112) {
                if (np == pmemb) {
                } else {
                    err();
                }
            }
            if (c == 31514) {
                if (np == pmemb) {
                } else {
                    err();
                }
            }
            if (c == 17728) {
                if (np == pmemb) {
                } else {
                    err();
                }
            }
            if (c == 832) {
                if (np == pmemb) {
                } else {
                    err();
                }
            }


            if (np == pmemc) {
                temp = 0;
                if (c == 63028) {
                    temp++;
                }
                if (c == 554) {
                    temp++;
                }
                if (temp < 1) {
                    err();
                }
            }


            if (c == 63028) {
                if (np == pmemc) {
                } else {
                    err();
                }
            }
            if (c == 554) {
                if (np == pmemc) {
                } else {
                    err();
                }
            }


            if (np == pmemd) {
                temp = 0;
                if (c == 50994730) {
                    temp++;
                }
                if (temp < 1) {
                    err();
                }
            }

            if (c == 50994730) {
                if (np == pmemd) {
                } else {
                    err();
                }
            }


            if (np == prevp) {
                err();
            }
            if (aOn == 1) {
                if (isOn == 1) {
                } else {
                    err();
                }
            }


            if (even == 1) {
                if (c % 2 == 1) {
                    err();
                }
            }
            if (odd == 1) {
                if (c % 2 == 0) {
                    err();
                }
            }


            if (rX == 1) {
                if (rValue == prevp) {
                } else {
                    err();
                }
            }


            if (isOn == 1) {
                isOn = cOn;
            }

            if (gtmem == 1) {
                if (prevp < np) {
                    err();
                }
            }
            if (ltmem == 1) {
                if (prevp > np) {
                    err();
                }
            }
            if (eqmem == 1) {
                if (np == pprevp) {
                } else {
                    err();
                }
            }


            if (nmem == 0) {
            } else {
                if (np == nmem) {
                } else {
                    err();
                }
            }

            if (m > 0) {
                must();
            }
        }
    }


    pprevp = prevp;
    prevp = np;
    cOn = 0;
    aOn = 0;
    even = 0;
    odd = 0;
    rX = 0;
    rValue = 0;
    ltmem = lt;
    gtmem = gt;
    lt = 0;
    gt = 0;
    eqmem = eq;
    eq = 0;

    if (nX == 1) {
        nmem = nValue;
    } else {
        nmem = 0;

    }


    nX = 0;
    nValue = 0;
    m = 0;


    dataa += adda;
    datab += addb;
    datac += addc;
    datad += addd;
    datae += adde;
    dataf += addf;
    datag += addg;
    datah += addh;
    datai += addi;
    dataj += addj;
    datak += addk;
    datal += addl;
    datam += addm;
    datan += addn;


    step();


}


bool verify() {
    if (p != 2075748138) {
        err();
    }
    if (ucount != 7) {
        err();
    }
    if (c != 4) {
        err();
    }
    if (mmema < 0) {
        err();
    }
    if (mmemb < 0) {
        err();
    }
    if (mmemc < 0) {
        err();
    }
    if (mmemd < 0) {
        err();
    }
    if (mmeme < 0) {
        err();
    }
    if (mmemf < 0) {
        err();
    }
    if (mmemg < 0) {
        err();
    }
    if (mmemh < 0) {
        err();
    }
    if (mmemi < 0) {
        err();
    }
    if (mmemj < 0) {
        err();
    }
    if (mmemk < 0) {
        err();
    }
    if (mmeml < 0) {
        err();
    }
    if (mmemm < 0) {
        err();
    }
    if (mmemn < 0) {
        err();
    }
    if (mmemo < 0) {
        err();
    }
    if (mmemp < 0) {
        err();
    }
    if (musts != 17) {
        err();
    }
    if (e > 0) {
        return false;
    }
    return true;
}


void prep() {

    c = 725258376;
    e = 0;
    p = 1;

    np = 0;
    prevp = 0;
    pprevp = 0;

    ucount = 0;
    musts = 0;

    isOn = 1;
    cOn = 0;
    aOn = 0;
    even = 0;
    odd = 0;
    rX = 0;
    rValue = 0;
    lt = 0;
    gt = 0;
    eq = 0;
    nX = 0;
    nValue = 0;
    m = 0;

    gtmem = 0;
    eqmem = 0;
    ltmem = 0;
    nmem = 0;
    adda = 0;
    addb = 0;
    addc = 0;
    addd = 0;
    adde = 0;
    addf = 0;
    addg = 0;
    addh = 0;
    addi = 0;
    addj = 0;
    addk = 0;
    addl = 0;
    addm = 0;
    addn = 0;

    dataa = 395;
    datab = -1738;
    datac = -1814;
    datad = 2298;
    datae = 2107;
    dataf = -122;
    datag = -3508;
    datah = -908;
    datai = -4891;
    dataj = -714;
    datak = 97;
    datal = -2403;
    datam = 332;
    datan = -1549;

    mmema = 3;
    mmemb = 1;
    mmemc = 1;
    mmemd = 1;
    mmeme = 1;
    mmemf = 1;
    mmemg = 2;
    mmemh = 1;
    mmemi = 1;
    mmemj = 1;
    mmemk = 1;
    mmeml = 2;
    mmemm = 1;
    mmemn = 3;
    mmemo = 3;
    mmemp = 2;

    pmema = -1;
    pmemb = -1;
    pmemc = -1;
    pmemd = -1;
}


void texta() {
    np = 31;
    uni = 97;
    adda = -163;
    addb = 35;
    addc = 196;
    addd = -128;
    adde = 55;
    addf = 193;
    addg = 3;
    addh = -67;
    addi = 135;
    addj = -56;
    addk = -71;
    addl = -129;
    addm = 37;
    addn = 190;

}


void textb() {
    np = 47;
    uni = 98;
    adda = 81;
    addb = -22;
    addc = 76;
    addd = 54;
    adde = 157;
    addf = 195;
    addg = 52;
    addh = -44;
    addi = 198;
    addj = -150;
    addk = -132;
    addl = 15;
    addm = 41;
    addn = 152;
}


void textc() {
    np = 43;
    uni = 99;
    adda = -114;
    addb = -59;
    addc = 193;
    addd = -193;
    adde = 119;
    addf = 117;
    addg = -178;
    addh = 113;
    addi = -199;
    addj = 184;
    addk = 116;
    addl = 9;
    addm = 64;
    addn = 16;
}


void textd() {
    np = 11;
    uni = 100;
    rX = 1;
    rValue = 2;
    adda = -59;
    addb = -85;
    addc = -79;
    addd = -170;
    adde = -129;
    addf = 187;
    addg = -151;
    addh = 113;
    addi = -197;
    addj = 80;
    addk = -157;
    addl = -124;
    addm = -174;
    addn = 108;
}


void texte() {
    np = 5;
    uni = 101;
    odd = 1;
    adda = 136;
    addb = -91;
    addc = 171;
    addd = 97;
    adde = -185;
    addf = -136;
    addg = -4;
    addh = -175;
    addi = 167;
    addj = 26;
    addk = 191;
    addl = 82;
    addm = -47;
    addn = -96;
}


void textf() {
    np = 73;
    uni = 102;
    adda = -178;
    addb = 65;
    addc = -5;
    addd = -74;
    adde = 79;
    addf = 181;
    addg = 156;
    addh = -45;
    addi = 113;
    addj = -117;
    addk = -34;
    addl = -64;
    addm = 88;
    addn = 66;
}


void textg() {
    np = 23;
    uni = 103;
    rX = 1;
    rValue = 3;
    nX = 1;
    nValue = 7;
    m = 3;
    adda = 79;
    addb = -57;
    addc = 39;
    addd = -113;
    adde = 81;
    addf = 43;
    addg = 148;
    addh = -126;
    addi = -10;
    addj = 102;
    addk = 16;
    addl = -49;
    addm = -17;
    addn = 121;
}


void texth() {
    np = 101;
    uni = 104;
    nX = 1;
    nValue = 5;
    aOn = 1;
    m = 4;
    adda = 169;
    addb = 133;
    addc = 59;
    addd = 184;
    adde = 53;
    addf = 62;
    addg = -148;
    addh = -198;
    addi = -124;
    addj = -51;
    addk = 3;
    addl = 63;
    addm = -123;
    addn = 0;
}


void texti() {
    np = 7;
    uni = 105;
    adda = -125;
    addb = 132;
    addc = -157;
    addd = -180;
    adde = -170;
    addf = -164;
    addg = 159;
    addh = 63;
    addi = 101;
    addj = -143;
    addk = 40;
    addl = 10;
    addm = -104;
    addn = 69;
}


void textj() {
    np = 59;
    uni = 106;
    rX = 1;
    rValue = 23;
    adda = -190;
    addb = 79;
    addc = 180;
    addd = 137;
    adde = 191;
    addf = 177;
    addg = -48;
    addh = 2;
    addi = -52;
    addj = -60;
    addk = -7;
    addl = -106;
    addm = -140;
    addn = -48;
}


void textk() {
    np = 83;
    uni = 107;
    nX = 1;
    nValue = 49;
    adda = 138;
    addb = 171;
    addc = 153;
    addd = -70;
    adde = 20;
    addf = -97;
    addg = 154;
    addh = 66;
    addi = -18;
    addj = 152;
    addk = 138;
    addl = -2;
    addm = -6;
    addn = 127;
}


void textl() {
    np = 19;
    uni = 108;
    eq = 1;
    rX = 1;
    rValue = 3;
    m = 5;
    adda = -24;
    addb = -146;
    addc = -185;
    addd = 189;
    adde = -30;
    addf = -180;
    addg = -82;
    addh = 78;
    addi = 197;
    addj = -86;
    addk = -103;
    addl = -19;
    addm = 140;
    addn = -190;
}


void textm() {
    np = 53;
    uni = 109;
    nX = 1;
    nValue = 5;
    adda = -104;
    addb = -17;
    addc = 117;
    addd = -144;
    adde = 17;
    addf = 31;
    addg = -104;
    addh = -175;
    addi = 198;
    addj = -59;
    addk = 12;
    addl = -84;
    addm = 99;
    addn = -66;
}


void textn() {
    np = 2;
    uni = 110;
    cOn = 1;
    adda = 5;
    addb = -16;
    addc = 199;
    addd = -176;
    adde = -63;
    addf = -1;
    addg = 109;
    addh = 125;
    addi = 157;
    addj = 48;
    addk = -179;
    addl = 96;
    addm = -123;
    addn = 19;
}


void texto() {
    np = 3;
    uni = 111;
    m = 1;
    adda = -23;
    addb = 169;
    addc = 103;
    addd = -155;
    adde = 143;
    addf = -56;
    addg = 34;
    addh = -155;
    addi = 172;
    addj = 122;
    addk = 102;
    addl = 184;
    addm = -137;
    addn = 131;

}


void textp() {
    np = 79;
    uni = 112;
    nX = 1;
    nValue = 71;
    adda = -165;
    addb = -167;
    addc = -70;
    addd = -117;
    adde = -152;
    addf = 110;
    addg = 88;
    addh = 53;
    addi = -44;
    addj = -145;
    addk = 10;
    addl = 87;
    addm = -172;
    addn = 22;

}


void textq() {
    np = 71;
    uni = 113;
    nX = 1;
    nValue = 79;
    adda = 130;
    addb = -64;
    addc = -91;
    addd = -101;
    adde = -168;
    addf = -192;
    addg = -116;
    addh = -150;
    addi = -121;
    addj = -31;
    addk = 120;
    addl = -92;
    addm = 11;
    addn = -176;

}


void textr() {
    np = 89;
    uni = 114;
    even = 1;
    odd = 1;
    adda = -87;
    addb = 76;
    addc = -156;
    addd = 71;
    adde = -42;
    addf = 198;
    addg = 75;
    addh = 51;
    addi = -46;
    addj = 35;
    addk = -114;
    addl = 191;
    addm = 27;
    addn = -147;
}


void texts() {
    np = 13;
    uni = 115;
    eq = 1;
    nX = 1;
    nValue = 9;
    m = 6;
    adda = 166;
    addb = 43;
    addc = 90;
    addd = -100;
    adde = 28;
    addf = 88;
    addg = 80;
    addh = 11;
    addi = 29;
    addj = -106;
    addk = -34;
    addl = -25;
    addm = 31;
    addn = 189;
}


void textt() {
    np = 17;
    uni = 116;
    cOn = 1;
    rX = 1;
    rValue = 1;
    m = 7;
    adda = -121;
    addb = -137;
    addc = 169;
    addd = -113;
    adde = 98;
    addf = 2;
    addg = -6;
    addh = 16;
    addi = 26;
    addj = -42;
    addk = -55;
    addl = 124;
    addm = 120;
    addn = -12;
}


void textu() {
    np = 37;
    uni = 117;
    rX = 1;
    rValue = 3;
    nX = 1;
    nValue = 9;
    m = 2;
    adda = 6;
    addb = -55;
    addc = -33;
    addd = -37;
    adde = -44;
    addf = -50;
    addg = 94;
    addh = -31;
    addi = 5;
    addj = 126;
    addk = -47;
    addl = 30;
    addm = 40;
    addn = -152;
}


void textv() {
    np = 61;
    uni = 118;
    nX = 1;
    nValue = 97;
    adda = -22;
    addb = 100;
    addc = -95;
    addd = -18;
    adde = 56;
    addf = 142;
    addg = 72;
    addh = 75;
    addi = 65;
    addj = -88;
    addk = 20;
    addl = -149;
    addm = 167;
    addn = -62;
}


void textw() {
    np = 29;
    uni = 119;
    cOn = 1;
    adda = -77;
    addb = 124;
    addc = 70;
    addd = -9;
    adde = -179;
    addf = -26;
    addg = 180;
    addh = -69;
    addi = 144;
    addj = 8;
    addk = -146;
    addl = -129;
    addm = -186;
    addn = 5;

}


void textx() {
    np = 41;
    uni = 120;
    rX = 1;
    rValue = 5;
    nX = 1;
    nValue = 2;
    m = 8;
    adda = -57;
    addb = 109;
    addc = 12;
    addd = -86;
    adde = 38;
    addf = -156;
    addg = -163;
    addh = -50;
    addi = 132;
    addj = -188;
    addk = 176;
    addl = 115;
    addm = 15;
    addn = -75;
}


void texty() {
    np = 67;
    uni = 121;
    nX = 1;
    nValue = 97;
    adda = -157;
    addb = 170;
    addc = 94;
    addd = -109;
    adde = -88;
    addf = 53;
    addg = 125;
    addh = 26;
    addi = -29;
    addj = -16;
    addk = -127;
    addl = 108;
    addm = -111;
    addn = -173;

}


void textz() {
    np = 97;
    uni = 122;
    rX = 1;
    rValue = 71;
    adda = -157;
    addb = -199;
    addc = 138;
    addd = -73;
    adde = -106;
    addf = 140;
    addg = -170;
    addh = 159;
    addi = -136;
    addj = -50;
    addk = -102;
    addl = 108;
    addm = -69;
    addn = -130;
}


void textzero() {
    np = 49;
    uni = 48;
    rX = 1;
    rValue = 43;
    nX = 1;
    nValue = 53;
    m = 9;
    adda = -60;
    addb = 95;
    addc = 30;
    addd = -117;
    adde = 39;
    addf = -24;
    addg = 117;
    addh = 69;
    addi = -36;
    addj = 79;
    addk = -78;
    addl = 49;
    addm = 151;
    addn = -147;

}


void textone() {
    np = 24;
    uni = 49;
    rX = 1;
    rValue = 5;
    m = 10;
    adda = 193;
    addb = -31;
    addc = 144;
    addd = 165;
    adde = 46;
    addf = 21;
    addg = 44;
    addh = 4;
    addi = 138;
    addj = 162;
    addk = 195;
    addl = -95;
    addm = -164;
    addn = -88;
}


void texttwo() {
    np = 144;
    uni = 50;
    adda = -56;
    addb = -42;
    addc = -85;
    addd = -94;
    adde = 12;
    addf = 91;
    addg = 137;
    addh = 58;
    addi = 13;
    addj = -107;
    addk = -36;
    addl = -91;
    addm = 102;
    addn = 136;

}


void textthree() {
    np = 5;
    uni = 51;
    even = 1;
    aOn = 1;
    cOn = 1;
    adda = 83;
    addb = 128;
    addc = -172;
    addd = -70;
    adde = 27;
    addf = 197;
    addg = 177;
    addh = 92;
    addi = 28;
    addj = -32;
    addk = -182;
    addl = 25;
    addm = 119;
    addn = -154;
}


void textfour() {
    np = 3;
    uni = 52;
    rX = 1;
    rValue = 9;
    nX = 1;
    nValue = 2;
    m = 11;
    adda = 160;
    addb = 17;
    addc = -88;
    addd = 157;
    adde = -198;
    addf = -102;
    addg = 84;
    addh = 6;
    addi = 3;
    addj = -30;
    addk = 82;
    addl = 32;
    addm = -142;
    addn = 183;
}


void textfive() {
    np = 2;
    uni = 53;
    lt = 1;
    rX = 1;
    rValue = 5;
    m = 12;
    adda = -163;
    addb = 37;
    addc = 34;
    addd = 67;
    adde = -194;
    addf = -104;
    addg = -58;
    addh = -100;
    addi = 143;
    addj = 3;
    addk = -9;
    addl = 179;
    addm = -168;
    addn = -90;

}


void textsix() {
    np = 36;
    uni = 54;
    adda = 147;
    addb = -23;
    addc = 178;
    addd = -72;
    adde = -50;
    addf = -103;
    addg = -36;
    addh = 83;
    addi = -44;
    addj = -148;
    addk = -98;
    addl = 22;
    addm = 177;
    addn = 106;
}


void textseven() {
    np = 9;
    uni = 55;
    adda = 102;
    addb = -193;
    addc = 72;
    addd = 31;
    adde = -43;
    addf = 195;
    addg = 70;
    addh = 160;
    addi = -170;
    addj = -64;
    addk = -32;
    addl = -42;
    addm = 20;
    addn = -8;
}


void texteight() {
    np = 4;
    uni = 56;
    rX = 1;
    rValue = 1;
    lt = 1;
    cOn = 1;
    m = 13;
    adda = 31;
    addb = -60;
    addc = -55;
    addd = 50;
    adde = -190;
    addf = -172;
    addg = 189;
    addh = 137;
    addi = -67;
    addj = 177;
    addk = -158;
    addl = -114;
    addm = 113;
    addn = 112;
}


void textnine() {
    np = 16;
    uni = 57;
    rX = 1;
    rValue = 2;
    adda = -122;
    addb = 143;
    addc = 173;
    addd = 9;
    adde = 194;
    addf = 0;
    addg = 104;
    addh = 75;
    addi = 196;
    addj = -47;
    addk = 133;
    addl = 72;
    addm = 60;
    addn = 174;

}


void textUnderscore() {
    np = 1;
    uni = 95;
    adda = -45;
    addb = 124;
    addc = -69;
    addd = -14;
    adde = -188;
    addf = -70;
    addg = 132;
    addh = 152;
    addi = 152;
    addj = 117;
    addk = 199;
    addl = 156;
    addm = 130;
    addn = 196;
}


void call_func(char c) {
    switch (c) {
        case 'a':
            texta();
            break;
        case 'b':
            textb();
            break;
        case 'c':
            textc();
            break;
        case 'd':
            textd();
            break;
        case 'e':
            texte();
            break;
        case 'f':
            textf();
            break;
        case 'g':
            textg();
            break;
        case 'h':
            texth();
            break;
        case 'i':
            texti();
            break;
        case 'j':
            textj();
            break;
        case 'k':
            textk();
            break;
        case 'l':
            textl();
            break;
        case 'm':
            textm();
            break;
        case 'n':
            textn();
            break;
        case 'o':
            texto();
            break;
        case 'p':
            textp();
            break;
        case 'q':
            textq();
            break;
        case 'r':
            textr();
            break;
        case 's':
            texts();
            break;
        case 't':
            textt();
            break;
        case 'u':
            textu();
            break;
        case 'v':
            textv();
            break;
        case 'w':
            textw();
            break;
        case 'x':
            textx();
            break;
        case 'y':
            texty();
            break;
        case 'z':
            textz();
            break;
        case '0':
            textzero();
            break;
        case '1':
            textone();
            break;
        case '2':
            texttwo();
            break;
        case '3':
            textthree();
            break;
        case '4':
            textfour();
            break;
        case '5':
            textfive();
            break;
        case '6':
            textsix();
            break;
        case '7':
            textseven();
            break;
        case '8':
            texteight();
            break;
        case '9':
            textnine();
            break;
        case '_':
            textUnderscore();
            break;
        default:
            break;

    }
}

void string_evaluator(string s) {
    prep();
    // check if len s == 7
    for (int i = 0; i < s.length(); i++) {
        call_func(s[i]);
        eval();

    }

    if (e == 0) {

        if (verify()) {
            cout << "hooray" << endl;
            cout << s << endl;
        }
    }


}

char arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u',
              'v', 'w', 'x', 'y', 'z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '_'};


int main() {


    string s;


    string_evaluator("w31c0me_the_8357_n3w_ou7s74ndin9_t3xnologie5_ab_noolwbvf");


    return 0;
}
