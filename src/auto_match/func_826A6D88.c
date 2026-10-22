extern void *fn_826957D0(void *self, int a);
extern void fn_826959C8(void *p);
extern double fn_826972E0(void *a, int b);

typedef struct {
    unsigned char kind;
    char pad[3];
    unsigned char nan;
} Result;

typedef struct {
    int f0;
    Result *result;
    char pad[0x10];
    int f18;
    int count;
} Node;

static void SetBool(Result *r, unsigned char v)
{
    fn_826959C8(r);
    r->kind = 2;
    r->nan = v;
}

void fn_826A6D88(Node *node)
{
    int arg;
    double d;

    if (node->count < 1) {
        SetBool(node->result, 1);
    } else {
        arg = node->f18;
        d = fn_826972E0(fn_826957D0(node, 0), arg);
        SetBool(node->result, (*(unsigned __int64 *)&d & 0x7ff0000000000000) == 0x7ff0000000000000 &&
                 (*(unsigned __int64 *)&d & 0xfffffffffffff) != 0);
    }
}
