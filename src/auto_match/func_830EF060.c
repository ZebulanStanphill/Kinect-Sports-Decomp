
#include <string.h>

typedef struct Image_830EF060 {
    char pad[0x32];
    unsigned short width, height;
    char pad2[0x528 - 0x36];
    unsigned char *data;
} Image_830EF060;

void fn_830EF060(Image_830EF060 *self, const unsigned char *src)
{
    unsigned h = self->height >> 1, w = self->width >> 1;
    unsigned char *dst = self->data;
    unsigned i, j;
    memset(dst, 0, w * h * 6);
    for (i = 0; i < h; i++)
        for (j = 0; j < w; j++) {
            *dst |= (*(const unsigned short *)src << 7);
            src += 24;
            dst += 6;
        }
}
