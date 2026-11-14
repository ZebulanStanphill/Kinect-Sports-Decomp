typedef struct Node_82B8D3D0 {
    char pad[0x24];
    unsigned int parentLink;
} Node_82B8D3D0;

extern unsigned char fn_82AF4968(Node_82B8D3D0 *node, Node_82B8D3D0 *ancestor);
extern void fn_82B8B8A0(void *self, Node_82B8D3D0 *a, Node_82B8D3D0 *b, unsigned char swapped, unsigned char slow);

static __forceinline unsigned char IsAncestor(Node_82B8D3D0 *node, Node_82B8D3D0 *ancestor)
{
    Node_82B8D3D0 *n = node;
    do {
        unsigned int link = ((Node_82B8D3D0 *)((unsigned int)n & ~1u))->parentLink;
        if (link & 1)
            return 0;
        n = (Node_82B8D3D0 *)((link & ~1u) - 0x28);
        if (n == 0)
            return 0;
    } while (n != ancestor);
    return 1;
}

void fn_82B8D3D0(void *self, Node_82B8D3D0 *a, Node_82B8D3D0 *b, unsigned char swapped, unsigned char slow)
{
    unsigned char ok;
    if (slow)
        ok = fn_82AF4968(b, a);
    else
        ok = IsAncestor(b, a);
    if (ok) {
        fn_82B8D3D0(self, b, a, !swapped, slow);
        return;
    }
    fn_82B8B8A0(self, a, b, swapped, slow);
}
