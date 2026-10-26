// Adjustor thunk for a scalar deleting destructor in a secondary vtable:
// subtracts 0x10 from this and jumps to fn_8274BFC8 (which keeps its fn_ name).
extern "C" void *fn_8274BFC8(char *self, unsigned int flags);

extern "C" void *fn_8274BFB8(char *self, unsigned int flags)
{
    return fn_8274BFC8(self - 0x10, flags);
}
