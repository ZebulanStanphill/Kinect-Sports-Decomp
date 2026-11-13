/* Havok: build an hkgpConvexHull from the vertices (setSourceIndices = true); when it has a
   dimension, run three operations on it with the two other arguments, then destroy it. */
typedef struct ConvexHull_82D081B8 {
    void *vtable;
    int refCount;
    void *data;
    int pad[2];
} ConvexHull_82D081B8;

typedef struct BuildConfig_82D081B8 {
    unsigned char setSourceIndices;
    unsigned char data[0xf];
} BuildConfig_82D081B8;

extern float lbl_821344F4;
extern void fn_82D0D6E8(ConvexHull_82D081B8 *self);       /* hkgpConvexHull::hkgpConvexHull */
extern void fn_82D0D640(ConvexHull_82D081B8 *self);       /* hkgpConvexHull::~hkgpConvexHull */
extern void fn_82D0B0C0(BuildConfig_82D081B8 *self);      /* BuildConfig::BuildConfig */
extern int fn_82D0D888(ConvexHull_82D081B8 *self, const void *vertices, const BuildConfig_82D081B8 *config);
extern void fn_82D0CA60(ConvexHull_82D081B8 *self, int a, void *b);
extern void fn_82D0D120(ConvexHull_82D081B8 *self, float x, int a);
extern void fn_82D0C860(ConvexHull_82D081B8 *self, void *c);

void fn_82D081B8(const void *vertices, void *b, void *c)
{
    ConvexHull_82D081B8 hull;
    BuildConfig_82D081B8 config;
    fn_82D0D6E8(&hull);
    fn_82D0B0C0(&config);
    config.setSourceIndices = 1;
    if (fn_82D0D888(&hull, vertices, &config) != -1) {
        fn_82D0CA60(&hull, 0, b);
        fn_82D0D120(&hull, lbl_821344F4, 0);
        fn_82D0C860(&hull, c);
    }
    fn_82D0D640(&hull);
}
