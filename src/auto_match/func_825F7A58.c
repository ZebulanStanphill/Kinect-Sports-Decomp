typedef struct Globals_825F7A58 {
    char pad0[0x68];
    int surface; /* 0x68 */
    char pad6c[0x88 - 0x6c];
    unsigned int address; /* 0x88 */
} Globals_825F7A58;

typedef struct SurfaceDesc_825F7A58 {
    int f00[6];
    int width;
    int height;
} SurfaceDesc_825F7A58;

extern Globals_825F7A58 lbl_8326AF58;
extern void fn_8263B758(int *surface, int level, SurfaceDesc_825F7A58 *desc);
extern void fn_82A93C18(int, int, int, int, int, int, int, int, int, int, int, int);
extern void fn_82A93F08(int texture, unsigned int address, int b);

extern void *fn_82522D98(unsigned int);
extern char lbl_832746A0[];

void *fn_825F7A58(void)
{
    SurfaceDesc_825F7A58 desc;
    unsigned int address;

    void *result = fn_82522D98(4);

    *(int *)result = 0;
    fn_8263B758(&lbl_8326AF58.surface, 0, &desc);
    address = lbl_8326AF58.address & 0xfffff000;
    fn_82A93C18(desc.width, desc.height, 1, 0, 0x18280186, 0, 0, 0, desc.width * 4, (int)lbl_832746A0, 0, 0);
    fn_82A93F08((int)lbl_832746A0, address, 0);
    return result;
}
