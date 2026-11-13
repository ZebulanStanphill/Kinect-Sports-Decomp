typedef struct Node_828A3C08 {
    struct Node_828A3C08 *next;
    struct Node_828A3C08 *prev;
    float time;
    char data[4];
} Node_828A3C08;

typedef struct List_828A3C08 {
    Node_828A3C08 *head;
    unsigned int size;
} List_828A3C08;

typedef struct Object_828A3C08 {
    char pad[0x2f4];
    List_828A3C08 list;
} Object_828A3C08;

extern void fn_828B55B0(void *data);
extern void fn_8265CA20(void *p);

void fn_828A3C08(Object_828A3C08 *self, float now)
{
    List_828A3C08 *list = &self->list;
    Node_828A3C08 *p = self->list.head->next;

    if (p != self->list.head) {
        float timeout = 10.0f;
        do {
            if (now - p->time > timeout) {
                Node_828A3C08 *next = p->next;
                if (p != list->head) {
                    p->prev->next = next;
                    p->next->prev = p->prev;
                    fn_828B55B0(p->data);
                    fn_8265CA20(p);
                    --list->size;
                }
                p = next;
            } else {
                p = p->next;
            }
        } while (p != self->list.head);
    }
}
