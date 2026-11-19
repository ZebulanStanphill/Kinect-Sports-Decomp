typedef struct Vertices_83063228 {
    int unused;
} Vertices_83063228;

typedef struct Polygon_83063228 {
    char pad0[0x10];
    Vertices_83063228 vertices; /* 0x10 */
} Polygon_83063228;

typedef struct PolygonList_83063228 {
    Polygon_83063228 *head; /* 0x0 */
} PolygonList_83063228;

typedef struct BspNode_83063228 {
    char pad0[0x10];
    char plane[0x20];               /* 0x10 */
    struct BspNode_83063228 *front; /* 0x30 */
    struct BspNode_83063228 *back;  /* 0x34 */
    char pad38[0x20];
    PolygonList_83063228 polygons; /* 0x58 */
} BspNode_83063228;

typedef struct Splitter_83063228 {
    char pad0[0x30];
    float epsilon; /* 0x30 */
} Splitter_83063228;

extern unsigned char fn_83068418(BspNode_83063228 *node);
extern void fn_8306AB38(PolygonList_83063228 *list, Polygon_83063228 *polygon);
extern int fn_83066810(void *plane, Vertices_83063228 *vertices, float epsilon, unsigned char *onPlane);
extern Polygon_83063228 *fn_83065E60(void);
extern void fn_8305D5F0(Vertices_83063228 *vertices);
extern int fn_8305D7C8(Vertices_83063228 *vertices);
extern void fn_8305E0F8(Vertices_83063228 *vertices, int value);
extern int fn_8305D618(Vertices_83063228 *vertices);
extern void fn_8305D5F8(Vertices_83063228 *vertices, int value);
extern void fn_8305F320(Vertices_83063228 *source, void *plane, Vertices_83063228 *front,
                        Vertices_83063228 *back, float epsilon);
extern void fn_83065C58(Polygon_83063228 *polygon);

void fn_83063228(Splitter_83063228 *self, BspNode_83063228 *node, Polygon_83063228 *polygon)
{
    Vertices_83063228 *vertices;
    void *plane;
    Polygon_83063228 *copy;
    Vertices_83063228 *copyVertices;
    unsigned char onPlane;
    int side;

    if (fn_83068418(node)) {
        fn_8306AB38(&node->polygons, polygon);
        return;
    }
    vertices = &polygon->vertices;
    plane = node->plane;
    side = fn_83066810(plane, vertices, self->epsilon, &onPlane);
    if (onPlane) {
        if (node->back == 0) {
            fn_83063228(self, node->front, polygon);
        } else if (node->front == 0) {
            fn_83063228(self, node->back, polygon);
        } else {
            copy = fn_83065E60();
            copyVertices = &copy->vertices;
            fn_8305D5F0(copyVertices);
            fn_8305E0F8(copyVertices, fn_8305D7C8(vertices));
            fn_8305D5F8(copyVertices, fn_8305D618(vertices));
            fn_83063228(self, node->front, polygon);
            fn_83063228(self, node->back, copy);
        }
    } else if (side == 1) {
        if (node->front != 0) {
            fn_83063228(self, node->front, polygon);
        } else {
            fn_83065C58(polygon);
        }
    } else if (side == 2) {
        if (node->back != 0) {
            fn_83063228(self, node->back, polygon);
        } else {
            fn_83065C58(polygon);
        }
    } else {
        if (node->back == 0) {
            fn_8305F320(vertices, plane, 0, vertices, self->epsilon);
            fn_83063228(self, node->front, polygon);
        } else if (node->front == 0) {
            fn_8305F320(vertices, plane, vertices, 0, self->epsilon);
            fn_83063228(self, node->back, polygon);
        } else {
            copy = fn_83065E60();
            copyVertices = &copy->vertices;
            fn_8305D5F0(copyVertices);
            fn_8305E0F8(copyVertices, fn_8305D7C8(vertices));
            fn_8305D5F8(copyVertices, fn_8305D618(vertices));
            fn_8305F320(vertices, plane, copyVertices, vertices, self->epsilon);
            fn_83063228(self, node->front, polygon);
            fn_83063228(self, node->back, copy);
        }
    }
}
