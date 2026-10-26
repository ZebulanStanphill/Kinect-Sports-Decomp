// Adjustor thunk for a scalar deleting destructor in a secondary vtable:
// subtracts 0xc from this and jumps to fn_826D6158 (which keeps its fn_ name).
extern "C" void *fn_826D6158(char *self, unsigned int flags);

extern "C" void *fn_826D44F8(char *self, unsigned int flags)
{
    return fn_826D6158(self - 0xc, flags);
}
