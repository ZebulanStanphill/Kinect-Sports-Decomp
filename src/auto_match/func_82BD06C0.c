typedef struct Node_82BD06C0 Node_82BD06C0;
struct Node_82BD06C0 {
    int pad[7];
    Node_82BD06C0 *next;
};

typedef struct List_82BD06C0 {
    int pad;
    int count;
    Node_82BD06C0 *head;
} List_82BD06C0;

void fn_82BD06C0(List_82BD06C0 *list, int *index, Node_82BD06C0 **node)
{
    if (list->head == 0) {
        *node = 0;
        *index = 6;
        return;
    }
    *index = 0;
    for (*node = list->head; *index + 7 < list->count; *node = (*node)->next) {
        *index += 7;
    }
    *index = list->count - *index - 1;
}
