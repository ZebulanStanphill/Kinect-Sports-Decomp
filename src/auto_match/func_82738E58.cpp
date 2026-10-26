// Adjustor thunk for a scalar deleting destructor in a secondary vtable:
// subtracts 0x10 from this and jumps to fn_82739248 (which keeps its fn_ name).
extern "C" void *fn_82739248(char *self, unsigned int flags);

extern "C" void *fn_82738E58(char *self, unsigned int flags)
{
    return fn_82739248(self - 0x10, flags);
}
