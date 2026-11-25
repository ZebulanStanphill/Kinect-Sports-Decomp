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
    int cursor;          /* 0x00 */
    int pad4[2];         /* 0x04 */
    List_82E914C0 *list; /* 0x0C */
} Owner_82E915E0;

void fn_82E915E0(Owner_82E915E0 *self, int *out, int index)
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
