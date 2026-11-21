typedef struct Margin_8300A298 Margin_8300A298;

typedef struct Fixed_8300A298 {
    char padding[0x4];
    float width;  /* 0x04 */
    float height; /* 0x08 */
} Fixed_8300A298;

typedef struct Border_8300A298 {
    char padding[0x28];
    float width;  /* 0x28 */
    float height; /* 0x2c */
} Border_8300A298;

struct Margin_8300A298 {
    Margin_8300A298 *next; /* 0x00 */
    char padding4[0x10];
    float size; /* 0x14 */
};

typedef struct Widget_8300A298 Widget_8300A298;

struct Widget_8300A298 {
    char padding[0x14];
    Widget_8300A298 *parent; /* 0x14 */
    char padding18[0x8];
    Fixed_8300A298 *fixed;   /* 0x20 */
    Border_8300A298 *border; /* 0x24 */
    char padding28[0x4];
    short columns; /* 0x2c */
    short rows;    /* 0x2e */
    char padding30[0xd];
    unsigned char layoutFlags; /* 0x3d */
    char padding3e[0x2];
    unsigned int scaleFlags; /* 0x40 */
    char padding44[0x14];
    float minimumExtent; /* 0x58 */
    char padding5c[0x20];
    Margin_8300A298 *margins; /* 0x7c */
};

extern void *lbl_832642FC;
extern void *fn_83006E68(Widget_8300A298 *widget);
extern int fn_8302B158(void *style);
extern float fn_830177C8(void *registry, Widget_8300A298 *widget, int property, int key);

float fn_8300A298(Widget_8300A298 *self)
{
    unsigned char fixedSize;
    float height;
    float margins;
    void *style;
    Margin_8300A298 *margin;

    fixedSize = 0;
    height = 0.0f;
    if ((self->layoutFlags & 4) != 0 && self->fixed != 0) {
        style = fn_83006E68(self);
        if (style != 0 && fn_8302B158(style) == 1) {
            fixedSize = 1;
        }
        height = self->fixed->height;
    }
    if (!fixedSize) {
        height = (float)self->rows * 0.1f + height;
        if ((unsigned char)((self->scaleFlags >> 1) & 1) != 0) {
            height = fn_830177C8(lbl_832642FC, self, 1, 0) + height;
        }
    }
    if (self->border != 0) {
        height = self->border->height + height;
    }
    margins = 0.0f;
    for (margin = self->margins; margin != 0; margin = margin->next) {
        margins = margin->size + margins;
    }
    if (margins < self->minimumExtent) {
        margins = self->minimumExtent;
    }
    height = margins + height;
    if (self->parent != 0) {
        return fn_8300A298(self->parent) + height;
    }
    return height;
}
