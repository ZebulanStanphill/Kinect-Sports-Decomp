typedef struct Slot_82486628 {
    int state;
    char data[0x41c];
} Slot_82486628;

typedef struct Self_82486628 {
    char pad0[0xc58];
    Slot_82486628 slots[3];      /* 0xc58 */
    char pad1918[0x18c0 - 0xc58 - 3 * 0x420];
    unsigned int mode;           /* 0x18c0 */
} Self_82486628;

extern void fn_82486278(Self_82486628 *self);
extern void fn_82A1DD38(void *dst, const void *src, unsigned int size);

void fn_82486628(Self_82486628 *self)
{
    int i;
    switch (self->mode) {
    case 0:
        for (i = 0; i < 3; i++) {
            if (self->slots[i].state == 2)
                self->slots[i].state = 4;
        }
        for (i = 0; i < 3; i++) {
            if (self->slots[i].state == 3)
                self->slots[i].state = 4;
        }
        for (i = 0; i < 2; i++) {
            if (self->slots[i].state == 4) {
                fn_82A1DD38(&self->slots[i], &self->slots[i + 1], sizeof(Slot_82486628));
                self->slots[i + 1].state = 4;
            }
        }
        break;
    case 1:
        break;
    default:
        fn_82486278(self);
        break;
    }
}
