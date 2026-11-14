typedef struct Slot_82563230 {
    char pad0[0x14];
    int userData;           /* 0x14 */
} Slot_82563230;

typedef struct Owner_82563230 {
    char pad0[0x38];
    int disabled;           /* 0x38 */
    char pad3c[0x4c - 0x3c];
    char *system;           /* 0x4c */
    char pad50[0xa30 - 0x50];
    Slot_82563230 slots[9]; /* 0xa30 */
} Owner_82563230;

extern void fn_82552720(void *list, Slot_82563230 *slot, int *handle, Owner_82563230 *owner, int index, int arg, int flags);

int fn_82563230(Owner_82563230 *self, int index, int *handle, int arg, int userData)
{
    Slot_82563230 *slot;
    char *system;
    Slot_82563230 *slots;
    int valid;

    if (self->disabled == 0) {
        system = self->system;
        valid = handle != 0 ? *handle != 0 : 0;
        if (valid) {
            int inRange;
            slots = self->slots;
            inRange = index >= 0 && index < 9;
            if (inRange) {
                slot = &slots[index];
                fn_82552720(system + 0x84c, slot, handle, self, index, arg, 0);
                slot->userData = userData;
                return 1;
            }
        }
    }
    return 0;
}
