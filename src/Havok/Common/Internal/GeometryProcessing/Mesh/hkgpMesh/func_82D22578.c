typedef struct Vertex_82D22578 {
    struct Vertex_82D22578 *next; /* 0x0 */
    struct Vertex_82D22578 *prev; /* 0x4 */
    char pad8[0x28];
    float tag; /* 0x30 */
} Vertex_82D22578;

typedef struct Triangle_82D22578 {
    struct Triangle_82D22578 *next; /* 0x0 */
    struct Triangle_82D22578 *prev; /* 0x4 */
    Vertex_82D22578 *vertices[3];   /* 0x8 */
} Triangle_82D22578;

typedef struct VertexList_82D22578 {
    int pad[3];
    Vertex_82D22578 *head; /* 0xc */
    int count;             /* 0x10 */
} VertexList_82D22578;

typedef struct TriangleList_82D22578 {
    int pad[3];
    Triangle_82D22578 *head; /* 0xc */
    int count;               /* 0x10 */
} TriangleList_82D22578;

typedef struct Cache_82D22578 Cache_82D22578;

typedef struct CacheVtbl_82D22578 {
    void (*Destroy)(Cache_82D22578 *self, int flags); /* 0x0 */
} CacheVtbl_82D22578;

struct Cache_82D22578 {
    CacheVtbl_82D22578 *vt;
};

typedef struct Mesh_82D22578 {
    char pad0[0x8];
    VertexList_82D22578 vertices; /* 0x8 */
    char pad1c[0x4];
    TriangleList_82D22578 triangles; /* 0x20 */
    char pad34[0x7b8 - 0x34];
    Cache_82D22578 *cache; /* 0x7b8 */
} Mesh_82D22578;

extern void fn_82D2B688(VertexList_82D22578 *list, Vertex_82D22578 *vertex);

static __forceinline void RemoveVertex(VertexList_82D22578 *list, Vertex_82D22578 *vertex)
{
    Vertex_82D22578 *next = vertex->next;
    Vertex_82D22578 *prev = vertex->prev;
    if (next != 0) {
        next->prev = prev;
    }
    if (prev != 0) {
        prev->next = next;
    } else {
        list->head = next;
    }
    list->count--;
    fn_82D2B688(list, vertex);
}

int fn_82D22578(Mesh_82D22578 *mesh)
{
    int removed = 0;
    Vertex_82D22578 *vertex;
    Vertex_82D22578 *nextVertex;
    Triangle_82D22578 *triangle;
    for (vertex = mesh->vertices.head; vertex != 0; vertex = vertex->next) {
        vertex->tag = 0.0f;
    }
    triangle = mesh->triangles.head;
    while (triangle != 0) {
        Vertex_82D22578 *first = triangle->vertices[0];
        Vertex_82D22578 *second = triangle->vertices[1];
        Vertex_82D22578 *third = triangle->vertices[2];
        triangle = triangle->next;
        first->tag = 1.0f;
        second->tag = 1.0f;
        third->tag = 1.0f;
    }
    nextVertex = mesh->vertices.head;
    while (nextVertex != 0) {
        vertex = nextVertex;
        nextVertex = nextVertex->next;
        if (vertex->tag == 0.0f) {
            RemoveVertex(&mesh->vertices, vertex);
            removed++;
        }
    }
    if (removed != 0) {
        if (mesh->cache != 0) {
            mesh->cache->vt->Destroy(mesh->cache, 1);
        }
        mesh->cache = 0;
    }
    return removed;
}
