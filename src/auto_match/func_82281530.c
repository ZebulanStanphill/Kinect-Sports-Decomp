typedef struct {
    char pad0[0x44];
    int f44;
    char pad48[0x6c - 0x48];
    int f6c;
    char pad70[0x8c - 0x70];
    void *f8c;
} Sub_82281530;
typedef struct {
    char pad0[0xa0];
    int fa0;
} Mgr_82281530;
typedef struct {
    int f0;
    int f4;
    int f8;
    int fC;
    Sub_82281530 *f10;
    void *f14;
    void *f18;
} Obj_82281530;
extern Mgr_82281530 *fn_82270B70(void);

int fn_82281530(Obj_82281530 *o)
{
    Sub_82281530 *s = o->f10;
    if (s != 0) {
        return s->f44 == 0 || s->f44 == 2 || s->f8c != 0 || s->f6c != 0;
    }
    return o->f8 != 0 && o->f14 == o->f18 && fn_82270B70()->fa0 == 0;
}
