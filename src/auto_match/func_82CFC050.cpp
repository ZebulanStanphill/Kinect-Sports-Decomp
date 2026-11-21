// hkString::memCpy (Common/Base/Container/String/hkString.cpp), under its fn_ name until the
// rename: a tail call to memcpy.
extern "C" void *memcpy(void *, const void *, unsigned int);

extern "C" void fn_82CFC050(void *dst, const void *src, int n)
{
    memcpy(dst, src, n);
}
