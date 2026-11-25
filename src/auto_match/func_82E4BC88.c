typedef struct Node_82E914C0 Node_82E914C0;

typedef struct {
    Node_82E914C0 *head;     /* 0x00 */
    Node_82E914C0 *tail;     /* 0x04 */
    Node_82E914C0 *freeHead; /* 0x08 */
    Node_82E914C0 *freeTail; /* 0x0C */
    int count;               /* 0x10 */
} List_82E914C0;

int fn_82E914C0(List_82E914C0 *list, int *out, int index);

typedef struct {
    char pad0[0x230];
    List_82E914C0 *list; /* 0x230 */
    int pad234;          /* 0x234 */
    int cursor;          /* 0x238 */
} Owner_82E4BC88;

void fn_82E4BC88(Owner_82E4BC88 *self, int *out, int index)
{
    int count;

    count = self->list->count;
    if (count != 0 && index <= count - 1) {
        if (index >= 0 || self->cursor == count) {
            self->cursor--;
        }
        fn_82E914C0(self->list, out, index);
        return;
    }
    *out = 0;
}
