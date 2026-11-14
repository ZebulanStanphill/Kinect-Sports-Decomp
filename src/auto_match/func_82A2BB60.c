typedef struct Slot_82A2BB60 {
    unsigned char pad[5];
    unsigned char next;
    unsigned char prev;
    unsigned char pad7;
} Slot_82A2BB60;

typedef struct Pool_82A2BB60 {
    char pad[0x30];
    Slot_82A2BB60 *slots;
    char pad34[0xc8 - 0x34];
    unsigned char count;
    unsigned char freeHead;
} Pool_82A2BB60;

extern void *memset(void *dst, int value, unsigned int size);

void fn_82A2BB60(Pool_82A2BB60 *self)
{
    unsigned int count = self->count;
    Slot_82A2BB60 *slots = self->slots;
    unsigned int i;

    memset(slots, 0, count * sizeof(Slot_82A2BB60));
    for (i = 0; i < count; i++) {
        slots[i].prev = i - 1;
        slots[i].next = i + 1;
    }
    slots[0].prev = count - 1;
    slots[count - 1].next = 0;
    self->freeHead = 0;
}
