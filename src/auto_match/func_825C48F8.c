typedef struct Node_825C48F8 {
    int value;
    struct Node_825C48F8 *next;
} Node_825C48F8;

typedef struct {
    int unk0;
    int unk4;
    Node_825C48F8 *head;
} List_825C48F8;

extern void fn_82615B30(int value, float t);

void fn_825C48F8(List_825C48F8 *list, float t)
{
    Node_825C48F8 *n;
    for (n = list->head; n != 0; n = n->next) {
        fn_82615B30(n->value, t);
    }
}
