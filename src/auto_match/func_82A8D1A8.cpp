extern "C" unsigned long _byteswap_ulong(unsigned long);

static inline void CopyBytes(unsigned char *d, const unsigned char *s, int n)
{
    int i;
    for (i = n - 1; i >= 0; i--)
        *d++ = *s++;
}

/* Fixed-size byte block stored with its 32-bit words byte-swapped. */
template <unsigned int N> struct SwappedBlock_82A86CB0 {
    unsigned char data[N];
    void Set(const unsigned char *src, unsigned int n);
};

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
    CopyBytes(data, src, n);
    w = (unsigned int *)data;
    for (i = ((n + 3) >> 2) - 1; i >= 0; i--) {
        *w = _byteswap_ulong(*w);
        w++;
    }
}

template struct SwappedBlock_82A86CB0<0xa20>;
