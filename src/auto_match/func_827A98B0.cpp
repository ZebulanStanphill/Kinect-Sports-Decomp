extern "C" {
void fn_8267C498(void *p);
void fn_826C6368(void *p);
void fn_8267BE38(void *p);
bool fn_827AEAA8(void *iterator);
}

struct Color_827A98B0 {
    unsigned char alpha;
    unsigned char red;
    unsigned char green;
    unsigned char blue;

    __forceinline Color_827A98B0()
    {
    }

    __forceinline Color_827A98B0(const Color_827A98B0 &other)
    {
        *(unsigned int *)this = *(const unsigned int *)&other;
    }

    __forceinline Color_827A98B0(unsigned char r, unsigned char g, unsigned char b, unsigned char a)
    {
        red = r;
        green = g;
        blue = b;
        alpha = a;
    }

    __forceinline unsigned int ToColor32() const
    {
        return *(const unsigned int *)this;
    }
};

struct HighlightInfo_827A98B0 {
    Color_827A98B0 backgroundColor; /* 0x0 */
    Color_827A98B0 textColor;       /* 0x4 */
    Color_827A98B0 underlineColor;  /* 0x8 */
    unsigned char flags;            /* 0xc */

    __forceinline bool HasTextColor() const
    {
        return (flags & 0x10) != 0;
    }

    __forceinline Color_827A98B0 GetTextColor() const
    {
        return HasTextColor() ? textColor : Color_827A98B0(0, 0, 0, 0);
    }

    __forceinline bool HasUnderlineColor() const
    {
        return (flags & 0x20) != 0;
    }

    __forceinline Color_827A98B0 GetUnderlineColor() const
    {
        return HasUnderlineColor() ? underlineColor : Color_827A98B0(0, 0, 0, 0);
    }

    __forceinline unsigned int GetUnderlineStyle() const
    {
        return flags & 7;
    }
};

struct Font_827A98B0 {
    int refCount; /* 0x0 */

    __forceinline void AddRef()
    {
        refCount++;
    }

    __forceinline void Release()
    {
        if (--refCount == 0) {
            fn_826C6368(this);
            fn_8267BE38(this);
        }
    }
};

struct Image_827A98B0 {
    void *vt;
    int refCount; /* 0x4 */

    __forceinline void AddRef()
    {
        refCount++;
    }

    __forceinline void Release()
    {
        fn_8267C498(this);
    }
};

template <class T> struct Ptr_827A98B0 {
    T *object;

    __forceinline Ptr_827A98B0 &operator=(T *value)
    {
        if (value) {
            value->AddRef();
        }
        if (object) {
            object->Release();
        }
        object = value;
        return *this;
    }
};

struct GlyphEntry_827A98B0 {
    unsigned short index;      /* 0x0 */
    unsigned short advance;    /* 0x2 */
    unsigned short length : 4; /* 0x4 */
    unsigned short fontSize : 12;
    unsigned short flag15 : 1; /* 0x6 */
    unsigned short nextFormat : 1;
    unsigned short hasFont : 1;
    unsigned short hasColor : 1;
    unsigned short hasImage : 1;
    unsigned short underline : 1;
    unsigned short flags9to4 : 6;
    unsigned short url : 1;
    unsigned short flags2to0 : 3;

    __forceinline bool IsNextFormat() const
    {
        return nextFormat;
    }

    __forceinline bool HasFont() const
    {
        return hasFont;
    }

    __forceinline bool HasColor() const
    {
        return hasColor;
    }

    __forceinline bool HasImage() const
    {
        return hasImage;
    }

    __forceinline bool IsUnderline() const
    {
        return underline;
    }

    __forceinline bool IsUrl() const
    {
        return url;
    }

    __forceinline unsigned int GetLength() const
    {
        return length;
    }
};

union FormatData_827A98B0 {
    Font_827A98B0 *font;
    unsigned int color;
    Image_827A98B0 *image;
};

struct HighlightDesc_827A98B0 {
    char pad00[0x18];
    HighlightInfo_827A98B0 info; /* 0x18 */
};

struct HighlighterIterator_827A98B0 {
    char pad00[0xc];
    HighlightDesc_827A98B0 desc; /* 0x0c */
};

struct GlyphIterator_827A98B0 {
    GlyphEntry_827A98B0 *glyphs;              /* 0x00 */
    GlyphEntry_827A98B0 *endGlyphs;           /* 0x04 */
    FormatData_827A98B0 *formatData;          /* 0x08 */
    HighlighterIterator_827A98B0 highlighter; /* 0x0c */
    unsigned int color;                       /* 0x40 */
    unsigned int origColor;                   /* 0x44 */
    unsigned int underlineColor;              /* 0x48 */
    Ptr_827A98B0<Font_827A98B0> font;         /* 0x4c */
    Ptr_827A98B0<Image_827A98B0> image;       /* 0x50 */
    unsigned int underlineStyle;              /* 0x54 */

    __forceinline bool IsFinished() const
    {
        return !glyphs || glyphs >= endGlyphs;
    }
};

extern "C" void fn_827A98B0(GlyphIterator_827A98B0 *self)
{
    self->image = 0;
    if (!self->IsFinished()) {
        if (self->glyphs->IsNextFormat()) {
            if (self->glyphs->HasFont()) {
                self->font = self->formatData->font;
                ++self->formatData;
            }
            if (self->glyphs->HasColor()) {
                self->origColor = self->color = self->formatData->color;
                ++self->formatData;
            }
            if (self->glyphs->HasImage()) {
                self->image = self->formatData->image;
                ++self->formatData;
            }
        }
        if (self->glyphs->IsUnderline()) {
            self->underlineStyle = 1;
            self->underlineColor = self->color;
        } else {
            self->underlineStyle = 0;
        }
        if (!fn_827AEAA8(&self->highlighter)) {
            const HighlightDesc_827A98B0 &desc = self->highlighter.desc;

            self->color = self->origColor;
            if (self->glyphs->GetLength() != 0 || self->glyphs->IsUrl()) {
                if (desc.info.HasTextColor()) {
                    self->color = desc.info.GetTextColor().ToColor32();
                }
                if (desc.info.GetUnderlineStyle() != 0) {
                    self->underlineStyle = desc.info.GetUnderlineStyle();
                }
                if (desc.info.HasUnderlineColor()) {
                    self->underlineColor = desc.info.GetUnderlineColor().ToColor32();
                } else {
                    self->underlineColor = self->color;
                }
            }
        } else {
            if (self->glyphs->IsUnderline()) {
                self->underlineStyle = 1;
                self->underlineColor = self->color;
            }
        }
    }
}
