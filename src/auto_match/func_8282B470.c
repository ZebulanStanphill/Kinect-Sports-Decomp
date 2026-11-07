typedef struct Node_8282B470 {
    char pad0[0x14];
    unsigned int a;
    unsigned int b;
} Node_8282B470;

typedef struct Obj_8282B470 {
    char pad0[0x38];
    int count;
    char pad3c[0x344 - 0x3c];
    char sub[0x3d4 - 0x344];
    unsigned int *table;
} Obj_8282B470;

extern int fn_82822F60(void *a, void *b, void *c, void *d);
extern void fn_8282AF50(void);

void fn_8282B470(Obj_8282B470 *o, Node_8282B470 *n)
{
    Node_8282B470 *node = n;

    if (node->a != 0) {
        node->a = o->table[node->a - 1];
        node->b = o->table[node->b - 1];
        fn_82822F60(o->sub, node, (void *)fn_8282AF50, &node);
        o->count++;
    }
}
