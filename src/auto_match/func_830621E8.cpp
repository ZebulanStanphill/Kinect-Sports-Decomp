// Builds the vertex records of a mesh and generates their adjacency face by face, reporting progress
// ("Generating vertex adjacency") when a progress object is given.
void *operator new[](unsigned int size);

class Vertex_830621E8
{
  public:
    Vertex_830621E8() : first(0), last(0), count(0), boundary(1), visited(0)
    {
    }

    ~Vertex_830621E8()
    {
    }

    int index;              /* 0x00 */
    int first;              /* 0x04 */
    int last;               /* 0x08 */
    int count;              /* 0x0c */
    int pad10;              /* 0x10 */
    unsigned char boundary; /* 0x14 */
    unsigned char visited;  /* 0x15 */
};

struct Face_830621E8 {
    int pad0;
    Face_830621E8 *next; /* 0x04 */
};

struct Mesh_830621E8 {
    int pad00;
    Face_830621E8 *faces; /* 0x04 */
    int pad08;
    int faceCount; /* 0x0c */
    int pad10[2];
    int vertexCount; /* 0x18 */
    int pad1c[4];
    Vertex_830621E8 *vertices; /* 0x2c */
};

struct Progress_830621E8;

extern "C" {
void fn_830677A0(Progress_830621E8 *progress, int total, const char *message);
void fn_830679A8(Progress_830621E8 *progress);
void fn_830678C8(Progress_830621E8 *progress);
void fn_830619F8(Mesh_830621E8 *mesh);
void fn_83061B30(Mesh_830621E8 *mesh, Face_830621E8 *face);
}

extern "C" void fn_830621E8(Mesh_830621E8 *self, Progress_830621E8 *progress)
{
    Vertex_830621E8 *vertices;
    Face_830621E8 *face;
    int i;

    if (progress != 0) {
        fn_830677A0(progress, self->faceCount, "Generating vertex adjacency");
    }
    fn_830619F8(self);
    vertices = new Vertex_830621E8[self->vertexCount];
    self->vertices = vertices;
    for (i = 0; i < self->vertexCount; i++) {
        vertices[i].index = i;
    }
    face = self->faces;
    while (face != 0) {
        fn_83061B30(self, face);
        face = face->next;
        if (progress != 0) {
            fn_830679A8(progress);
        }
    }
    if (progress != 0) {
        fn_830678C8(progress);
    }
}
