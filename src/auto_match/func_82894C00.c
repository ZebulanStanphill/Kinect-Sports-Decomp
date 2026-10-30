typedef struct Str_82894C00 {
    union {
        char buf[16];
        char *ptr;
    } u;
    unsigned int size;
    unsigned int res;
} Str_82894C00;
typedef struct Val_82894C00 {
    Str_82894C00 str;
    char pad[28];
    unsigned int *rc;
} Val_82894C00;
typedef struct Node_82894C00 {
    struct Node_82894C00 *left;
    struct Node_82894C00 *parent;
    struct Node_82894C00 *right;
    int pad;
    Val_82894C00 val;
    char padn[4];
    char color;
    char isnil;
} Node_82894C00;
extern void fn_822315A0(unsigned int *rc);
extern void fn_8265CA20(void *p);

void fn_82894C00(void *alloc, Node_82894C00 *root)
{
    Node_82894C00 *p;
    Val_82894C00 *v;

    for (p = root; p->isnil == 0; root = p) {
        fn_82894C00(alloc, p->right);
        p = p->left;
        v = &root->val;
        if (v->rc != 0) {
            fn_822315A0(v->rc);
        }
        if (v->str.res >= 0x10) {
            fn_8265CA20(v->str.u.ptr);
        }
        v->str.res = 15;
        v->str.size = 0;
        v->str.u.buf[0] = 0;
        fn_8265CA20(root);
    }
}
