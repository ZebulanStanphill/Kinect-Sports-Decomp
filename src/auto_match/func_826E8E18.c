typedef struct Stream_826E8E18 {
    char pad0[0x15];
    unsigned char unusedBits; /* 0x15 */
} Stream_826E8E18;

typedef struct Cxform_826E8E18 {
    float m[4][2]; /* [channel][0] = multiply, [channel][1] = add */
} Cxform_826E8E18;

extern unsigned int fn_826E8488(Stream_826E8E18 *stream, int bits);
extern unsigned int fn_826E8560(Stream_826E8E18 *stream);
extern int fn_826E8610(Stream_826E8E18 *stream, int bits);

void fn_826E8E18(Stream_826E8E18 *stream, Cxform_826E8E18 *cxform)
{
    unsigned int hasAdd;
    unsigned int hasMult;
    int bits;
    int i;

    stream->unusedBits = 0;
    hasAdd = fn_826E8560(stream);
    hasMult = fn_826E8560(stream);
    bits = fn_826E8488(stream, 4);
    if (hasMult != 0) {
        cxform->m[0][0] = (float)fn_826E8610(stream, bits) * (1.0f / 256.0f);
        cxform->m[1][0] = (float)fn_826E8610(stream, bits) * (1.0f / 256.0f);
        cxform->m[2][0] = (float)fn_826E8610(stream, bits) * (1.0f / 256.0f);
        cxform->m[3][0] = (float)fn_826E8610(stream, bits) * (1.0f / 256.0f);
    } else {
        for (i = 0; i < 4; i++) {
            cxform->m[i][0] = 1.0f;
        }
    }
    if (hasAdd != 0) {
        cxform->m[0][1] = (float)fn_826E8610(stream, bits);
        cxform->m[1][1] = (float)fn_826E8610(stream, bits);
        cxform->m[2][1] = (float)fn_826E8610(stream, bits);
        cxform->m[3][1] = (float)fn_826E8610(stream, bits);
    } else {
        for (i = 0; i < 4; i++) {
            cxform->m[i][1] = 0.0f;
        }
    }
}
