extern void fn_826944C8(void *node);
extern unsigned char fn_82695468(void *call, int type);
extern void fn_826954C0(void *call, const char *name, int a, int b);
extern void *fn_826957D0(void *call, int index);
extern void fn_826959C8(void *value);
extern void fn_82696D38(void *out, void *arg, void *ctx, int a, int b);
extern void *fn_826A7398(void *ctx);
extern void fn_826FFF98(void *loader, void *obj, void *url, int b);
extern double lbl_82005710;

typedef struct Value_8271BE00 {
    unsigned char type;
    char pad[3];
    unsigned char b;   /* 0x4 */
} Value_8271BE00;

typedef struct Str_8271BE00 {
    void *first;
    int pad4;
    int refs;          /* 0x8 */
} Str_8271BE00;

typedef struct Obj_8271BE00 {
    char pad[0x30];
    double f30;        /* 0x30 */
} Obj_8271BE00;

typedef struct Call_8271BE00 {
    int pad0;
    Value_8271BE00 *result;   /* 0x4 */
    char *thisPtr;            /* 0x8 */
    char pad[0xc];
    void *ctx;                /* 0x18 */
    int argCount;             /* 0x1c */
} Call_8271BE00;

void fn_8271BE00(Call_8271BE00 *call)
{
    Value_8271BE00 *r;
    if (call->argCount == 0) {
        r = call->result;
        fn_826959C8(r);
        r->type = 2;
        r->b = 0;
    } else if (fn_82695468(call, 0x1b) == 0) {
        fn_826954C0(call, "LoadVars", 0, 0);
    } else {
        Obj_8271BE00 *obj = call->thisPtr != 0 ? (Obj_8271BE00 *)(call->thisPtr - 0x10) : 0;
        Str_8271BE00 *url;
        void *ctx = call->ctx;
        void *arg = fn_826957D0(call, 0);
        void *first;
        fn_82696D38(&url, arg, ctx, -1, 0);
        obj->f30 = lbl_82005710;
        first = url->first;
        fn_826FFF98(fn_826A7398(call->ctx), obj, first, 0);
        r = call->result;
        fn_826959C8(r);
        r->type = 2;
        r->b = 1;
        {
            Str_8271BE00 *n = url;
            int v = n->refs - 1;
            n->refs = v;
            if (v == 0)
                fn_826944C8(n);
        }
    }
}
