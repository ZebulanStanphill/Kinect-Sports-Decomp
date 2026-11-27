/* One glyph of a text line. The first bitfield is the most significant. */
typedef struct Glyph_8279C2A0 {
    unsigned short index;      /* 0x0 */
    unsigned short advance;    /* 0x2 */
    unsigned short length : 4; /* 0x4: characters this glyph stands for */
    unsigned short fontSize : 12;
    unsigned short flagsHigh : 7; /* 0x6 */
    unsigned short noLength : 1;
    unsigned short flag7 : 1;
    unsigned short negativeAdvance : 1;
    unsigned short flagsLow : 6;
} Glyph_8279C2A0;

/* A line in its long or its short (flag set) layout; both keep the horizontal
   offset at 0xc, the short one packs the text position into 24 bits. */
typedef struct Line_8279C2A0 {
    unsigned int isShort : 1; /* 0x0 */
    unsigned int rest : 31;
    int unk4;                  /* 0x4 */
    unsigned int textPosition; /* 0x8 */

    union {
        struct {
            int offsetX; /* 0xc */
        } longForm;

        struct {
            int offsetX; /* 0xc */
        } shortForm;
    } u;
} Line_8279C2A0;

typedef struct GlyphIterator_8279C2A0 {
    Glyph_8279C2A0 *current; /* 0x00 */
    Glyph_8279C2A0 *end;     /* 0x04 */
    unsigned int rest[24];   /* 0x08 */
} GlyphIterator_8279C2A0;

struct LineBuffer_8279C2A0 {
    char pad00[0x24];
    Line_8279C2A0 **lines;  /* 0x24 */
    unsigned int lineCount; /* 0x28 */
    char pad2C[0x20];
    unsigned int scrollX; /* 0x4c */

    int CharIndexAtX(unsigned int lineIndex, float x);
};

extern "C" {
void fn_82756F70(GlyphIterator_8279C2A0 *it, Line_8279C2A0 *line);
void fn_827555D8(GlyphIterator_8279C2A0 *it);
void fn_82756488(GlyphIterator_8279C2A0 *it);
}

static __forceinline unsigned char LineIsShort(Line_8279C2A0 *line)
{
    return line->isShort;
}

static __forceinline int LineOffsetX(Line_8279C2A0 *line)
{
    return LineIsShort(line) ? line->u.shortForm.offsetX : line->u.longForm.offsetX;
}

static __forceinline unsigned int LineTextPosition(Line_8279C2A0 *line)
{
    unsigned int position;

    if (LineIsShort(line)) {
        position = line->textPosition & 0xffffff;
        if (position == 0xffffff) {
            position = 0xffffffff;
        }
    } else {
        position = line->textPosition;
    }
    return position;
}

static __forceinline unsigned char IsFinished(GlyphIterator_8279C2A0 *it)
{
    return it->current == 0 || it->current >= it->end;
}

static __forceinline unsigned char GlyphAdvanceIsNegative(Glyph_8279C2A0 *glyph)
{
    return glyph->negativeAdvance;
}

static __forceinline unsigned char GlyphHasNoLength(Glyph_8279C2A0 *glyph)
{
    return glyph->noLength;
}

static __forceinline unsigned int GlyphAdvance(Glyph_8279C2A0 *glyph)
{
    return !GlyphAdvanceIsNegative(glyph) ? glyph->advance : -glyph->advance;
}

/* Returns the index of the character of line `lineIndex` that is nearest to
   the horizontal position x, or -1 when there is no such line. A member
   function: the original reads lines[lineIndex] with the index register first,
   which only `this` (numbered after the parameters) gives. */
int LineBuffer_8279C2A0::CharIndexAtX(unsigned int lineIndex, float x)
{
    GlyphIterator_8279C2A0 it;
    Line_8279C2A0 *line;
    Glyph_8279C2A0 *glyph;
    unsigned int advance;
    int position;
    int characters;
    unsigned int textPosition;
    float lineX;

    if (lineIndex >= lineCount) {
        return -1;
    }
    line = lines[lineIndex];
    lineX = (x - (float)LineOffsetX(line)) + (float)scrollX;
    position = 0;
    fn_82756F70(&it, line);
    characters = 0;
    while (!IsFinished(&it)) {
        glyph = it.current;
        advance = GlyphAdvance(glyph);
        if ((float)(advance + position) > lineX) {
            float half = (float)(advance >> 1);

            if (lineX - (float)position > half) {
                characters += glyph->length;
            }
            break;
        }
        position += advance;
        if (!GlyphHasNoLength(glyph)) {
            characters += glyph->length;
        }
        fn_827555D8(&it);
    }
    textPosition = LineTextPosition(line);
    fn_82756488(&it);
    return textPosition + characters;
}
