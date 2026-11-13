// Reads setting 0xf7 and, when it is clear, setting 0xf6 (see func_828EA548): 2 on a failed
// read or when disabled, 0 when the first setting is set, else 1 or 2 by the second.
extern unsigned int fn_82A1BFB8(void *self, int id, int *value);

int fn_828EA3D8(void *self, unsigned char enabled)
{
    int value;
    unsigned int r;

    if (!enabled) return 2;
    value = 0;
    r = fn_82A1BFB8(self, 0xf7, &value);
    if (r == 0) {
        if (value != 0) return 0;
        r = fn_82A1BFB8(self, 0xf6, &value);
    }
    if (r != 0) return 2;
    return value == 0 ? 2 : 1;
}
