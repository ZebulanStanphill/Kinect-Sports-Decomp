typedef struct Node_82AE94F0 {
    char pad[0x20];
    struct Node_82AE94F0 *next;     /* 0x20 */
} Node_82AE94F0;

typedef struct List_82AE94F0 {
    Node_82AE94F0 *head;            /* 0x0 */
    char set[0x34];                 /* 0x4 */
    void *ctx;                      /* 0x38 */
} List_82AE94F0;

extern unsigned char fn_82ABDA10(Node_82AE94F0 *node);
extern unsigned char fn_82AC8B10(void *set, Node_82AE94F0 *node);
extern void fn_82AE9470(void *set, Node_82AE94F0 *node);

extern void fn_82AA66A8(void *ctx, int code);

Node_82AE94F0 *fn_82AE94F0(List_82AE94F0 *self)
{
    Node_82AE94F0 **link = &self->head;
    Node_82AE94F0 *node;

    for (node = self->head; node != 0; node = node->next) {
        if (fn_82ABDA10(node)) {
            if (!fn_82AC8B10(self->set, node))
                fn_82AA66A8(self->ctx, 0x12c0);
            *link = node->next;
            fn_82AE9470(self->set, node);
            break;
        }
        link = &node->next;
    }
    return node;
}
