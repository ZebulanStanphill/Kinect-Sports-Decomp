typedef struct Entry_82BC08A0 {
    int value;                          /* 0x0 */
    int key;                            /* 0x4 */
    struct Entry_82BC08A0 *next;        /* 0x8 */
} Entry_82BC08A0;

typedef struct List_82BC08A0 {
    void *owner;                        /* 0x0 */
    Entry_82BC08A0 *head;               /* 0x4 */
} List_82BC08A0;

typedef struct Self_82BC08A0 {
    char pad[0x2c];
    List_82BC08A0 *list;                /* 0x2c */
} Self_82BC08A0;

extern void fn_82BC0810(List_82BC08A0 *list, int key, int value);

void fn_82BC08A0(Self_82BC08A0 *self, int key, int value)
{
    List_82BC08A0 *list = self->list;

    if (list->head == 0) {
        fn_82BC0810(list, key, value);
        return;
    }
    if (key == self->list->head->key) {
        self->list->head->value = value;
        return;
    }
    fn_82BC0810(list, key, value);
}

