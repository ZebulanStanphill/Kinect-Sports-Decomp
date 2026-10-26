// Adjustor thunk for a scalar deleting destructor in a secondary vtable:
// subtracts 0x10 from this and jumps to fn_827144E0 (which keeps its fn_ name).
extern "C" void *fn_827144E0(char *self, unsigned int flags);

extern "C" void *fn_827144D8(char *self, unsigned int flags)
{
    return fn_827144E0(self - 0x10, flags);
}
