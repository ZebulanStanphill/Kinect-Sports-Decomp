typedef struct Slot_82CE8758 {
    int active; /* 0x00 */
    char pad4[0x10];
} Slot_82CE8758;

typedef struct Data_82CE8758 {
    char pad0[0x22];
    unsigned short pending[13]; /* 0x22 */
    Slot_82CE8758 slots[32];    /* 0x3c */
} Data_82CE8758;

typedef struct Self_82CE8758 {
    char pad0[0x38];
    int slotCount; /* 0x38 */
    char pad3C[0x14];
    int first;      /* 0x50 */
    int pendingEnd; /* 0x54 */
    char pad58[0x20];
    void *handlers[4]; /* 0x78 */
    int handlerCount;  /* 0x88 */
} Self_82CE8758;

void fn_82CFBB08(void *handler, int value);
void fn_82CE8758(Self_82CE8758 *self, Data_82CE8758 *data);

void fn_82CE8880(Self_82CE8758 *self, int index, Data_82CE8758 *data)
{
    if (index < self->handlerCount) {
        if (data->pending[index] != 0) {
            data->pending[index]--;
            fn_82CFBB08(self->handlers[index], 1);
            return;
        }
    }
    fn_82CE8758(self, data);
}
