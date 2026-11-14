typedef struct {
    unsigned char pad0[8];
    unsigned char hosting;
    unsigned char pad9[0x59 - 9];
    unsigned char busy;
    unsigned char pad5a[0x74 - 0x5a];
    unsigned char closing;
    unsigned char pad75[0x89 - 0x75];
    unsigned char ready;
    unsigned char pad8a[0xd8 - 0x8a];
    unsigned char failed;
} Session_828EA840;

static __forceinline unsigned char IsOpen(const Session_828EA840 *s)
{
    return (unsigned char)(!s->closing & 1) && !s->failed;
}

unsigned char fn_828EA840(const Session_828EA840 *s)
{
    return s->hosting ? (unsigned char)(IsOpen(s) && !s->busy) : (unsigned char)(s->ready != 0);
}
