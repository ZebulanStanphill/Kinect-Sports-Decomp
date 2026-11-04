#ifndef GAME_SWAPPEDBLOCK_82A86CB0_H
#define GAME_SWAPPEDBLOCK_82A86CB0_H

// Fixed-size byte block whose 32-bit words are stored byte-swapped.
// Placeholder class named after the first instantiation's address; one
// out-of-line Set() exists per size. Units that only call it declare the
// instantiation with `extern template struct SwappedBlock_82A86CB0<N>;`.

extern "C" unsigned long _byteswap_ulong(unsigned long);

template <unsigned int N> struct SwappedBlock_82A86CB0 {
    unsigned char data[N];
    void Set(const unsigned char *src, unsigned int n);
};

namespace SwappedBlock_82A86CB0_detail {
inline void CopyBytes(unsigned char *d, const unsigned char *s, int n)
{
    int i;
    for (i = n - 1; i >= 0; i--)
        *d++ = *s++;
}
}

template <unsigned int N>
void SwappedBlock_82A86CB0<N>::Set(const unsigned char *src, unsigned int n)
{
    int i;
    unsigned int *w;
    if (n > N) {
        n = N;
    } else if (n < N) {
        unsigned char *p = data + n;
        for (i = N - 1 - n; i >= 0; i--)
            *p++ = 0;
    }
    SwappedBlock_82A86CB0_detail::CopyBytes(data, src, n);
    w = (unsigned int *)data;
    for (i = ((n + 3) >> 2) - 1; i >= 0; i--) {
        *w = _byteswap_ulong(*w);
        w++;
    }
}

#endif
