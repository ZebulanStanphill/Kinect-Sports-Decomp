// Adjustor thunk for a scalar deleting destructor in a secondary vtable:
// subtracts 0x10 from this and jumps to fn_82747FD0 (which keeps its fn_ name).
extern "C" void *fn_82747FD0(char *self, unsigned int flags);

extern "C" void *fn_82747FC0(char *self, unsigned int flags)
{
    return fn_82747FD0(self - 0x10, flags);
}
