// Adjustor thunk for a scalar deleting destructor in a secondary vtable:
// subtracts 0x10 from this and jumps to fn_82713740 (which keeps its fn_ name).
extern "C" void *fn_82713740(char *self, unsigned int flags);

extern "C" void *fn_82713470(char *self, unsigned int flags)
{
    return fn_82713740(self - 0x10, flags);
}
