typedef struct Obj_83055F28 Obj_83055F28;
struct Obj_83055F28 {
    struct {
        int pad0;
        void (*f4)(Obj_83055F28 *);
        unsigned char (*f8)(Obj_83055F28 *);
        void (*fc)(Obj_83055F28 *);
    } *vt;
    int m4;
    unsigned m8;
    char padc[4];
    char cs[0x1c];
    int m2c;
    int m30;
    int m34;
    int m38;
    char pad3c[0x48 - 0x3c];
    unsigned m48;
};
typedef struct Pair_83055F28 {
    int first;
    int second;
} Pair_83055F28;
typedef struct Trip_83055F28 {
    int first;
    int second;
    int third;
} Trip_83055F28;

extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern unsigned fn_82A2A650(int, void *, int, unsigned, int);
extern void fn_82A1E0D0(int, int);

int fn_83055F28(Obj_83055F28 *o)
{
    Pair_83055F28 a;
    Trip_83055F28 b;
    unsigned char run;
    unsigned r;
    unsigned lim;
    unsigned cur;
    unsigned lt;

    b.first = o->m2c;
    b.second = o->m34;
    b.third = o->m38;
    a.second = o->m30;
    a.first = o->m2c;
    run = 1;
    o->vt->fc(o);
    do {
        r = fn_82A2A650(2, &a, 0, 0xffffffff, 1);
        if (r != 0) {
            r = fn_82A2A650(3, &b, 0, o->m4, 1);
        }
        switch (r) {
        case 0:
            if (o->vt->f8(o) != 0) {
                run = 0;
            } else {
                fn_82A1E0D0(100, 1);
            }
            break;
        case 0xc0:
            break;
        case 1:
        case 2:
        case 0x102:
            RtlEnterCriticalSection(o->cs);
            cur = o->m48;
            lim = o->m8;
            lt = cur < lim;
            RtlLeaveCriticalSection(o->cs);
            if (lt) {
                o->vt->f4(o);
            }
            break;
        default:
            return 1;
        }
    } while (run);
    return 0;
}
