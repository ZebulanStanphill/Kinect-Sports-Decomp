typedef struct Swizzle_82BA97C8 {
    unsigned char c[4];
} Swizzle_82BA97C8;

typedef struct Node_82BA97C8 {
    char pad0[0x38];
    int f38;
    char pad3c[0x14];
    int f50;
    char pad54[0x2c];
    Swizzle_82BA97C8 swizzle;
} Node_82BA97C8;

extern Node_82BA97C8 *fn_82BC24F0(int kind, int arg);
extern void fn_82BA05E8(Node_82BA97C8 *node, int n, int arg);

Node_82BA97C8 *fn_82BA97C8(Node_82BA97C8 *src, int a, int b, int c)
{
    Swizzle_82BA97C8 s;
    Node_82BA97C8 *node;
    int i;

    s = src->swizzle;
    for (i = 0; i < 4; i++) {
        s.c[i] = s.c[i] != 1;
    }
    node = fn_82BC24F0(0x31, c);
    node->f38 = a;
    node->f50 = 0;
    node->swizzle = s;
    fn_82BA05E8(node, 1, b);
    return node;
}
