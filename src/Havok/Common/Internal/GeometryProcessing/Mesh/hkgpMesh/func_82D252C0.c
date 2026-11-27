#include "xdk/vectorintrinsics.h"

typedef struct Vertex_82D252C0 {
    struct Vertex_82D252C0 *next; /* 0x00 */
    struct Vertex_82D252C0 *prev; /* 0x04 */
    int pad08[2];
    __vector4 position; /* 0x10 */
    __vector4 normal;   /* 0x20 */
    __vector4 data;     /* 0x30 */
    int indexA;         /* 0x40 */
    int indexB;         /* 0x44 */
} Vertex_82D252C0;

/* Links are tagged pointers: the neighbouring triangle with the edge index in the low two bits. */
typedef struct Triangle_82D252C0 {
    struct Triangle_82D252C0 *next; /* 0x00 */
    struct Triangle_82D252C0 *prev; /* 0x04 */
    Vertex_82D252C0 *vertices[3];   /* 0x08 */
    unsigned int links[3];          /* 0x14 */
} Triangle_82D252C0;

typedef struct List_82D252C0 {
    void *pool;
    int ready;
    int pad08;
    void *head;
    int count;
} List_82D252C0;

typedef struct Mesh_82D252C0 {
    char pad00[0x8];
    List_82D252C0 vertices; /* 0x08 */
    char pad1c[0x4];
    List_82D252C0 triangles; /* 0x20 */
} Mesh_82D252C0;

extern __vector4 lbl_8323B1A0;

extern Vertex_82D252C0 *fn_82D2D320(List_82D252C0 *list, Vertex_82D252C0 *source);
extern Triangle_82D252C0 *fn_82D2D400(List_82D252C0 *list, Triangle_82D252C0 *source);

void fn_82D252C0(Mesh_82D252C0 *mesh, Triangle_82D252C0 *triangle, const __vector4 *position)
{
    Vertex_82D252C0 source;
    Vertex_82D252C0 *vertex;
    Triangle_82D252C0 *first;
    Triangle_82D252C0 *second;
    unsigned int link;
    Triangle_82D252C0 *neighbour;
    unsigned int edge;

    source.indexA = -1;
    source.indexB = -1;
    vertex = fn_82D2D320(&mesh->vertices, &source);
    vertex->data = lbl_8323B1A0;
    vertex->position = *position;
    first = fn_82D2D400(&mesh->triangles, triangle);
    second = fn_82D2D400(&mesh->triangles, triangle);
    triangle->vertices[0] = vertex;
    first->vertices[1] = vertex;
    second->vertices[2] = vertex;

    link = triangle->links[2];
    neighbour = (Triangle_82D252C0 *)(link & ~3);
    edge = link & 3;
    first->links[2] = edge + (unsigned int)neighbour;
    if (neighbour != 0) {
        neighbour->links[edge] = (unsigned int)first + 2;
    }

    link = triangle->links[0];
    neighbour = (Triangle_82D252C0 *)(link & ~3);
    edge = link & 3;
    second->links[0] = edge + (unsigned int)neighbour;
    if (neighbour != 0) {
        neighbour->links[edge] = (unsigned int)second;
    }

    triangle->links[0] = (unsigned int)second + 1;
    second->links[1] = (unsigned int)triangle;
    first->links[0] = (unsigned int)second + 2;
    second->links[2] = (unsigned int)first;
    first->links[1] = (unsigned int)triangle + 2;
    triangle->links[2] = (unsigned int)first + 1;
}
