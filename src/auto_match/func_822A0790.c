typedef struct {
    int f0;
    void *anim;
    int f8;
    int state;
    int f10;
    int f14;
    int f18;
} Obj_822A0790;
extern void fn_8266F640(void *anim, int a);
extern void fn_8266F628(void *anim, int a);

void fn_822A0790(Obj_822A0790 *o, const unsigned char *p)
{
    const unsigned char *q = p;
    unsigned char c;
    unsigned char b;
    c = *p;
    b = 0x68;
    if (c == 0x68) {
        int d = (int)"hasBeenActivated" - (int)p;
        do {
            q++;
            if (c == 0) goto match1;
            b = q[d];
            c = *q;
        } while (c == b);
    }
    if (c - b == 0) {
match1:
        return;
    }
    q = p;
    c = *p;
    b = 0x68;
    if (c == 0x68) {
        int d = (int)"hasReachedHoldPosition" - (int)p;
        do {
            q++;
            if (c == 0) goto match2;
            b = q[d];
            c = *q;
        } while (c == b);
    }
    if (c - b == 0) {
match2:
        o->state = 2;
        return;
    }
    q = p;
    c = *p;
    b = 0x68;
    if (c == 0x68) {
        int d = (int)"hasReachedEnd" - (int)p;
        do {
            q++;
            if (c == 0) goto match3;
            b = q[d];
            c = *q;
        } while (c == b);
    }
    if (c - b == 0) {
match3:
        fn_8266F640(o->anim, 1);
        fn_8266F628(o->anim, 1);
        o->f14 = 0;
        o->f18 = 0;
    }
}
