typedef struct Obj_82DF1C20 Obj_82DF1C20;
struct Obj_82DF1C20 {
    struct {
        void *f0, *f4, *f8, *fc;
        int (*f10)(Obj_82DF1C20 *self, int arg);
    } *vt;
};

typedef struct Node_82DF1C20 Node_82DF1C20;
struct Node_82DF1C20 {
    char pad[0xc];
    Node_82DF1C20 *child;
    char pad10[0xc];
    int value;
};

extern void fn_82DF1810(void *a, char *b, int value, int r);

void fn_82DF1C20(void *a, char *b, int c, Node_82DF1C20 *node, int e, Obj_82DF1C20 *obj, int arg)
{
    int r = obj->vt->f10(obj, arg);
    while (node->child != 0) {
        node = node->child;
    }
    fn_82DF1810(a, b - 0xc, node->value, r);
}
