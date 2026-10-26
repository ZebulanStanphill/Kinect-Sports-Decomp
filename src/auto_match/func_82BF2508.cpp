// Adjustor thunk for a scalar deleting destructor in a secondary vtable:
// subtracts 0xc from this and jumps to fn_82BF2510 (which keeps its fn_ name).
extern "C" void *fn_82BF2510(char *self, unsigned int flags);

extern "C" void *fn_82BF2508(char *self, unsigned int flags)
{
    return fn_82BF2510(self - 0xc, flags);
}
