// Adjustor thunk for a scalar deleting destructor in a secondary vtable:
// subtracts 0x10 from this and jumps to fn_826C0F50 (which keeps its fn_ name).
extern "C" void *fn_826C0F50(char *self, unsigned int flags);

extern "C" void *fn_826C0F48(char *self, unsigned int flags)
{
    return fn_826C0F50(self - 0x10, flags);
}
