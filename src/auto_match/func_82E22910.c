unsigned int fn_82E22910(void *self, unsigned char *b, int a0, int a1, int b0, int b1, int c0, int c1, int d0, int d1)
{
    unsigned int t = b[d0] ^ b[d1];
    t = (t << 8) ^ b[c0];
    t ^= b[c1];
    t = (t << 8) ^ b[b0];
    t ^= b[b1];
    t = (t << 8) ^ b[a0];
    t ^= b[a1];
    return t;
}
