typedef struct Ref_827101C0 { int a, b, count; } Ref_827101C0;
typedef struct { Ref_827101C0 *p; } Handle_827101C0;
typedef struct { int v0; int ctx; char *data; } Object_827101C0;
extern unsigned char fn_82695468(Object_827101C0 *, int);
extern void fn_826954C0(Object_827101C0 *, const char *, int, int);
extern Handle_827101C0 *fn_82695128(Handle_827101C0 *, void *);
extern void fn_82681838(int, Handle_827101C0 *);
extern void fn_826944C8(Ref_827101C0 *);
extern char lbl_82005EA4[];
void fn_827101C0(Object_827101C0 *o)
{
    if (!fn_82695468(o, 8)) {
        fn_826954C0(o, lbl_82005EA4, 0, 0);
    } else {
        Handle_827101C0 tmp;
        char *p = o->data ? o->data - 0x10 : 0;
        Ref_827101C0 *r;
        fn_82681838(o->ctx, fn_82695128(&tmp, p + 0x30));
        r = tmp.p;
        if (--r->count == 0) fn_826944C8(r);
    }
}
