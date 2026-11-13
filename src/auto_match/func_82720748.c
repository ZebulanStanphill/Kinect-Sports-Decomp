extern char lbl_82010394[];

typedef struct Visitor_82720748 {
    void *vtable;
    int a;
    int b;
} Visitor_82720748;

extern unsigned char fn_82720090(void *self, void *node, void *ctx, Visitor_82720748 *visitor);

unsigned char fn_82720748(void *self, void *node, void *ctx, int a, int b)
{
    Visitor_82720748 v;
    if (node == 0)
        return 0;
    v.vtable = lbl_82010394;
    v.a = a;
    v.b = b;
    fn_82720090(self, node, ctx, &v);
    return 1;
}
