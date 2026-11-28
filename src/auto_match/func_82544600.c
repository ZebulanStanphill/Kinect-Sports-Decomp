typedef struct Device_82544600 {
    char pad[0x2a88];
    int owner;
} Device_82544600;

typedef struct Graphics_82544600 {
    char pad[0x304];
    int width;
    int height;
} Graphics_82544600;

typedef struct Surface_82544600 {
    char pad[0x104];
    char surface[0x2d8];
    unsigned int base;
    unsigned int offset;
    char pad2[8];
    int width;
    int height;
} Surface_82544600;

extern Device_82544600 *lbl_8320A898;
extern Graphics_82544600 lbl_83296890;
extern Surface_82544600 lbl_8326AF58;

extern int fn_82A1BB18(void);
extern unsigned int fn_8259A230(int thread);
extern void fn_825315E0(void *device);
extern void fn_82A93C18(unsigned int width, unsigned int height, unsigned int count, unsigned int usage,
                        int format, int unused, int p7, int p8, int p9, int descriptor, int output, int p12);
extern void fn_82A93F70(char *surface, unsigned int offset);

static __forceinline Device_82544600 *CurrentDevice(void)
{
    int owner = lbl_8320A898->owner;
    return owner == fn_82A1BB18() ? lbl_8320A898 : 0;
}

char *fn_82544600(void)
{
    int width;
    int height;

    if (fn_8259A230(fn_82A1BB18())) {
        return lbl_8326AF58.surface;
    }
    fn_825315E0(CurrentDevice());
    width = lbl_83296890.width;
    fn_825315E0(CurrentDevice());
    height = lbl_83296890.height;
    if (width != lbl_8326AF58.width || height != lbl_8326AF58.height) {
        unsigned int allocation;

        lbl_8326AF58.height = height;
        lbl_8326AF58.width = width;
        fn_82A93C18(width, height, 1, 0, 0x18280186, 0, 0, -1, 0, (int)lbl_8326AF58.surface, (int)&allocation,
                    0);
        fn_82A93F70(lbl_8326AF58.surface, lbl_8326AF58.offset - allocation + lbl_8326AF58.base);
    }
    return lbl_8326AF58.surface;
}
