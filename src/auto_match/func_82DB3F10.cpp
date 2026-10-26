// Adjustor thunk for a scalar deleting destructor in a secondary vtable:
// subtracts 0x14 from this and jumps to fn_82DB3F20 (which keeps its fn_ name).
extern "C" void *fn_82DB3F20(char *self, unsigned int flags);

extern "C" void *fn_82DB3F10(char *self, unsigned int flags)
{
    return fn_82DB3F20(self - 0x14, flags);
}
