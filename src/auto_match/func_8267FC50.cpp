// Adjustor thunk for a scalar deleting destructor in a secondary vtable:
// subtracts 0xc from this and jumps to fn_8267F4A8 (which keeps its fn_ name).
extern "C" void *fn_8267F4A8(char *self, unsigned int flags);

extern "C" void *fn_8267FC50(char *self, unsigned int flags)
{
    return fn_8267F4A8(self - 0xc, flags);
}
