// Adjustor thunk for a scalar deleting destructor in a secondary vtable:
// subtracts 0x10 from this and jumps to fn_826DB368 (which keeps its fn_ name).
extern "C" void *fn_826DB368(char *self, unsigned int flags);

extern "C" void *fn_826DAA08(char *self, unsigned int flags)
{
    return fn_826DB368(self - 0x10, flags);
}
