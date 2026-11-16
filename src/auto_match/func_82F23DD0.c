typedef struct Entry_82F23DD0 {
    int reserved;
    int values[6]; /* 0x4 */
    char pad01c[0xf8];
} Entry_82F23DD0;

typedef struct State_82F23DD0 {
    char pad000[0x2d4];
    int format;         /* 0x2d4 */
    unsigned int count; /* 0x2d8 */
    char pad2dc[0x814];
    int state; /* 0xaf0 */
    char pad0af4[0x1360];
    Entry_82F23DD0 *entries; /* 0x1e54 */
    char pad1e58[0x2c3c];
    int first;  /* 0x4a94 */
    int second; /* 0x4a98 */
    int third;  /* 0x4a9c */
    char pad4aa0[0x22b4];
    int enabled; /* 0x6d54 */
    char pad6d58[0xde0];
    int ready; /* 0x7b38 */
} State_82F23DD0;

extern void fn_82F0F9A0(State_82F23DD0 *, int);
extern void fn_82F23B08(State_82F23DD0 *);
extern void fn_82F23C88(State_82F23DD0 *);
extern void fn_82BA02A8(State_82F23DD0 *, int, int, int, int, int, Entry_82F23DD0 *);

void fn_82F23DD0(State_82F23DD0 *self)
{
    if (self->enabled != 0) {
        if (self->ready != 0) {
            if (self->state == 0 || self->state == 4) {
                fn_82F0F9A0(self, 13);
                return;
            }
        } else {
            if (self->state != 0 && self->state != 4) {
                fn_82BA02A8(self, 0, self->format, self->first, self->second, self->third, self->entries);
                fn_82F0F9A0(self, 21);
                return;
            } else {
                fn_82BA02A8(self, 0, self->format, self->first, self->second, self->third, self->entries);
                fn_82F0F9A0(self, 19);
                return;
            }
        }
    } else {
        if (self->state == 0 || self->state == 4) {
            fn_82F0F9A0(self, 13);
            return;
        }
        if (self->state == 2) {
            Entry_82F23DD0 *entry = self->entries;
            unsigned int index;
            for (index = 0; index < self->count; index++, entry++) {
                int *value = entry->values;
                int component;
                for (component = 0; component < 6; component++, value++) {
                    if (*value > 0) {
                        *value = 1;
                    }
                }
            }
        }
    }
    fn_82F23B08(self);
    fn_82F23C88(self);
}
