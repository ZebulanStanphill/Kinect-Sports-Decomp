typedef struct Stream_8276E0C8 {
    char pad0[0x15];
    unsigned char unusedBits; /* 0x15 */
    char pad16[0x2c - 0x16];
    int pos;      /* 0x2c */
    int dataSize; /* 0x30 */
    int filePos;  /* 0x34 */
    char pad38[4];
    unsigned char *buffer; /* 0x3c */
} Stream_8276E0C8;

typedef struct CodeKey_8276E0C8 {
    const unsigned short *code;
    const unsigned short *glyph;
} CodeKey_8276E0C8;

typedef struct Font_8276E0C8 {
    char pad0[0x14];
    unsigned int flagsHigh : 17; /* 0x14 */
    unsigned int wideCodes : 1;
    unsigned int flagsLow : 14;
    char pad18[0x24 - 0x18];
    unsigned int glyphCount; /* 0x24 */
    char pad28[4];
    void *codeTable; /* 0x2c */
} Font_8276E0C8;

extern int fn_826C8C70();
extern void fn_826E7800(Stream_8276E0C8 *in, int size);
extern void fn_826E7990(Stream_8276E0C8 *in);
extern void fn_8276B308(void *table, void *heap, CodeKey_8276E0C8 *key, unsigned int hash);

static __forceinline unsigned short ReadU16_8276E0C8(Stream_8276E0C8 *in)
{
    unsigned char *p;
    unsigned short value;

    in->unusedBits = 0;
    if (in->dataSize - in->pos < 2) {
        fn_826E7800(in, 2);
    }
    p = in->buffer + in->pos;
    value = (unsigned short)(p[0] | (p[1] << 8));
    in->pos += 2;
    return value;
}

static __forceinline unsigned char ReadU8_8276E0C8(Stream_8276E0C8 *in)
{
    unsigned char value;

    in->unusedBits = 0;
    if (in->dataSize - in->pos < 1) {
        fn_826E7990(in);
    }
    value = in->buffer[in->pos];
    in->pos += 1;
    return value;
}

void fn_8276E0C8(Font_8276E0C8 *font, Stream_8276E0C8 *in)
{
    unsigned int i;
    unsigned int count;
    unsigned short wideGlyph;
    unsigned short wideCode;
    unsigned short glyph;
    unsigned short code;
    CodeKey_8276E0C8 key;

    fn_826C8C70(in, "reading code table at offset %d\n", in->filePos - in->dataSize + in->pos);
    count = font->glyphCount;
    if ((unsigned char)font->wideCodes) {
        i = 0;
        if (count != 0) {
            key.code = &wideCode;
            key.glyph = &wideGlyph;
            do {
                wideGlyph = (unsigned short)i;
                wideCode = ReadU16_8276E0C8(in);
                fn_8276B308(&font->codeTable, &font->codeTable, &key, wideCode);
                i++;
            } while (i < count);
        }
    } else {
        i = 0;
        if (count != 0) {
            key.code = &code;
            key.glyph = &glyph;
            do {
                glyph = (unsigned short)i;
                code = ReadU8_8276E0C8(in);
                fn_8276B308(&font->codeTable, &font->codeTable, &key, code);
                i++;
            } while (i < count);
        }
    }
}
