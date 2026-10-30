typedef struct Str_828A5FF0 {
    union {
        char buf[16];
        char *ptr;
    } u;
    unsigned int size;
    unsigned int res;
} Str_828A5FF0;
typedef struct Val_828A5FF0 {
    Str_828A5FF0 str;
    char pad[8];
    unsigned int *rc;
} Val_828A5FF0;
typedef struct Node_828A5FF0 {
    struct Node_828A5FF0 *left;
    struct Node_828A5FF0 *parent;
    struct Node_828A5FF0 *right;
    Val_828A5FF0 val;
    
    char color;
    char isnil;
} Node_828A5FF0;
extern void fn_822315A0(unsigned int *rc);
extern void fn_8265CA20(void *p);

void fn_828A5FF0(void *alloc, Node_828A5FF0 *root)
{
    Node_828A5FF0 *p;
    Val_828A5FF0 *v;

    for (p = root; p->isnil == 0; root = p) {
        fn_828A5FF0(alloc, p->right);
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
