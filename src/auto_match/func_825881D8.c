typedef struct Range_825881D8 {
    int first; /* 0x0 */
    int last;  /* 0x4 */
} Range_825881D8;

typedef struct Glyph_825881D8 {
    float height; /* 0x00 */
    char pad4[0x14];
} Glyph_825881D8;

typedef struct Fonts_825881D8 {
    float metrics[3];   /* 0x00 */
    float defaultScale; /* 0x0c */
    char pad10[0x88];
    Range_825881D8 *ranges[2]; /* 0x98 */
    Glyph_825881D8 *glyphs[2]; /* 0xa0 */
    char padA8[4];
} Fonts_825881D8;

extern Fonts_825881D8 lbl_8326B850;

static __forceinline Glyph_825881D8 *FindGlyph(int font, int character)
{
    Range_825881D8 *range = lbl_8326B850.ranges[font];
    int index;

    if (range->first > character || range->last < character) {
        index = 0;
    } else {
        index = character - range->first;
    }
    return &lbl_8326B850.glyphs[font][index];
}

float fn_825881D8(int font, float scale)
{
    if (scale != 0.0f) {
        return FindGlyph(font, 'r')->height * scale;
    }
    return FindGlyph(font, 'r')->height * lbl_8326B850.defaultScale;
}
