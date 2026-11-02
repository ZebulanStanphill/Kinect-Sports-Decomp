typedef struct Obj_83014728 Obj_83014728;
typedef struct { void *(*f0)(Obj_83014728 *self, int flags); } VT_83014728;
struct Obj_83014728 {
    VT_83014728 *vt;
    int refs;
    int pad8;
    int fc;
};
typedef struct {
    char pad[0x1304];
    char cs[0x1c];
    char list[4];
} G_83014728;
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern void fn_82FFFA70(void *list, int v);
extern void fn_82FA5190(int heap, void *p);
extern G_83014728 *lbl_832642E0;
extern int lbl_831BC768;

int fn_83014728(Obj_83014728 *o)
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
