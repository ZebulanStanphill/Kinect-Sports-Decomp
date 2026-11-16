typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Record_82D9C6F8 {
    unsigned int type;     /* 0x00 */
    unsigned char enabled; /* 0x04 */
    char pad5[3];
    unsigned int values[4]; /* 0x08 */
    char pad18[8];
    __vector4 vectors[3];   /* 0x20 */
    unsigned __int64 data0; /* 0x50 */
    unsigned __int64 data1; /* 0x58 */
    unsigned int count;     /* 0x60 */
    unsigned int pad64;
    unsigned int flags;   /* 0x68 */
    unsigned char first;  /* 0x6c */
    unsigned char second; /* 0x6d */
    char pad6e[2];
    unsigned int index; /* 0x70 */
} Record_82D9C6F8;

void fn_82D9C6F8(Record_82D9C6F8 *dest, const Record_82D9C6F8 *source)
{
    dest->type = source->type;
    dest->enabled = source->enabled;
    dest->values[0] = source->values[0];
    dest->values[1] = source->values[1];
    dest->values[2] = source->values[2];
    dest->values[3] = source->values[3];
    {
        __vector4 *out = dest->vectors;
        const __vector4 *in = source->vectors;
        out[0] = in[0];
        out[1] = in[1];
        out[2] = in[2];
    }
    dest->data0 = source->data0;
    dest->data1 = source->data1;
    dest->count = source->count;
    dest->flags = source->flags;
    dest->first = source->first;
    dest->second = source->second;
    dest->index = source->index;
}
