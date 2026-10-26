// Adjustor thunk for a scalar deleting destructor in a secondary vtable:
// subtracts 0x10 from this and jumps to fn_8273CE10 (which keeps its fn_ name).
extern "C" void *fn_8273CE10(char *self, unsigned int flags);

extern "C" void *fn_8273E7D0(char *self, unsigned int flags)
{
    return fn_8273CE10(self - 0x10, flags);
}
