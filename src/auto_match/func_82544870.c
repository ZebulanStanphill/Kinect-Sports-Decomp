typedef struct Globals_82544870 {
    char pad0[0x68];
    int surface;                /* 0x68 */
    char pad6c[0x88 - 0x6c];
    unsigned int address;       /* 0x88 */
} Globals_82544870;

typedef struct SurfaceDesc_82544870 {
    int f00[6];
    int width;
    int height;
} SurfaceDesc_82544870;

extern Globals_82544870 lbl_8326AF58;
extern void fn_8263B758(int *surface, int level, SurfaceDesc_82544870 *desc);
extern void fn_82A93C18(int, int, int, int, int, int, int, int, int, int, int, int);
extern void fn_82A93F08(int texture, unsigned int address, int b);

int fn_82544870(int texture)
{
    SurfaceDesc_82544870 desc;
    unsigned int address;

    fn_8263B758(&lbl_8326AF58.surface, 0, &desc);
    address = lbl_8326AF58.address & 0xfffff000;
    fn_82A93C18(desc.width, desc.height, 1, 0, 0x18280186, 0, 0, 0, desc.width * 4, texture, 0, 0);
    fn_82A93F08(texture, address, 0);
    return texture;
}
