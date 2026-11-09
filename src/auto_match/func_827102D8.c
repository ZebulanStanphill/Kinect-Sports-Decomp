typedef struct Ref_827102D8 { int a, b, count; } Ref_827102D8;
typedef struct { Ref_827102D8 *p; } Handle_827102D8;
typedef struct { int v0; int ctx; char *data; } Object_827102D8;
extern unsigned char fn_82695468(Object_827102D8 *, int);
extern void fn_826954C0(Object_827102D8 *, const char *, int, int);
extern Handle_827102D8 *fn_82694A78(Handle_827102D8 *, void *);
extern void fn_82681838(int, Handle_827102D8 *);
extern void fn_826944C8(Ref_827102D8 *);
extern char lbl_82005EA4[];
void fn_827102D8(Object_827102D8 *o)
{
    if (!fn_82695468(o, 8)) {
        fn_826954C0(o, lbl_82005EA4, 0, 0);
    } else {
        Handle_827102D8 tmp;
        char *p = o->data ? o->data - 0x10 : 0;
        Ref_827102D8 *r;
        fn_82681838(o->ctx, fn_82694A78(&tmp, p + 0x30));
        r = tmp.p;
        if (--r->count == 0) fn_826944C8(r);
    }
}
