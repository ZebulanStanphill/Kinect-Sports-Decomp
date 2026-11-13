typedef struct Obj_8229DB00 Obj_8229DB00;
typedef struct {
    void *f0;
    void *f4;
    void (*f8)(Obj_8229DB00 *o, int a);
} Vt_8229DB00;
struct Obj_8229DB00 {
    Vt_8229DB00 *vt;
    int f4[5];
    int f18;
    int f1c;
    int f20;
};

int fn_8229DB00(Obj_8229DB00 *o, const unsigned char *p)
{
    const unsigned char *q;
    unsigned char c;
    unsigned char b;
    q = p;
    c = *p;
    b = 0x68;
    if (c == 0x68) {
        int d = (int)"hasStartedCurrentAnimation" - (int)p;
        do {
            q++;
            if (c == 0) goto match1;
            b = q[d];
            c = *q;
        } while (c == b);
    }
    if (c - b == 0) {
match1:
        o->f18 = 1;
        return 1;
    }
    q = p;
    c = *p;
    b = 0x68;
    if (c == 0x68) {
        int d = (int)"hasFinishedCurrentAnimation" - (int)p;
        do {
            q++;
            if (c == 0) goto match2;
            b = q[d];
            c = *q;
        } while (c == b);
    }
    if (c - b == 0) {
match2:
        o->f18 = 0;
        o->vt->f8(o, 1);
        return 1;
    }
    q = p;
    c = *p;
    b = 0x61;
    if (c == 0x61) {
        int d = (int)"advertisingIsReadyForDisplay" - (int)p;
        do {
            q++;
            if (c == 0) goto match3;
            b = q[d];
            c = *q;
        } while (c == b);
    }
    if (c - b == 0) {
match3:
        o->f20 = 1;
        return 1;
    }
    q = p;
    c = *p;
    b = 0x61;
    if (c == 0x61) {
        int d = (int)"advertisingHasBecomeInvalid" - (int)p;
        do {
            q++;
            if (c == 0) goto match4;
            b = q[d];
            c = *q;
        } while (c == b);
    }
    if (c - b == 0) {
match4:
        o->f20 = 0;
        return 1;
    }
    return 0;
}
