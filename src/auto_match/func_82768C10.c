#include <string.h>

typedef struct Font_82768C10 Font_82768C10;

typedef struct FontVtable_82768C10 {
    char reserved[0x3c];
    const char *(*name)(Font_82768C10 *);
} FontVtable_82768C10;

struct Font_82768C10 {
    FontVtable_82768C10 *vtable;
    char reserved[0x10];
    unsigned int flags;
};

typedef struct FontInfo_82768C10 {
    char reserved[0xc];
    Font_82768C10 *font;
    char padding[0x18];
    short lower;
    short upper;
} FontInfo_82768C10;

extern unsigned short fn_82768B78(char *self, unsigned char character);
extern void fn_826D6630(void *log, const char *format, ...);
extern const char lbl_82196582[];

void fn_82768C10(FontInfo_82768C10 *self, char *logger)
{
    short lower = 0;
    short upper = 0;
    if ((int)self->font != 0 && self->lower == 0 && self->upper == 0) {
        const unsigned char upperSamples[] = "HEFTUVWXZ";
        const unsigned char lowerSamples[] = "zxvwy";
        const unsigned char *sample = upperSamples;
        unsigned int character = *sample;
        while (character != 0) {
            upper = fn_82768B78((char *)self, (unsigned char)character);
            if (upper != 0) {
                break;
            }
            character = *++sample;
        }
        if (upper != 0) {
            sample = lowerSamples;
            character = *sample;
            while (character != 0) {
                lower = fn_82768B78((char *)self, (unsigned char)character);
                if (lower != 0) {
                    break;
                }
                character = *++sample;
            }
        }
    }

    if (lower != 0 && upper != 0) {
        self->lower = lower;
        self->upper = upper;
    } else {
        if (logger != 0) {
            Font_82768C10 *font = self->font;
            const char *bold = lbl_82196582;
            const char *italic = font->flags & 1 ? " Italic" : bold;
            if ((unsigned char)(font->flags >> 1) & 1) {
                bold = " Bold";
            }
            fn_826D6630(logger + 0xc,
                        "Warning: Font '%s%s%s': No hinting chars (any of 'HEFTUVWXZ' and 'zxvwy'). "
                        "Auto-Hinting is disabled\n",
                        font->vtable->name(font), bold, italic);
        }
        self->lower = -1;
        self->upper = -1;
    }
}
