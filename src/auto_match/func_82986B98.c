typedef struct Node_82986B98 {
    char pad0[8];
    struct Node_82986B98 *child;
    char padc[4];
    unsigned int flags;
    char pad14[4];
    int value;
} Node_82986B98;
typedef struct Parser_82986B98 {
    char pad0[0x18];
    Node_82986B98 *list;
} Parser_82986B98;
extern void *fn_82930318(int n);
extern Node_82986B98 *fn_829304E0(void *p, void *a, Node_82986B98 *next, const char *s);
extern Node_82986B98 *fn_82930458(void *src);
extern int fn_829843D0(Parser_82986B98 *self, Node_82986B98 *node, int value);
extern void fn_82980D80(Parser_82986B98 *self, int a);
long fn_82986B98(Parser_82986B98 *self, void *src)
{
    void *p;
    Node_82986B98 *n;
    Node_82986B98 *c;
    int hr;

    p = fn_82930318(0x14);
    if (p != 0)
        n = fn_829304E0(p, 0, self->list, "UsageType");
    else
        n = 0;
    if (n == 0) {
        fn_82980D80(self, 0);
        return 0x8007000e;
    }
    self->list = n;
    if (src != 0) {
        c = fn_82930458(src);
        n->child = c;
        if (c == 0) {
            fn_82980D80(self, 0);
            return 0x8007000e;
        }
        hr = fn_829843D0(self, c, c->value);
        if (hr < 0)
            return hr;
        c->flags &= ~0xe00;
    }
    return 0;
}
