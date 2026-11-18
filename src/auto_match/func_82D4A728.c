typedef struct MeshShape_82D4A728 MeshShape_82D4A728;

typedef struct ShapeMethods_82D4A728 {
    void *unused[5];
    const char *(*getChildShape)(MeshShape_82D4A728 *self, unsigned int key, void *buffer); /* 0x14 */
} ShapeMethods_82D4A728;

typedef struct Subpart_82D4A728 {
    char padding00[0x1c];
    int numTriangleShapes; /* 0x1c */
    char padding20[0x18];
} Subpart_82D4A728;

struct MeshShape_82D4A728 {
    ShapeMethods_82D4A728 *methods; /* 0x00 */
    char padding04[0x1c];
    int numBitsForSubpartIndex; /* 0x20 */
    Subpart_82D4A728 *subparts; /* 0x24 */
    unsigned int numSubparts;   /* 0x28 */
};

extern unsigned char *fn_82D6F590(void *result, const void *a, const void *b, const void *c, float tolerance);
extern float lbl_83182A98;

static __forceinline int NumTriangles_82D4A728(const MeshShape_82D4A728 *self, unsigned int subpart)
{
    return self->subparts[subpart].numTriangleShapes;
}

unsigned int fn_82D4A728(MeshShape_82D4A728 *self, unsigned int key)
{
    unsigned int subpart = key >> (32 - self->numBitsForSubpartIndex);
    int triangle = (0xffffffffU >> self->numBitsForSubpartIndex) & key;
    unsigned int nextKey;
    const char *shape;
    unsigned char isDegenerate[16];
    unsigned char buffer[512];

    do {
        ++triangle;
        if (triangle >= NumTriangles_82D4A728(self, subpart)) {
            ++subpart;
            if (subpart >= self->numSubparts) {
                return (unsigned int)-1;
            }
            triangle = 0;
        }
        nextKey = (subpart << (32 - self->numBitsForSubpartIndex)) | triangle;
        shape = self->methods->getChildShape(self, nextKey, buffer);
    } while (*fn_82D6F590(isDegenerate, shape + 0x20, shape + 0x30, shape + 0x40, lbl_83182A98) != 0);
    return nextKey;
}
