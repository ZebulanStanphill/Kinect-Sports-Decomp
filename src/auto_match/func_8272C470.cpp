// Adjustor thunk for a scalar deleting destructor in a secondary vtable:
// subtracts 0xc from this and jumps to fn_827317A8 (which keeps its fn_ name).
extern "C" void *fn_827317A8(char *self, unsigned int flags);

extern "C" void *fn_8272C470(char *self, unsigned int flags)
{
    return fn_827317A8(self - 0xc, flags);
}
