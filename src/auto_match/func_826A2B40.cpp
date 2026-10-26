// Adjustor thunk for a scalar deleting destructor in a secondary vtable:
// subtracts 0x10 from this and jumps to fn_826A4C28 (which keeps its fn_ name).
extern "C" void *fn_826A4C28(char *self, unsigned int flags);

extern "C" void *fn_826A2B40(char *self, unsigned int flags)
{
    return fn_826A4C28(self - 0x10, flags);
}
