typedef struct Inner_82A4A8C8 { char pad[0x18]; int a; int pad1c, pad20; int b; int c; } Inner_82A4A8C8;
typedef struct Obj_82A4A8C8 {
    char pad[0x28];
    int n28;
    int pad2c;
    Inner_82A4A8C8 *in;
    char pad34[0x80 - 0x34];
    int f80;
} Obj_82A4A8C8;
extern void fn_82A518E0(void *);
void fn_82A4A8C8(Obj_82A4A8C8 *o)
{
    o->in->a = o->in->a - 1;
    { int t = o->f80 != 0; o->in->b = o->in->b - t; }
    o->in->c = o->in->c - o->n28;
    fn_82A518E0(o);
}
