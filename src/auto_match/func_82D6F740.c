// Havok convertVertexIdsToVertices(const hkpVertexId *ids, int numIds, hkcdVertex *verticesOut) of a shape
// that keeps a display mesh: id / 3 selects a shape key (array at +0x24), the mesh's shape container
// (+0x10 in the mesh) builds that triangle in a stack shape buffer, id % 3 selects its vertex, and the id is
// stored in w as an int24.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct TriangleShape_82D6F740 {
    char pad0[0x20];
    __vector4 vertices[3]; // 0x20
    __vector4 extrusion;   // 0x50
} TriangleShape_82D6F740;

typedef union Vertex_82D6F740 {
    __vector4 v;
    int i[4];
} Vertex_82D6F740;

typedef struct ShapeBuffer_82D6F740 {
    __vector4 data[32];
} ShapeBuffer_82D6F740;

typedef struct ShapeContainer_82D6F740 ShapeContainer_82D6F740;

typedef struct ShapeContainerVtbl_82D6F740 {
    void *slots[5];
    const TriangleShape_82D6F740 *(*getChildShape)(const ShapeContainer_82D6F740 *self, unsigned int key,
                                                   ShapeBuffer_82D6F740 *buffer); // 0x14
} ShapeContainerVtbl_82D6F740;

struct ShapeContainer_82D6F740 {
    ShapeContainerVtbl_82D6F740 *vt;
};

typedef struct Mesh_82D6F740 {
    char pad0[0x10];
    ShapeContainer_82D6F740 container; // 0x10
} Mesh_82D6F740;

typedef struct Shape_82D6F740 {
    char pad0[0x20];
    Mesh_82D6F740 *displayMesh;     // 0x20
    unsigned int *displayShapeKeys; // 0x24
} Shape_82D6F740;

static __forceinline void SetInt24W(Vertex_82D6F740 *self, int value)
{
    self->i[3] = value | 0x3f000000;
}

void fn_82D6F740(const Shape_82D6F740 *self, const unsigned short *ids, int numIds,
                 Vertex_82D6F740 *verticesOut)
{
    ShapeBuffer_82D6F740 buffer;
    int i;

    for (i = numIds - 1; i >= 0; i--) {
        int id = *ids;
        const ShapeContainer_82D6F740 *container = &self->displayMesh->container;
        const TriangleShape_82D6F740 *triangle =
            container->vt->getChildShape(container, self->displayShapeKeys[id / 3], &buffer);

        verticesOut->v = triangle->vertices[id % 3];
        SetInt24W(verticesOut, id);
        verticesOut++;
        ids++;
    }
}
