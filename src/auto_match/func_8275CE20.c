typedef struct Source_8275CE20 {
    char pad00[0x8];
    float value08; /* 0x08 */
    float value0C; /* 0x0c */
    float value10; /* 0x10 */
    float value14; /* 0x14 */
    float value18; /* 0x18 */
    float value1C; /* 0x1c */
    char pad20[0x4];
    float value24; /* 0x24 */
    float value28; /* 0x28 */
    char pad2C[0x4];
    float value30; /* 0x30 */
    float value34; /* 0x34 */
    float value38; /* 0x38 */
    float value3C; /* 0x3c */
    float value40; /* 0x40 */
    float value44; /* 0x44 */
    float value48; /* 0x48 */
    float value4C; /* 0x4c */
    float value50; /* 0x50 */
    float value54; /* 0x54 */
    float value58; /* 0x58 */
} Source_8275CE20;

extern void *memset(void *, int, unsigned int);

typedef struct Header_8275CE20 {
    unsigned char kind;  /* 0x00 */
    unsigned char flags; /* 0x01 */
    unsigned char pad2;  /* 0x02 */
    unsigned char pad3;  /* 0x03 */
} Header_8275CE20;

typedef struct Sample_8275CE20 {
    Header_8275CE20 header; /* 0x00 */
    float time;             /* 0x04 */
    float values[19];       /* 0x08 */
} Sample_8275CE20;

void fn_8275CE20(Source_8275CE20 *src, Sample_8275CE20 *out, float time, unsigned char kind)
{
    float *values;

    memset(&out->header, 0, sizeof(out->header));
    out->header.kind = kind;
    values = &out->time;
    *values++ = time;
    *values++ = src->value08;
    *values++ = src->value0C;
    *values++ = src->value10;
    *values++ = src->value14;
    *values++ = src->value18;
    *values++ = src->value1C;
    *values++ = src->value24;
    *values++ = src->value28;
    *values++ = src->value30;
    *values++ = src->value34;
    *values++ = src->value38;
    *values++ = src->value3C;
    *values++ = src->value40;
    *values++ = src->value44;
    *values++ = src->value48;
    *values++ = src->value4C;
    *values++ = src->value50;
    *values++ = src->value54;
    *values++ = src->value58;
}
