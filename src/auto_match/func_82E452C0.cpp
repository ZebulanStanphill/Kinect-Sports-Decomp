// Adjustor thunk for a scalar deleting destructor in a secondary vtable:
// subtracts 0xc from this and jumps to fn_82E435E0 (which keeps its fn_ name).
extern "C" void *fn_82E435E0(char *self, unsigned int flags);

extern "C" void *fn_82E452C0(char *self, unsigned int flags)
{
    return fn_82E435E0(self - 0xc, flags);
}
