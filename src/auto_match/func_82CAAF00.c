typedef struct List_82CAACB8 {
    void *head;
    void *tail;
    void *freeHead;
    void *freeTail;
    int count;          /* 0x10 */
} List_82CAACB8;

typedef struct Queue_82CAAF00 {
    int cursor;                 /* 0x00 */
    int pad4[2];
    List_82CAACB8 *list;        /* 0x0c */
} Queue_82CAAF00;

extern int fn_82CAACB8(List_82CAACB8 *list, int *out, int index);

void fn_82CAAF00(Queue_82CAAF00 *self, int *out, int index)
{
    List_82CAACB8 *list = self->list;
    int count = list->count;
    if (count != 0 && index <= count - 1) {
        if (index >= 0 || self->cursor == count) {
            self->cursor--;
        }
        fn_82CAACB8(list, out, index);
        return;
    }
    *out = 0;
}
