typedef struct Shape_827F59C0 Shape_827F59C0;

typedef struct Mesh_827F59C0 {
    char reserved00[0x94];
} Mesh_827F59C0;

struct Shape_827F59C0 {
    void *vtable; /* 0x00 */
    char reserved04[0x1c];
    short column;         /* 0x20 */
    short row;            /* 0x22 */
    float outer;          /* 0x24 */
    float thickness;      /* 0x28 */
    float height;         /* 0x2c */
    float offset;         /* 0x30 */
    int count;            /* 0x34 */
    unsigned int flags;   /* 0x38 */
    unsigned int colour;  /* 0x3c */
    unsigned int owner;   /* 0x40 */
    unsigned short group; /* 0x44 */
    char reserved46[2];
    Mesh_827F59C0 mesh;  /* 0x48 */
    unsigned char dirty; /* 0xdc */
    char reserveddd[3];
    char storage[4]; /* 0xe0 */
};

extern char lbl_8201DD78[];
extern Shape_827F59C0 *fn_827F4248(Shape_827F59C0 *self, Mesh_827F59C0 *mesh, void *name, int kind,
                                   void *storage);
extern unsigned int fn_827F3A60(void *source);
extern Mesh_827F59C0 *fn_827F4100(Mesh_827F59C0 *mesh, void *source);
extern void fn_827F3C58(Shape_827F59C0 *self, unsigned short index, void *source);
extern void fn_827F56B0(Shape_827F59C0 *self);

Shape_827F59C0 *fn_827F59C0(Shape_827F59C0 *self, int cell, void *first, void *second, void *name,
                            float inner, float outer, float height, unsigned int flags, unsigned int owner,
                            unsigned short group, unsigned int colour)
{
    fn_827F4248(self, &self->mesh, name, 2, self->storage);
    self->vtable = lbl_8201DD78;
    self->column = cell % 6;
    self->row = cell / 6;
    self->outer = outer;
    self->thickness = outer - inner;
    self->height = height;
    self->offset = 0.0f;
    self->count = 0;
    self->flags = flags;
    self->colour = colour;
    self->owner = owner;
    self->group = group;
    fn_827F4100(&self->mesh, fn_827F3A60(first) > fn_827F3A60(second) ? first : second);
    self->dirty = 0;
    fn_827F3C58(self, 0, first);
    fn_827F3C58(self, 1, second);
    if (self->owner != 0)
        fn_827F56B0(self);
    return self;
}
