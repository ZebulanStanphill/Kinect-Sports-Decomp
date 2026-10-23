// Adjustor thunk for a scalar deleting destructor in a secondary vtable:
// subtracts 0xc from this and jumps to fn_82D3ABF8 (which keeps its fn_ name).
extern "C" void *fn_82D3ABF8(char *self, unsigned int flags);

extern "C" void *fn_82D3ABE8(char *self, unsigned int flags)
{
    return fn_82D3ABF8(self - 0xc, flags);
}
