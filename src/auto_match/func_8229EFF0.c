typedef struct {
    void *anim;
    int f4;
    int count;
    int fc;
    int f10;
    int f14;
} Obj_8229EFF0;
extern void fn_8266F640(void *anim, int a);
extern void fn_8266F628(void *anim, int a);

void fn_8229EFF0(Obj_8229EFF0 *o, const unsigned char *p)
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
        o->count++;
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
        if (--o->count <= 0) {
            fn_8266F640(o->anim, 1);
            fn_8266F628(o->anim, 1);
            o->fc = 0;
            o->f10 = 0;
            o->f14 = 0;
        }
    }
}
