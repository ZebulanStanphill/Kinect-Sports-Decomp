typedef struct Node_8301B970 {
    char pad0[0x24];
    char lock[0xc];
    unsigned char pinned;   /* 0x30 */
    unsigned char refs;     /* 0x31 */
} Node_8301B970;

extern int fn_82FF5CB8(void *lock, void *arg);
extern int fn_8301B6D8(void *ctx, Node_8301B970 *node);

int fn_8301B970(void *ctx, Node_8301B970 *node, void *arg)
{
    int result = 0x29;
    if (fn_82FF5CB8(node->lock, arg) == 1) {
        unsigned char refs = --node->refs;
        if (node->pinned == 0 && refs == 0) {
            result = fn_8301B6D8(ctx, node);
        } else {
            result = 1;
        }
    }
    return result;
}
