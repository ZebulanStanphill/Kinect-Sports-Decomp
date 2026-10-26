// Adjustor thunk for a scalar deleting destructor in a secondary vtable:
// subtracts 0x10 from this and jumps to fn_826C2F78 (which keeps its fn_ name).
extern "C" void *fn_826C2F78(char *self, unsigned int flags);

extern "C" void *fn_826C2F70(char *self, unsigned int flags)
{
    return fn_826C2F78(self - 0x10, flags);
}
