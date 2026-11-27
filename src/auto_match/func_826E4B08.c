typedef struct Image_826E4B08 {
    char pad0[0x8];
    char pixels[0x28]; /* 0x08 */
} Image_826E4B08;

extern void *lbl_831E7E64;
extern unsigned char lbl_83155E40[12][19];

extern void *fn_8267B890(void *heap, unsigned int size, int flags);
extern Image_826E4B08 *fn_826809F0(void *memory, int format, int width, int height);
extern void fn_8267FC98(void *pixels, int x, int y, unsigned int color);
extern void *fn_826895E8(void *memory, Image_826E4B08 *image, int flags);
extern void fn_8267C498(void *object);

void *fn_826E4B08(void)
{
    void *memory;
    Image_826E4B08 *image;
    void *texture;
    int row;
    int column;
    int x;
    int y;
    unsigned int color;

    memory = fn_8267B890(lbl_831E7E64, 0x30, 0);
    if (memory != 0) {
        image = fn_826809F0(memory, 1, 57, 36);
    } else {
        image = 0;
    }
    if (image != 0) {
        for (row = 0; row < 12; row++) {
            for (column = 0; column < 19; column++) {
                color = 0;
                switch (lbl_83155E40[row][column]) {
                case 'y':
                    color = 0x80ffff00;
                    break;
                case 'r':
                    color = 0x80ff2020;
                    break;
                case 'g':
                    color = 0x8020ff20;
                    break;
                case 'c':
                    color = 0x8000ffff;
                    break;
                case 'b':
                    color = 0x802020ff;
                    break;
                case 'a':
                    color = 0x80ff00ff;
                    break;
                case '#':
                    color = 0xff000000;
                    break;
                }
                for (y = 0; y < 3; y++) {
                    for (x = 0; x < 3; x++) {
                        fn_8267FC98(image->pixels, column * 3 + x, row * 3 + y, color);
                    }
                }
            }
        }
    }
    memory = fn_8267B890(lbl_831E7E64, 0x24, 0);
    if (memory != 0) {
        texture = fn_826895E8(memory, image, 0);
    } else {
        texture = 0;
    }
    if (image != 0) {
        fn_8267C498(image);
    }
    return texture;
}
