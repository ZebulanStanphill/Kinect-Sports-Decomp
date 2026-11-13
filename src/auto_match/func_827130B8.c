/* Script binding: converts the object's number to a string (radix from the first argument, default 10),
   interns it in the context string table and returns the ref-counted string through a temporary. */
typedef struct Ref_827130B8 {
    int a;
    int b;
    int count;
} Ref_827130B8;

typedef struct Ctx_827130B8 {
    char pad[0x78];
    char *strings;
} Ctx_827130B8;

typedef struct Obj_827130B8 {
    int pad0;
    void *result;
    char *buffer;
    char pad0c[0x18 - 0xc];
    Ctx_827130B8 *ctx;
    int count;
} Obj_827130B8;

extern unsigned char fn_82695468(Obj_827130B8 *p, int kind);
extern void fn_826954C0(Obj_827130B8 *p, const char *name, int a, int b);
extern int fn_826957D0(Obj_827130B8 *p, int index);
extern double fn_826972E0(int arg, Ctx_827130B8 *ctx);
extern char *fn_82713060(char *p, int radix);
extern Ref_827130B8 *fn_82694700(char *table, char *s);
extern void fn_82681838(void *result, Ref_827130B8 **value);
extern void fn_826944C8(Ref_827130B8 *r);

void fn_827130B8(Obj_827130B8 *param_1)
{
    char *obj;
    int radix;
    Ref_827130B8 *r;

    if (fn_82695468(param_1, 9) == 0) {
        fn_826954C0(param_1, "Number", 0, 0);
        return;
    }
    obj = param_1->buffer ? param_1->buffer - 0x10 : 0;
    radix = 10;
    if (param_1->count > 0) {
        radix = (int)fn_826972E0(fn_826957D0(param_1, 0), param_1->ctx);
    }
    r = fn_82694700(param_1->ctx->strings + 0x254, fn_82713060(obj, radix));
    {
        Ref_827130B8 *t = r;
        r->count++;
        fn_82681838(param_1->result, &t);
    }
    if (--r->count == 0) {
        fn_826944C8(r);
    }
}
