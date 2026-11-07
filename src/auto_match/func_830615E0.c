typedef struct Node_830615E0 {
    int pad0;
    struct Node_830615E0 *next;
    int pad8[8];
    int f28;
} Node_830615E0;

typedef struct List_830615E0 {
    int pad0;
    Node_830615E0 *head;
} List_830615E0;

extern float fn_8305DB40(Node_830615E0 *n);
extern void fn_8306AB80(Node_830615E0 **list, Node_830615E0 *n);
extern void fn_83065C40(Node_830615E0 *n);

int fn_830615E0(List_830615E0 *p, float t)
{
    int count;
    Node_830615E0 *cur;

    count = 0;
    cur = p->head;
    while (cur != 0) {
        if (fn_8305DB40(cur) < t) {
            Node_830615E0 *n = cur;
            cur = cur->next;
            fn_8306AB80(&p->head, n);
            n->f28 = 0;
            fn_83065C40(n);
            count++;
        } else {
            cur = cur->next;
        }
    }
    return count;
}
