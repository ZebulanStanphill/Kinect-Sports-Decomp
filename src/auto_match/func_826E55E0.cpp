// Adjustor thunk for a scalar deleting destructor in a secondary vtable:
// subtracts 0x10 from this and jumps to fn_826E5788 (which keeps its fn_ name).
extern "C" void *fn_826E5788(char *self, unsigned int flags);

extern "C" void *fn_826E55E0(char *self, unsigned int flags)
{
    return fn_826E5788(self - 0x10, flags);
}
