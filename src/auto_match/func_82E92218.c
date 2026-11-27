#include <string.h>

typedef struct Slot_82E92218 {
    int key;     /* 0x00 */
    void *value; /* 0x04 */
} Slot_82E92218;

typedef struct Entry_82E92218 {
    Slot_82E92218 slots[5]; /* 0x00 */
} Entry_82E92218;

typedef struct Queue_82E92218 {
    Entry_82E92218 *data;  /* 0x00 */
    unsigned int capacity; /* 0x04 */
    char pad08[12];
    unsigned int read;  /* 0x14 */
    unsigned int write; /* 0x18 */
    unsigned int count; /* 0x1c */
} Queue_82E92218;

/* Returns the key of the entry `back` steps behind the newest one and, when asked,
   the three history keys of the entries that follow it. */
int fn_82E92218(Queue_82E92218 *self, unsigned int back, int *history)
{
    unsigned int limit = self->count;
    unsigned int index;
    unsigned int i;

    if (self->capacity < limit) {
        limit = self->capacity;
    }
    if (back >= limit) {
        return 0;
    }
    index = self->read;
    if (index != 0) {
        index = index - 1;
    } else {
        index = self->capacity - 1;
    }
    if (index < back) {
        index = self->capacity - back + index;
    } else {
        index = index - back;
    }
    if (history != 0) {
        memset(history, 0, 3);
        for (i = 0; i < 3; i++) {
            if (i < back) {
                history[i] = self->data[(index + i + 1) % self->capacity].slots[i + 1].key;
            }
        }
    }
    return self->data[index].slots[4].key;
}
