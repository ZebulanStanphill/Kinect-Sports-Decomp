// Adjustor thunk for a scalar deleting destructor in a secondary vtable:
// subtracts 0xc from this and jumps to fn_8266CAA0 (which keeps its fn_ name).
extern "C" void *fn_8266CAA0(char *self, unsigned int flags);

extern "C" void *fn_8266CA98(char *self, unsigned int flags)
{
    return fn_8266CAA0(self - 0xc, flags);
}
