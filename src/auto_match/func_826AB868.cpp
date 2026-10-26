// Adjustor thunk for a scalar deleting destructor in a secondary vtable:
// subtracts 0x10 from this and jumps to fn_826AEA00 (which keeps its fn_ name).
extern "C" void *fn_826AEA00(char *self, unsigned int flags);

extern "C" void *fn_826AB868(char *self, unsigned int flags)
{
    return fn_826AEA00(self - 0x10, flags);
}
