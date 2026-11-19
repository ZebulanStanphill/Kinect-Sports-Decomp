typedef struct Entry_8291C2D8 {
    unsigned int pad0;     /* 0x00 */
    unsigned short type;   /* 0x04 */
    unsigned short start;  /* 0x06 */
    unsigned short length; /* 0x08 */
    unsigned char padA[0xa];
} Entry_8291C2D8;

typedef struct Table_8291C2D8 {
    unsigned char pad0[0x10];
    char *base; /* 0x10 */
} Table_8291C2D8;

typedef struct Effect_8291C2D8 {
    unsigned char pad0[0x8];
    unsigned int entryOffset; /* 0x08 */
    unsigned int size;        /* 0x0c */
    Table_8291C2D8 *table;    /* 0x10 */
    unsigned char pad14[0x4];
    unsigned int entryCount; /* 0x18 */
} Effect_8291C2D8;

extern int fn_828F9B38(const unsigned int *data, unsigned int tag, char **outChunk, unsigned int *outSize);
extern int fn_8291BDE8(Effect_8291C2D8 *self, char *chunk, unsigned int size, unsigned char raw);
extern int fn_828F9B30(unsigned int size, void *out);

int fn_8291C2D8(Effect_8291C2D8 *self, const unsigned int *data, void *out)
{
    char *chunk;
    unsigned char raw;
    int hr;

    if (data == 0) {
        return 0x8876086c;
    }
    chunk = 0;
    raw = 0;
    if ((*data & 0xffffff00) == 0x102a1100) {
        int offset = data[4];
        if (data[4] == 0) {
            goto invalid;
        }
        chunk = (char *)data + offset + 4;
        raw = 1;
        self->size = *(const unsigned int *)((const char *)data + data[4]);
    } else {
        hr = fn_828F9B38(data, 0x42415443, &chunk, &self->size);
        if (hr < 0) {
            return hr;
        }
        if (hr == 1) {
            goto invalid;
        }
    }
    hr = fn_8291BDE8(self, chunk, self->size, raw);
    if (hr < 0) {
        return hr;
    }
    if (out != 0) {
        unsigned int maximum = 0;
        unsigned int i;
        Entry_8291C2D8 *entries = (Entry_8291C2D8 *)(self->table->base + self->entryOffset);
        for (i = 0; i < self->entryCount; i++) {
            if (entries[i].type == 2 && maximum < (unsigned int)(entries[i].length + entries[i].start)) {
                maximum = entries[i].length + entries[i].start;
            }
        }
        hr = fn_828F9B30(maximum << 4, out);
        if (hr < 0) {
            return hr;
        }
    }
    return 0;

invalid:
    return 0x88760b59;
}
