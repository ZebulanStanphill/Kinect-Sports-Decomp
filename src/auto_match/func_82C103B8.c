typedef struct VT {
    char pad[0x4c];
    void (*fn4c)(void *self);
} VT;
typedef struct S {
    VT *vt;
    int pad[10];
    void *p2c;
    int pad2[10];
    void *p58;
} S;
extern VT lbl_820ECFA0;
extern void fn_8265C990(void *p, int flags);
extern void fn_82A1E658(void *p);
extern void fn_82C06390(S *s);

void fn_82C103B8(S *s)
{
    s->vt = &lbl_820ECFA0;
    if (s->p2c != 0) {
        fn_8265C990(s->p2c, 0x208c8002);
    }
    if (s->p58 != 0) {
        fn_82A1E658(s->p58);
    }
    s->vt->fn4c(s);
    fn_82C06390(s);
}
