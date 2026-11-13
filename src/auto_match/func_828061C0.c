typedef struct Image_828061C0 {
    char pad0[0x20];
    unsigned short width;    /* 0x20 */
    unsigned short height;   /* 0x22 */
    unsigned short extra;    /* 0x24 */
} Image_828061C0;

extern unsigned int fn_82805808(Image_828061C0 *img);

#define ALIGN4(x) (((x) + 3) & ~3u)

unsigned int fn_828061C0(Image_828061C0 *img)
{
    int pixels = img->height * img->width;

    return ALIGN4(fn_82805808(img)) +
           (((pixels * 4 + 0x7f) & ~0x7fu) + 0x25) * 4 +
           (((pixels + 0x1f) >> 3) & ~3u) +
           ALIGN4(img->extra);
}
