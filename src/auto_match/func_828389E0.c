typedef struct Binding_828389E0 {
    char pad0[0x1c];
    unsigned int type;      /* 0x1c */
    char pad20[0x14];
    void *data;             /* 0x34 */
} Binding_828389E0;

extern void *lbl_8320A898;
extern void fn_8263CBB0(void *device, unsigned int reg, void *value, unsigned __int64 mask);
extern void fn_82838650(Binding_828389E0 *self, unsigned int reg);

void fn_828389E0(Binding_828389E0 *self, unsigned int reg, int index)
{
    if (self->type == 4) {
        fn_8263CBB0(lbl_8320A898, reg, ((void **)self->data)[index], 0x8000000000000000ULL >> (reg + 32));
        return;
    }
    fn_82838650(self, reg);
}
