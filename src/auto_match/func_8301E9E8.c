typedef struct Obj_8301E9E8 Obj_8301E9E8;
typedef struct { void *(*f0)(Obj_8301E9E8 *self, int flags); } VT_8301E9E8;
struct Obj_8301E9E8 {
    VT_8301E9E8 *vt;
    int refs;
    int pad8;
    int fc;
};
typedef struct {
    char pad[0x1628];
    char cs[0x1c];
    char list[4];
} G_8301E9E8;
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern void fn_82FFFA70(void *list, int v);
extern void fn_82FA5190(int heap, void *p);
extern G_8301E9E8 *lbl_832642E0;
extern int lbl_831BC768;

int fn_8301E9E8(Obj_8301E9E8 *o)
{
    int n;
    char *cs = lbl_832642E0->cs;
    RtlEnterCriticalSection(cs);
    o->refs--;
    n = o->refs;
    if (n == 0) {
        char *cs2 = lbl_832642E0->cs;
        int fc = o->fc;
        int heap;
        RtlEnterCriticalSection(cs2);
        fn_82FFFA70(cs2 + 0x1c, fc);
        RtlLeaveCriticalSection(cs2);
        heap = lbl_831BC768;
        o->vt->f0(o, 0);
        fn_82FA5190(heap, o);
    }
    RtlLeaveCriticalSection(cs);
    return n;
}
