extern unsigned int fn_82A1BFB8(void *self, int id, int *value);

int fn_828EA548(void *self)
{
    int value = 0;
    unsigned int r = fn_82A1BFB8(self, 0xeb, &value);
    if (r == 0) {
        if (value != 0) return 0;
        r = fn_82A1BFB8(self, 0xea, &value);
    }
    if (r != 0) return 2;
    return value == 0 ? 2 : 1;
}
