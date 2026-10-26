// Adjustor thunk for a scalar deleting destructor in a secondary vtable:
// subtracts 0x10 from this and jumps to fn_82720638 (which keeps its fn_ name).
extern "C" void *fn_82720638(char *self, unsigned int flags);

extern "C" void *fn_8271FC38(char *self, unsigned int flags)
{
    return fn_82720638(self - 0x10, flags);
}
