// Adjustor thunk for a scalar deleting destructor in a secondary vtable:
// subtracts 0x10 from this and jumps to fn_82751598 (which keeps its fn_ name).
extern "C" void *fn_82751598(char *self, unsigned int flags);

extern "C" void *fn_827515F0(char *self, unsigned int flags)
{
    return fn_82751598(self - 0x10, flags);
}
