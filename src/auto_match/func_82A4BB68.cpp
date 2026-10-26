// Adjustor thunk for a scalar deleting destructor in a secondary vtable:
// subtracts 0x10 from this and jumps to fn_82A4AE90 (which keeps its fn_ name).
extern "C" void *fn_82A4AE90(char *self, unsigned int flags);

extern "C" void *fn_82A4BB68(char *self, unsigned int flags)
{
    return fn_82A4AE90(self - 0x10, flags);
}
