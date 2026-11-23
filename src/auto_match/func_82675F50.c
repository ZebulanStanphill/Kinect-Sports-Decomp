typedef struct Device_82675F50 {
    unsigned char pad0[0xd8];
    void *gpu; /* 0xd8 */
} Device_82675F50;

typedef struct Plane_82675F50 {
    void *texture; /* 0x00 */
    int pad4;
    unsigned char present; /* 0x08 */
    unsigned char pad9[3];
} Plane_82675F50;

typedef struct Video_82675F50 {
    unsigned char pad0[0x1c];
    Device_82675F50 *device; /* 0x1c */
    int width;               /* 0x20 */
    int height;              /* 0x24 */
    void *texture;           /* 0x28 */
    int pad2c;
    Plane_82675F50 planes[4]; /* 0x30 */
} Video_82675F50;

typedef struct Level_82675F50 {
    int width;  /* 0x00 */
    int height; /* 0x04 */
    int pitch;  /* 0x08 */
    int base;   /* 0x0c */
} Level_82675F50;

typedef struct Layout_82675F50 {
    int base;
    int pitch;
} Layout_82675F50;

extern void fn_8263CBB0(void *handle, int group, unsigned int value, unsigned __int64 mask);
extern void fn_8263C7D8(void *texture, int level, Layout_82675F50 *layout, int *a, int b);

int fn_82675F50(Video_82675F50 *self, int level, int unused, Level_82675F50 *levels)
{
    int i;
    int height;
    int width;
    int count;
    Layout_82675F50 layout;

    for (i = 0; i < 4; i++) {
        fn_8263CBB0(self->device->gpu, i, 0, 0x8000000000000000ULL >> (unsigned int)(i + 32));
    }
    height = self->height;
    width = self->width;
    for (i = level; i > 0; i--) {
        height >>= 1;
        if (height < 1) {
            height = 1;
        }
        width >>= 1;
        if (width < 1) {
            width = 1;
        }
    }
    count = self->planes[0].present ? 4 : 3;
    fn_8263C7D8(self->texture, level, &layout, 0, 0);
    levels[0].width = width;
    levels[0].height = height;
    levels[0].pitch = layout.pitch;
    levels[0].base = layout.base;
    for (i = 1; i < count; i++) {
        fn_8263C7D8(self->planes[i].texture, level, &layout, 0, 0);
        levels[i].pitch = layout.pitch;
        levels[i].base = layout.base;
        levels[i].width = i == 3 ? width : width >> 1;
        levels[i].height = i == 3 ? height : height >> 1;
    }
    return count;
}
