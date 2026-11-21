typedef struct Vertices_830639B0 {
    int unused;
} Vertices_830639B0;

typedef struct BspNode_830639B0 {
    char pad0[0x10];
    char plane[0x20];               /* 0x10 */
    struct BspNode_830639B0 *front; /* 0x30 */
    struct BspNode_830639B0 *back;  /* 0x34 */
} BspNode_830639B0;

typedef struct NodeIterator_830639B0 NodeIterator_830639B0;

typedef struct NodeIteratorVt_830639B0 {
    void *dtor;
    BspNode_830639B0 *(*next)(NodeIterator_830639B0 *self, BspNode_830639B0 *node);
} NodeIteratorVt_830639B0;

struct NodeIterator_830639B0 {
    const NodeIteratorVt_830639B0 *vt; /* 0x0 */
    BspNode_830639B0 *root;            /* 0x4 */
    BspNode_830639B0 *current;         /* 0x8 */
};

typedef struct Splitter_830639B0 {
    char pad0[0x30];
    float epsilon; /* 0x30 */
} Splitter_830639B0;

extern const NodeIteratorVt_830639B0 lbl_8217E8A0;

extern void fn_8305ED48(Vertices_830639B0 *vertices, void *plane, int a, int b);
extern int fn_83066810(void *plane, Vertices_830639B0 *vertices, float epsilon, unsigned char *onPlane);
extern void fn_8305F320(Vertices_830639B0 *source, void *plane, Vertices_830639B0 *front,
                        Vertices_830639B0 *back, float epsilon);

void fn_830639B0(Splitter_830639B0 *self, BspNode_830639B0 *root, Vertices_830639B0 *vertices, int a, int b)
{
    NodeIterator_830639B0 it;
    BspNode_830639B0 *previous;
    unsigned char isFront;

    fn_8305ED48(vertices, root->plane, a, b);
    it.vt = &lbl_8217E8A0;
    it.root = root;
    it.current = root;
    previous = root;
    while ((it.current = it.vt->next(&it, previous)) != 0) {
        isFront = previous == it.current->front;
        if (fn_83066810(it.current->plane, vertices, self->epsilon, 0) == 3) {
            fn_8305F320(vertices, it.current->plane, isFront ? 0 : vertices, isFront ? vertices : 0,
                        self->epsilon);
        }
        previous = it.current;
    }
}
