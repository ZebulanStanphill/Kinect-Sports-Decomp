typedef struct Viewport_82837218 {
    unsigned int x;      /* 0x0 */
    unsigned int y;      /* 0x4 */
    unsigned int width;  /* 0x8 */
    unsigned int height; /* 0xc */
    float nearPlane;     /* 0x10 */
    float farPlane;      /* 0x14 */
} Viewport_82837218;

typedef struct Globals_82837218 {
    int clearColor;      /* 0x0, lbl_8320A884 */
    unsigned int color;  /* 0x4 */
    unsigned int height; /* 0x8, lbl_8320A88C */
    unsigned int width;  /* 0xc */
    char pad10[0x20];
    int enabled; /* 0x30, lbl_8320A8B4 */
} Globals_82837218;

extern Globals_82837218 lbl_8320A884;
extern void *lbl_8320A898;
extern void fn_82639EA8(void *device, const Viewport_82837218 *viewport);
extern void fn_8263DE70(void *device, unsigned int count, const void *rects, unsigned int flags,
                        unsigned int color, float depth, unsigned int stencil, int edramClear);

void fn_82837218(void)
{
    Viewport_82837218 viewport;

    if (lbl_8320A884.enabled == 0) {
        viewport.x = 0;
        viewport.y = 0;
        viewport.width = lbl_8320A884.width;
        viewport.height = lbl_8320A884.height;
        viewport.nearPlane = 0.0f;
        viewport.farPlane = 1.0f;
        fn_82639EA8(lbl_8320A898, &viewport);
        fn_8263DE70(lbl_8320A898, 0, 0, (lbl_8320A884.clearColor != 0 ? 0xf : 0) | 0x30, lbl_8320A884.color,
                    1.0f, 0, 0);
    }
}
