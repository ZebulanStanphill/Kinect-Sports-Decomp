typedef struct MeshShape_82D42078 MeshShape_82D42078;

typedef struct Shape_82D42078 {
    char padding00[0xc];
    int type; /* 0x0c */
    char padding10[0x10];
    float vertices[3][4]; /* 0x20 */
} Shape_82D42078;

typedef struct ShapeMethods_82D42078 {
    void *unused[5];
    Shape_82D42078 *(*getChildShape)(MeshShape_82D42078 *self, unsigned int key, void *buffer); /* 0x14 */
} ShapeMethods_82D42078;

typedef struct TrianglesSubpart_82D42078 {
    char padding00[0x14];
    int numTriangleShapes; /* 0x14 */
    char padding18[0x48];
} TrianglesSubpart_82D42078;

typedef struct ShapesSubpart_82D42078 {
    char padding00[0x14];
    void **childShapes; /* 0x14 */
    int numChildShapes; /* 0x18 */
    char padding1C[0x24];
} ShapesSubpart_82D42078;

/* The shape collection interface of an extended mesh shape (0x10 into the object). */
struct MeshShape_82D42078 {
    ShapeMethods_82D42078 *methods; /* 0x00 */
    char padding04[0x9c];
    int numBitsForSubpartIndex;                   /* 0xa0 */
    TrianglesSubpart_82D42078 *trianglesSubparts; /* 0xa4 */
    int numTrianglesSubparts;                     /* 0xa8 */
    int trianglesSubpartsCapacity;                /* 0xac */
    ShapesSubpart_82D42078 *shapesSubparts;       /* 0xb0 */
    int numShapesSubparts;                        /* 0xb4 */
};

extern unsigned char *fn_82D6F590(void *result, const void *a, const void *b, const void *c, float tolerance);
extern float lbl_83182A98;

unsigned int fn_82D42078(MeshShape_82D42078 *self, unsigned int key)
{
    int subpartType;
    unsigned int subpart = (key & 0x7fffffff) >> (32 - self->numBitsForSubpartIndex);
    int terminal = (0xffffffffU >> self->numBitsForSubpartIndex) & key;
    unsigned int nextKey;
    Shape_82D42078 *shape;
    unsigned char isDegenerate[16];
    unsigned char buffer[512];

    subpartType = key & 0x80000000;
    for (;;) {
        if (subpartType == 0) {
            ++terminal;
            if (terminal >= self->trianglesSubparts[subpart].numTriangleShapes) {
                ++subpart;
                terminal = 0;
                if (subpart >= (unsigned int)self->numTrianglesSubparts) {
                    if (self->numShapesSubparts == 0) {
                        return (unsigned int)-1;
                    }
                    subpartType = 0x80000000;
                    subpart = 0;
                    terminal = -1;
                    continue;
                }
            }
        } else {
            ++terminal;
            if (terminal >= self->shapesSubparts[subpart].numChildShapes) {
                ++subpart;
                if (subpart >= (unsigned int)self->numShapesSubparts) {
                    return (unsigned int)-1;
                }
                terminal = 0;
            }
        }
        nextKey = (subpart << (32 - self->numBitsForSubpartIndex)) | subpartType | terminal;
        shape = self->methods->getChildShape(self, nextKey, buffer);
        if (shape->type != 3) {
            break;
        }
        if (*fn_82D6F590(isDegenerate, shape->vertices[0], shape->vertices[1], shape->vertices[2],
                         lbl_83182A98) == 0) {
            break;
        }
    }
    return nextKey;
}
