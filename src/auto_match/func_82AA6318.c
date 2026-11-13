typedef struct Node_82AA6318 {
    char pad[0x8];
    struct Node_82AA6318 *next;   /* 0x08 */
} Node_82AA6318;

typedef struct Obj_82AA6318 {
    char pad[0x228];
    Node_82AA6318 *head;          /* 0x228 */
} Obj_82AA6318;

extern void fn_8265C990(void *p, unsigned int tag);

void fn_82AA6318(Obj_82AA6318 *self)
{
    Node_82AA6318 *node = self->head;

    self->head = node->next;
    fn_8265C990(node, 0x618d0000);
}
