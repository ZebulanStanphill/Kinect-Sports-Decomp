// Adjustor thunk for a scalar deleting destructor in a secondary vtable:
// subtracts 0x10 from this and jumps to fn_82DEC3A8 (which keeps its fn_ name).
extern "C" void *fn_82DEC3A8(char *self, unsigned int flags);

extern "C" void *fn_82DEC398(char *self, unsigned int flags)
{
    return fn_82DEC3A8(self - 0x10, flags);
}
