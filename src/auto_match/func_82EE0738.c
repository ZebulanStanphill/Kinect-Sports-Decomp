typedef struct Record_82EE0738 {
    int pad0;
    unsigned int id;       /* 0x04 */
    unsigned short length; /* 0x08 */
    unsigned short pad0a;
    unsigned short *data; /* 0x0c */
    unsigned int type;    /* 0x10 */
} Record_82EE0738;

unsigned short _byteswap_ushort(unsigned short value);
extern void fn_82E57888(unsigned short **cursor, unsigned short *source, unsigned int size);
extern long fn_82EE0570(unsigned short *out, Record_82EE0738 *record, int *written);

long fn_82EE0738(void *self, Record_82EE0738 *record, unsigned short *out, int *written)
{
    long hr;
    int extra;
    int size;

    if (record == 0 || out == 0 || written == 0) {
        return 0x80070057;
    }
    *written = 0;
    {
        unsigned short *start = out;

        out = start + 1;
        *start = _byteswap_ushort(record->length);
    }
    fn_82E57888(&out, record->data, record->length);
    size = record->length + 6;
    extra = 0;
    *out = _byteswap_ushort((unsigned short)record->id);
    *++out = _byteswap_ushort((unsigned short)record->type);
    hr = fn_82EE0570(out + 1, record, &extra);
    if (hr >= 0) {
        *written = extra + size;
    }
    return hr;
}
