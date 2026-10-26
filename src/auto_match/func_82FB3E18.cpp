// Adjustor thunk for a scalar deleting destructor in a secondary vtable:
// subtracts 0x10 from this and jumps to fn_82FB3E30 (which keeps its fn_ name).
extern "C" void *fn_82FB3E30(char *self, unsigned int flags);

extern "C" void *fn_82FB3E18(char *self, unsigned int flags)
{
    return fn_82FB3E30(self - 0x10, flags);
}
