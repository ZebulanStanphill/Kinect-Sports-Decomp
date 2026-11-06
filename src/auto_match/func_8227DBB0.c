typedef struct { int f0; int f4; unsigned char flag; } Ev_8227DBB0;
typedef struct {
    char pad[0x30];
    unsigned int active;
    int f34;
    int f38;
    void *anim;
} Obj_8227DBB0;
extern void fn_8266F640(void *anim, int a);
extern void fn_8266F628(void *anim, int a);

void fn_8227DBB0(Obj_8227DBB0 *o, const unsigned char *p, Ev_8227DBB0 *ev)
{
    const unsigned char *q = p;
    unsigned char c;
    unsigned char b;
    c = *p;
    b = 0x61;
    if (c == 0x61) {
        int d = (int)"activeFlagHasChanged" - (int)p;
        do {
            q++;
            if (c == 0) goto match1;
            b = q[d];
            c = *q;
        } while (c == b);
    }
    if (c - b == 0) {
match1:
        o->active = ev->flag;
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
        fn_8266F640(o->anim, 1);
        fn_8266F628(o->anim, 1);
        o->f34 = 0;
        o->f38 = 0;
        o->active = 0;
    }
}
