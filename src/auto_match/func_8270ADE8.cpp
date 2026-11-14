typedef struct Node_8270ADE8 {
    int f0;
    struct Node_8270ADE8 *child;
    struct Node_8270ADE8 *sibling;
    unsigned int base;
    unsigned int start;
    unsigned int end;
} Node_8270ADE8;

typedef struct Ctx_8270ADE8 {
    int f0;
    int f4;
    unsigned int gap;
} Ctx_8270ADE8;

class Visitor_8270ADE8 {
public:
    virtual void slot0();
    virtual void visit(int arg, int zero, unsigned int start, unsigned int end);
};

extern "C" void fn_8270ADE8(Ctx_8270ADE8 *ctx, Node_8270ADE8 *node, Visitor_8270ADE8 *v, int arg)
{
    unsigned int adj;

    for (; node != 0; node = node->sibling) {
        fn_8270ADE8(ctx, node->child, v, arg);
        adj = node->base + ctx->gap == node->start ? ctx->gap : 0;
        v->visit(arg, 0, (node->start - adj + 0xfff) & ~0xfffu, (node->end + adj) & ~0xfffu);
    }
}
