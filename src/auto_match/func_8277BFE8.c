typedef struct Elem { int a; float v; } Elem;
typedef struct Deq { char pad[0x3c]; Elem **map; } Deq;

unsigned char fn_8277BFE8(Deq *d, unsigned int i, int n)
{
    unsigned int j;
    if ((int)i >= n) {
        return 1;
    }
    j = i + 1;
    return d->map[j >> 10][j & 0x3ff].v <= d->map[i >> 10][i & 0x3ff].v;
}
