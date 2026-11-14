typedef struct Node_825C6838 {
    int pad;
    struct Node_825C6838 *next;
} Node_825C6838;

typedef struct List_825C6838 {
    char pad[0x8];
    Node_825C6838 *head;
} List_825C6838;

void fn_825C6838(List_825C6838 *self)
{
    Node_825C6838 *node;
    for (node = self->head; node != 0; node = node->next) {
    }
}
