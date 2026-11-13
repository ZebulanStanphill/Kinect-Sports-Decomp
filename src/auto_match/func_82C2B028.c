typedef struct Node_82C2B028 {
    unsigned char pad[0x20];
    unsigned int pending;
} Node_82C2B028;

extern long fn_82C2A538(void *self, Node_82C2B028 *node);

long fn_82C2B028(void *self, Node_82C2B028 *node)
{
    if (node->pending > 0) {
        node->pending = 0;
    }
    return fn_82C2A538(self, node);
}
