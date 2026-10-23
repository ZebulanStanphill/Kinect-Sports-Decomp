// Adjustor thunk for a scalar deleting destructor in a secondary vtable:
// subtracts 0x14 from this and jumps to fn_82D3A580 (which keeps its fn_ name).
extern "C" void *fn_82D3A580(char *self, unsigned int flags);

extern "C" void *fn_82D3A568(char *self, unsigned int flags)
{
    return fn_82D3A580(self - 0x14, flags);
}
