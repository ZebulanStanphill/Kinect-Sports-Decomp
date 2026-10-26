// Adjustor thunk for a scalar deleting destructor in a secondary vtable:
// subtracts 0xc from this and jumps to fn_82719128 (which keeps its fn_ name).
extern "C" void *fn_82719128(char *self, unsigned int flags);

extern "C" void *fn_827171A0(char *self, unsigned int flags)
{
    return fn_82719128(self - 0xc, flags);
}
