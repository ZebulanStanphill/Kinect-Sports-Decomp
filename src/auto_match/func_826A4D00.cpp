// Adjustor thunk for a scalar deleting destructor in a secondary vtable:
// subtracts 0x10 from this and jumps to fn_826A4B08 (which keeps its fn_ name).
extern "C" void *fn_826A4B08(char *self, unsigned int flags);

extern "C" void *fn_826A4D00(char *self, unsigned int flags)
{
    return fn_826A4B08(self - 0x10, flags);
}
