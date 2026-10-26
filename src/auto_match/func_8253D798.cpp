// Adjustor thunk for a scalar deleting destructor in a secondary vtable:
// subtracts 0x10 from this and jumps to fn_8253C838 (which keeps its fn_ name).
extern "C" void *fn_8253C838(char *self, unsigned int flags);

extern "C" void *fn_8253D798(char *self, unsigned int flags)
{
    return fn_8253C838(self - 0x10, flags);
}
