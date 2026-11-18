typedef struct Polygon_83064008 Polygon_83064008;

typedef struct Vertices_83064008 {
    int unused;
} Vertices_83064008;

struct Polygon_83064008 {
    char pad0[0x10];
    Vertices_83064008 vertices; /* 0x10 */
};

typedef struct PolygonList_83064008 {
    Polygon_83064008 *head; /* 0x0 */
} PolygonList_83064008;

typedef struct Splitter_83064008 {
    char pad0[0x30];
    float epsilon; /* 0x30 */
} Splitter_83064008;

extern void fn_8306AB80(PolygonList_83064008 *list, Polygon_83064008 *polygon);
extern int fn_83066810(void *plane, Vertices_83064008 *vertices, float epsilon, unsigned char *onPlane);
extern void fn_83068640(Polygon_83064008 *polygon, unsigned char flag);
extern unsigned char fn_83068648(Polygon_83064008 *polygon);
extern void fn_8306AAF0(PolygonList_83064008 *list, Polygon_83064008 *polygon);
extern void fn_8306AB38(PolygonList_83064008 *list, Polygon_83064008 *polygon);
extern Polygon_83064008 *fn_83065E60(void);
extern void fn_8305D5F0(Vertices_83064008 *vertices);
extern int fn_8305D7C8(Vertices_83064008 *vertices);
extern void fn_8305E0F8(Vertices_83064008 *vertices, int value);
extern int fn_8305D618(Vertices_83064008 *vertices);
extern void fn_8305D5F8(Vertices_83064008 *vertices, int value);
extern void fn_8305F320(Vertices_83064008 *source, void *plane, Vertices_83064008 *front,
                        Vertices_83064008 *back, float epsilon);
extern void fn_83065C58(Polygon_83064008 *polygon);

int fn_83064008(Splitter_83064008 *self, void *plane, PolygonList_83064008 *list,
                PolygonList_83064008 *frontList, PolygonList_83064008 *backList)
{
    Polygon_83064008 *polygon;
    Polygon_83064008 *back;
    Polygon_83064008 *front;
    Vertices_83064008 *vertices;
    Vertices_83064008 *backVertices;
    Vertices_83064008 *frontVertices;
    unsigned char onPlane;
    int side;

    while ((polygon = list->head) != 0) {
        fn_8306AB80(list, polygon);
        vertices = &polygon->vertices;
        side = fn_83066810(plane, vertices, self->epsilon, &onPlane);
        if (onPlane)
            fn_83068640(polygon, 1);
        if (side == 1) {
            if (fn_83068648(polygon))
                fn_8306AAF0(frontList, polygon);
            else
                fn_8306AB38(frontList, polygon);
        } else if (side == 2) {
            if (fn_83068648(polygon))
                fn_8306AAF0(backList, polygon);
            else
                fn_8306AB38(backList, polygon);
        } else {
            back = fn_83065E60();
            front = fn_83065E60();
            backVertices = &back->vertices;
            fn_8305D5F0(backVertices);
            fn_8305E0F8(backVertices, fn_8305D7C8(vertices));
            fn_8305D5F8(backVertices, fn_8305D618(vertices));
            frontVertices = &front->vertices;
            fn_8305D5F0(frontVertices);
            fn_8305E0F8(frontVertices, fn_8305D7C8(vertices));
            fn_8305D5F8(frontVertices, fn_8305D618(vertices));
            if (fn_83068648(polygon)) {
                fn_83068640(back, fn_83068648(polygon));
                fn_83068640(front, fn_83068648(polygon));
                fn_8306AAF0(frontList, front);
                fn_8306AAF0(backList, back);
            } else {
                fn_8306AB38(frontList, front);
                fn_8306AB38(backList, back);
            }
            fn_8305F320(vertices, plane, backVertices, frontVertices, self->epsilon);
            fn_83065C58(polygon);
        }
    }
    return 1;
}
