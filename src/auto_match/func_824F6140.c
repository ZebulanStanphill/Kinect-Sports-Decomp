typedef struct Node_824F6140 {
    int pad;
    struct Node_824F6140 *next;
} Node_824F6140;

typedef struct List_824F6140 {
    char pad[0xc];
    Node_824F6140 *head;
} List_824F6140;

void fn_824F6140(List_824F6140 *self)
{
    Node_824F6140 *node;
    for (node = self->head; node != 0; node = node->next) {
    }
}
