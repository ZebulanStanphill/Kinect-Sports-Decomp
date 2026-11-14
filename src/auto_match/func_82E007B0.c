typedef struct Target_82E007B0 {
    char pad0[0x2c];
    int value;                              /* 0x2c */
} Target_82E007B0;

typedef struct Entry_82E007B0 {
    Target_82E007B0 *target;                /* 0x00 */
    char pad4[0x5c];
} Entry_82E007B0;

typedef struct Owner_82E007B0 {
    char pad0[0xc];
    int value;                              /* 0x0c */
    Entry_82E007B0 *entries;                /* 0x10 */
    int count;                              /* 0x14 */
} Owner_82E007B0;

void fn_82E007B0(Owner_82E007B0 *self, int value)
{
    int i;
    int count = self->count;
    self->value = value;
    for (i = 0; i < count; i++) {
        Target_82E007B0 *target = self->entries[i].target;
        if (target != 0) {
            target->value = value;
        }
    }
}
