// Adjustor thunk for a scalar deleting destructor in a secondary vtable:
// subtracts 0x10 from this and jumps to fn_82FA9320 (which keeps its fn_ name).
extern "C" void *fn_82FA9320(char *self, unsigned int flags);

extern "C" void *fn_82FA92B8(char *self, unsigned int flags)
{
    return fn_82FA9320(self - 0x10, flags);
}
