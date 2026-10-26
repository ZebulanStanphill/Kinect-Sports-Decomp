// Adjustor thunk for a scalar deleting destructor in a secondary vtable:
// subtracts 0x14 from this and jumps to fn_826F4DC8 (which keeps its fn_ name).
extern "C" void *fn_826F4DC8(char *self, unsigned int flags);

extern "C" void *fn_826F4770(char *self, unsigned int flags)
{
    return fn_826F4DC8(self - 0x14, flags);
}
