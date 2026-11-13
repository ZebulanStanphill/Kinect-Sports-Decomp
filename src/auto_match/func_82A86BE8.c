typedef struct Obj_82A86BE8 { int count; void *data; int pad[2]; int inline_buf[1]; } Obj_82A86BE8;
extern void fn_82A86B88(Obj_82A86BE8 *o, int n);
extern unsigned int lbl_832234AC;

Obj_82A86BE8 *fn_82A86BE8(Obj_82A86BE8 *o)
{
    o->data = o->inline_buf;
    o->count = 0;
    fn_82A86B88(o, lbl_832234AC < 3 ? 1 : 2);
    return o;
}
