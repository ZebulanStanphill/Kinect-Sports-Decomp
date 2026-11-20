typedef struct Constant_82AF4BA8 {
    char pad0[0x8];
    unsigned int format; /* 0x8 */
} Constant_82AF4BA8;

extern float fn_82B80EE0(Constant_82AF4BA8 *constant, unsigned int component, unsigned int flags);

int fn_82AF5160(void *self, unsigned int srcCount, Constant_82AF4BA8 **srcConstants, int *srcComponents,
                unsigned int *srcFlags, unsigned int dstCount, Constant_82AF4BA8 **dstConstants,
                int *dstComponents, unsigned int *dstFlags, unsigned int *outMapping,
                unsigned int *outMissing)
{
    unsigned int mapping;
    unsigned int j;
    unsigned int i;
    unsigned char found;

    *outMissing = 0;
    mapping = 0;
    for (j = 0; j < dstCount; j++) {
        found = 0;
        for (i = 0; i < srcCount; i++) {
            if (srcConstants[i] == dstConstants[j] && srcFlags[i] == dstFlags[j]) {
                found = 1;
                if (srcComponents[i] == dstComponents[j]) {
                    break;
                }
            }
            if ((dstConstants[j]->format & 0x3f80) == 0x3e80 &&
                (srcConstants[i]->format & 0x3f80) == 0x3e80) {
                if (fn_82B80EE0(srcConstants[i], srcComponents[i], srcFlags[i]) ==
                    fn_82B80EE0(dstConstants[j], dstComponents[j], dstFlags[j])) {
                    break;
                }
            }
        }
        if (i == srcCount) {
            if (!found) {
                return 0;
            }
            *outMissing |= 1 << j;
        } else {
            mapping = mapping & ~(3 << (j * 2)) | i << (j * 2);
        }
    }
    *outMapping = mapping;
    return 1;
}
