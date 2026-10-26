// Adjustor thunk for a scalar deleting destructor in a secondary vtable:
// subtracts 0x10 from this and jumps to fn_827136B0 (which keeps its fn_ name).
extern "C" void *fn_827136B0(char *self, unsigned int flags);

extern "C" void *fn_82713968(char *self, unsigned int flags)
{
    return fn_827136B0(self - 0x10, flags);
}
