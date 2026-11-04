#include "game/Writer_82E6FC00.h"

extern "C" unsigned long _byteswap_ulong(unsigned long);

long Writer_82E6FC00::Put(__int64 pos, unsigned int v)
{
    unsigned int written;
    long hr = stream->Begin();
    if (hr >= 0) {
        written = 0;
        v = _byteswap_ulong(v);
        hr = stream->Write(&v, 4, &written);
    }
    return hr;
}
