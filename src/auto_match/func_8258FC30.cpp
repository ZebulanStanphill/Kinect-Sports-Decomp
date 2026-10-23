// Adjustor thunk for a scalar deleting destructor in a secondary vtable:
// subtracts 0x14 from this and jumps to fn_8258F6B8 (which keeps its fn_ name).
extern "C" void *fn_8258F6B8(char *self, unsigned int flags);

extern "C" void *fn_8258FC30(char *self, unsigned int flags)
{
    return fn_8258F6B8(self - 0x14, flags);
}
