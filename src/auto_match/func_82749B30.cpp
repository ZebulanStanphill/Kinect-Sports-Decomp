// Adjustor thunk for a scalar deleting destructor in a secondary vtable:
// subtracts 0x10 from this and jumps to fn_82749B38 (which keeps its fn_ name).
extern "C" void *fn_82749B38(char *self, unsigned int flags);

extern "C" void *fn_82749B30(char *self, unsigned int flags)
{
    return fn_82749B38(self - 0x10, flags);
}
