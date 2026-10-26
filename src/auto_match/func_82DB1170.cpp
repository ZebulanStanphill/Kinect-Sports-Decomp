// Adjustor thunk for a scalar deleting destructor in a secondary vtable:
// subtracts 0x14 from this and jumps to fn_82DB0B68 (which keeps its fn_ name).
extern "C" void *fn_82DB0B68(char *self, unsigned int flags);

extern "C" void *fn_82DB1170(char *self, unsigned int flags)
{
    return fn_82DB0B68(self - 0x14, flags);
}
