typedef struct {
    char pad0[0xc];
    void *items[2];
} Slots_8301D3E8;

extern void fn_8301CFE8(void *item, void *arg);

void fn_8301D3E8(Slots_8301D3E8 *self, unsigned int index, void *arg)
{
    unsigned int i;

    fn_8301CFE8(self->items[index], arg);
    for (i = index; i < 1; i++) {
        self->items[i] = self->items[i + 1];
    }
    self->items[1] = 0;
}
