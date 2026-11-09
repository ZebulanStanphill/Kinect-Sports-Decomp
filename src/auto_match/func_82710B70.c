typedef struct Ref_82710B70 {
    int a;
    int b;
    int count;
} Ref_82710B70;

typedef struct Obj_82710B70 {
    int pad0;
    void *result;
    char *buffer;
    char pad0c[0x18 - 0xc];
    int ctx;
    int count;
} Obj_82710B70;

extern char lbl_82005EA4[];
extern unsigned char fn_82695468(Obj_82710B70 *p, int kind);
extern void fn_826954C0(Obj_82710B70 *p, const char *name, int a, int b);
extern int fn_826957D0(Obj_82710B70 *p, int index);
extern double fn_826972E0(int arg, int ctx);
extern int fn_82693A98(char *p);
extern void *fn_82710AD8(Ref_82710B70 **out, char *p, int first, int last);
extern void fn_82681838(void *result, void *value);
extern void fn_826944C8(Ref_82710B70 *r);

void fn_82710B70(Obj_82710B70 *param_1)
{
    char *obj;
    int first;
    int last;
    int v;
    Ref_82710B70 *ref;
    Ref_82710B70 *r;

    if (fn_82695468(param_1, 8) == 0) {
        fn_826954C0(param_1, lbl_82005EA4, 0, 0);
        return;
    }
    obj = param_1->buffer ? param_1->buffer - 0x10 : 0;
    first = 0;
    last = -1;
    if (param_1->count >= 1) {
        first = (int)fn_826972E0(fn_826957D0(param_1, 0), param_1->ctx);
        if (first < 0) {
            first = fn_82693A98(obj + 0x30) + first;
        }
    }
    if (param_1->count >= 2) {
        v = (int)fn_826972E0(fn_826957D0(param_1, 1), param_1->ctx);
        last = v < 0 ? 0 : v;
    }
    fn_82681838(param_1->result, fn_82710AD8(&ref, obj + 0x30, first, last));
    r = ref;
    if (--r->count == 0) {
        fn_826944C8(r);
    }
}
