typedef struct Obj_822923A0 {
    char pad[0x34];
    int f34;
    int f38;
} Obj_822923A0;

void fn_822923A0(Obj_822923A0 *o, const unsigned char *p)
{
    const unsigned char *q = p;
    unsigned char c;
    unsigned char b;
    c = *p;
    b = 0x68;
    if (c == 0x68) {
        int d = (int)"hasReachedHoldPosition" - (int)p;
        do {
            q++;
            if (c == 0) return;
            b = q[d];
            c = *q;
        } while (c == b);
    }
    if (c - b == 0) {
        return;
    }
    q = p;
    c = *p;
    b = 0x68;
    if (c == 0x68) {
        int d = (int)"hasReachedEnd" - (int)p;
        do {
            q++;
            if (c == 0) goto match2;
            b = q[d];
            c = *q;
        } while (c == b);
    }
    if (c - b == 0) {
match2:
        o->f34 = 0;
        o->f38 = 0;
    }
}
