typedef struct Edge_83065298 {
    void *vtbl;
    struct Edge_83065298 *next;    /* 0x04 */
    struct Edge_83065298 *prev;    /* 0x08 */
    void *list;                    /* 0x0C */
    struct Group_83065298 *target; /* 0x10 */
    int unk14;
    void *shared; /* 0x18 */
} Edge_83065298;

typedef struct EdgeList_83065298 {
    Edge_83065298 *head; /* 0x00 */
    Edge_83065298 *tail; /* 0x04 */
    int count;           /* 0x08 */
} EdgeList_83065298;

extern "C" void *fn_8265C9E0(unsigned int size);

class Group_83065298
{
  public:
    static void *operator new(unsigned int size)
    {
        return fn_8265C9E0(size);
    }

    Group_83065298();
    virtual void vf00();

    char unk04[0x10 - 0x4];
    EdgeList_83065298 edges; /* 0x10 */
    char unk1C[0x28 - 0x1c];
    struct Vertex_83065298 *owner; /* 0x28 */
};

typedef struct Vertex_83065298 {
    char unk00[0x3c];
    Group_83065298 *groupA; /* 0x3C */
    Group_83065298 *groupB; /* 0x40 */
} Vertex_83065298;

typedef struct Graph_83065298 {
    char unk00[0x94];
    int unk94; /* 0x94 */
} Graph_83065298;

extern "C" {
Edge_83065298 *fn_83065138(Graph_83065298 *graph);
void *fn_83065E50(void);
void fn_8305E0F8(void *shared, int *value);
void fn_8305EC98(void *shared, void *source);
void fn_8306AAF0(EdgeList_83065298 *list, Edge_83065298 *edge);
}

extern "C" void fn_83065298(Graph_83065298 *graph, Vertex_83065298 *from, Vertex_83065298 *to, void *source,
                            unsigned char useA)
{
    Group_83065298 *fromGroup;
    Group_83065298 *toGroup;
    Edge_83065298 *edge;
    Edge_83065298 *forward;
    Edge_83065298 *backward;
    void *shared;

    if (useA) {
        fromGroup = from->groupA;
        toGroup = to->groupA;
        if (fromGroup == 0) {
            fromGroup = new Group_83065298;
            from->groupA = fromGroup;
            fromGroup->owner = from;
        }
        if (toGroup == 0) {
            toGroup = new Group_83065298;
            to->groupA = toGroup;
            toGroup->owner = to;
        }
    } else {
        fromGroup = from->groupB;
        toGroup = to->groupB;
        if (fromGroup == 0) {
            fromGroup = new Group_83065298;
            from->groupB = fromGroup;
            fromGroup->owner = from;
        }
        if (toGroup == 0) {
            toGroup = new Group_83065298;
            to->groupB = toGroup;
            toGroup->owner = to;
        }
    }
    for (edge = fromGroup->edges.head; edge != 0; edge = edge->next) {
        if (edge->target == toGroup) {
            break;
        }
    }
    forward = fn_83065138(graph);
    backward = fn_83065138(graph);
    forward->target = toGroup;
    backward->target = fromGroup;
    shared = fn_83065E50();
    fn_8305E0F8(shared, &graph->unk94);
    fn_8305EC98(shared, source);
    forward->shared = shared;
    backward->shared = shared;
    fn_8306AAF0(&fromGroup->edges, forward);
    fn_8306AAF0(&toGroup->edges, backward);
}
