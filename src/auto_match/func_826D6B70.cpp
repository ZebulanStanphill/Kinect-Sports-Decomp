// Adjustor thunk for a scalar deleting destructor in a secondary vtable:
// subtracts 0x10 from this and jumps to fn_826D7FA8 (which keeps its fn_ name).
extern "C" void *fn_826D7FA8(char *self, unsigned int flags);

extern "C" void *fn_826D6B70(char *self, unsigned int flags)
{
    return fn_826D7FA8(self - 0x10, flags);
}
