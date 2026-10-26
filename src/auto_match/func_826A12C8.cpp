// Adjustor thunk for a scalar deleting destructor in a secondary vtable:
// subtracts 0xc from this and jumps to fn_826A1578 (which keeps its fn_ name).
extern "C" void *fn_826A1578(char *self, unsigned int flags);

extern "C" void *fn_826A12C8(char *self, unsigned int flags)
{
    return fn_826A1578(self - 0xc, flags);
}
