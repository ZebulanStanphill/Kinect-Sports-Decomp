extern void fn_8304D6F0(void *self, unsigned int position, unsigned int *out, void *state);

int fn_8304B7E0(char *self)
{
    char *stream = *(char **)(self + 8);
    unsigned int position;
    unsigned int decoded;
    unsigned int current;
    unsigned int base;
    unsigned int limit;

    if ((unsigned char)stream[0xdb] & 0x80) {
        fn_8304D6F0(self,
                    (unsigned int)(((unsigned __int64)*(unsigned int *)(*(char **)(stream + 0x6c) + 0x20) *
                                    *(unsigned int *)(stream + 0xd0)) /
                                   48000),
                    &position, self + 0x1c);
        stream = *(char **)(self + 8);
        decoded = position;
        *(unsigned int *)(stream + 0xd0) = decoded - (decoded & ~63);
        stream[0xdb] &= 0x7f;
        base = *(unsigned int *)(self + 0x38);
        current = *(unsigned short *)(self + 0x3c) * (decoded >> 6) + base;
        limit = *(unsigned int *)(self + 0x34) + base;
        *(unsigned int *)(self + 0x28) = current;
        return current < limit ? 1 : 2;
    }
    return 1;
}
