// Adjustor thunk for a scalar deleting destructor in a secondary vtable:
// subtracts 0xc from this and jumps to fn_826D9148 (which keeps its fn_ name).
extern "C" void *fn_826D9148(char *self, unsigned int flags);

extern "C" void *fn_826D8300(char *self, unsigned int flags)
{
    return fn_826D9148(self - 0xc, flags);
}
