typedef struct Node_8306AB80 Node_8306AB80;
struct Node_8306AB80 {
    void *owner;
    Node_8306AB80 *prev;
    Node_8306AB80 *next;
    void *list;
};
typedef struct Sub_8306AB80 Sub_8306AB80;
struct Sub_8306AB80 {
    void *target;
    int pad;
    Sub_8306AB80 *next;
    unsigned int active;
};
typedef struct {
    Node_8306AB80 *first;
    Node_8306AB80 *last;
    int count;
    int pad;
    Sub_8306AB80 *subs;
} List_8306AB80;

extern void fn_830683D0(Sub_8306AB80 *);

void fn_8306AB80(List_8306AB80 *list, Node_8306AB80 *n)
{
    Sub_8306AB80 *s;
    if (n->list == list) {
        for (s = list->subs; s != 0; s = s->next) {
            if (s->target == n && s->active != 0) {
                fn_830683D0(s);
            }
        }
        if (n->prev != 0) {
            n->prev->next = n->next;
        } else {
            list->last = n->next;
        }
        if (n->next != 0) {
            n->next->prev = n->prev;
        } else {
            list->first = n->prev;
        }
        n->prev = 0;
        n->next = 0;
        n->list = 0;
        list->count = list->count - 1;
    }
}
