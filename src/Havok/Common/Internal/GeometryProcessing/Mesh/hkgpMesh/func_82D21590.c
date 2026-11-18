/* hkgpMesh: rebuilds the mesh's convex hull. The old hull is deleted; with
 * more than three vertices a new hkgpConvexHull is built from the mesh
 * points (fn_82D201C0) and kept only when it is three-dimensional. */
typedef struct Allocator_82D21590 Allocator_82D21590;

typedef struct AllocatorVtbl_82D21590 {
    void *slot00;
    void *(*blockAlloc)(Allocator_82D21590 *self, int nbytes); /* 0x04 */
    void *slot08;
    void *slot0C;
    void (*bufFree)(Allocator_82D21590 *self, void *p, int capacity, int elementSize); /* 0x10 */
} AllocatorVtbl_82D21590;

struct Allocator_82D21590 {
    AllocatorVtbl_82D21590 *vtbl;
};

typedef struct MemoryRouter_82D21590 {
    char pad00[0x10];
    Allocator_82D21590 *heap; /* 0x10 */
} MemoryRouter_82D21590;

typedef struct ConvexHull_82D21590 ConvexHull_82D21590;

typedef struct ConvexHullVtbl_82D21590 {
    void (*destroy)(ConvexHull_82D21590 *self, unsigned int flags); /* 0x00 */
} ConvexHullVtbl_82D21590;

struct ConvexHull_82D21590 {
    ConvexHullVtbl_82D21590 *vtbl;  /* 0x00 */
    unsigned short memSizeAndFlags; /* 0x04 */
    short referenceCount;           /* 0x06 */
};

typedef struct BuildConfig_82D21590 {
    char pad00[0x9];
    unsigned char flag09; /* 0x09 */
    unsigned char flag0A; /* 0x0A */
    char pad0B[0x5];
} BuildConfig_82D21590;

typedef struct VectorArray_82D21590 {
    void *data;           /* 0x0 */
    int size;             /* 0x4 */
    int capacityAndFlags; /* 0x8 */
} VectorArray_82D21590;

typedef struct Mesh_82D21590 {
    char pad000[0x18];
    int numVertices; /* 0x018 */
    char pad01C[0x79C];
    ConvexHull_82D21590 *convexHull; /* 0x7B8 */
} Mesh_82D21590;

extern MemoryRouter_82D21590 *fn_82CE5410(void);
extern void fn_82D0B0C0(BuildConfig_82D21590 *config);
extern ConvexHull_82D21590 *fn_82D0D6E8(void *memory);
extern void fn_82D201C0(Mesh_82D21590 *self, VectorArray_82D21590 *points);
extern void fn_82D0D850(ConvexHull_82D21590 *hull, void *points, int numPoints, BuildConfig_82D21590 *config);
extern int fn_82D0B1D8(ConvexHull_82D21590 *hull);

static __forceinline void DeleteHull(Mesh_82D21590 *self)
{
    if (self->convexHull != 0) {
        self->convexHull->vtbl->destroy(self->convexHull, 1);
    }
    self->convexHull = 0;
}

static __forceinline void FreePoints(VectorArray_82D21590 *points)
{
    Allocator_82D21590 *heap = fn_82CE5410()->heap;

    points->size = 0;
    if ((points->capacityAndFlags & (int)0x80000000) == 0) {
        heap->vtbl->bufFree(heap, points->data, points->capacityAndFlags & 0x3fffffff, 0x10);
    }
}

int fn_82D21590(Mesh_82D21590 *self)
{
    BuildConfig_82D21590 config;
    VectorArray_82D21590 points;
    ConvexHull_82D21590 *memory;
    Allocator_82D21590 *heap;

    DeleteHull(self);
    if (self->numVertices > 3) {
        fn_82D0B0C0(&config);
        config.flag09 = 0;
        config.flag0A = 1;
        heap = fn_82CE5410()->heap;
        memory = (ConvexHull_82D21590 *)heap->vtbl->blockAlloc(heap, 0x14);
        memory->memSizeAndFlags = 0x14;
        self->convexHull = fn_82D0D6E8(memory);
        points.data = 0;
        points.size = 0;
        points.capacityAndFlags = 0x80000000;
        fn_82D201C0(self, &points);
        fn_82D0D850(self->convexHull, points.data, points.size, &config);
        if (fn_82D0B1D8(self->convexHull) != 3) {
            DeleteHull(self);
            FreePoints(&points);
            return 0;
        }
        FreePoints(&points);
    }
    return 1;
}
