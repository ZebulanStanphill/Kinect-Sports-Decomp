#include <string.h>

unsigned char fn_824858E0(const unsigned char *p)
{
    const unsigned char *q;
    unsigned char c;
    unsigned char b;
    q = p;
    c = *p;
    b = 0x62;
    if (c == 0x62) {
        int d = (int)"boxing_main" - (int)p;
        do {
            q++;
            if (c == 0) goto match1;
            b = q[d];
            c = *q;
        } while (c == b);
    }
    if (c - b == 0) {
match1:
        return 2;
    }
    q = p;
    c = *p;
    b = 0x66;
    if (c == 0x66) {
        int d = (int)"football_main" - (int)p;
        do {
            q++;
            if (c == 0) goto match2;
            b = q[d];
            c = *q;
        } while (c == b);
    }
    if (c - b == 0) {
match2:
        return 3;
    }
    q = p;
    c = *p;
    b = 0x76;
    if (c == 0x76) {
        int d = (int)"volleyball_main" - (int)p;
        do {
            q++;
            if (c == 0) goto match3;
            b = q[d];
            c = *q;
        } while (c == b);
    }
    if (c - b == 0) {
match3:
        return 4;
    }
    q = p;
    c = *p;
    b = 0x74;
    if (c == 0x74) {
        int d = (int)"tabletennis_main" - (int)p;
        do {
            q++;
            if (c == 0) goto match4;
            b = q[d];
            c = *q;
        } while (c == b);
    }
    if (c - b == 0) {
match4:
        return 5;
    }
    q = p;
    c = *p;
    b = 0x62;
    if (c == 0x62) {
        int d = (int)"bowling_main" - (int)p;
        do {
            q++;
            if (c == 0) goto match5;
            b = q[d];
            c = *q;
        } while (c == b);
    }
    if (c - b == 0) {
match5:
        return 6;
    }
    {
        unsigned char found = 0 != strstr((const char *)p, "athletics_main");
        return found ? 7 : 0;
    }
}
