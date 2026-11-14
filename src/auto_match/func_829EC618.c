typedef struct Self_829EC618 {
    char pad0[8];
    void *data;             /* 0x08 */
    char padc[8];
    unsigned short count;   /* 0x14 */
    char pad16[0x16];
    unsigned short *ids;    /* 0x2c */
} Self_829EC618;

int fn_829EC618(Self_829EC618 *self, unsigned int *out)
{
    int hr = 0x80004005;

    if (out == 0)
        return 0x80070057;
    *out = 0;
    if (self->data != 0 && self->count != 0) {
        *out = *self->ids;
        hr = 0;
    }
    return hr;
}

