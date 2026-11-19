typedef struct Def_825BB8D0 {
    unsigned short size; /* 0x00 */
    char pad02[0x40];
    char name[0x40]; /* 0x42 */
    char pad82[0x2];
    int ownerId; /* 0x84 */
    char pad88[0x1c];
    float position[3]; /* 0xa4 */
    float rotation[4]; /* 0xb0 */
    float radius;      /* 0xc0 */
    int model;         /* 0xc4 */
    unsigned int kind; /* 0xc8 */
    float colour[4];   /* 0xcc */
    float extent[3];   /* 0xdc */
} Def_825BB8D0;

typedef struct Spawner_825BB8D0 {
    char pad00[0x14];
    float position[3]; /* 0x14 */
    float rotation[4]; /* 0x20 */
    char pad30[0x4];
    unsigned int kind; /* 0x34 */
    float radius;      /* 0x38 */
    int model;         /* 0x3c */
    float colour[4];   /* 0x40 */
    float extent[3];   /* 0x50 */
} Spawner_825BB8D0;

typedef struct Elem_825BB8D0 {
    const char *name;
} Elem_825BB8D0;

extern void fn_82558150(Def_825BB8D0 *def);
extern Elem_825BB8D0 *fn_82587B68(int i);
extern int fn_82526C70(char *buf, int size, const char *fmt, ...);
extern void *fn_82587AC0(void *);
extern void *fn_82529A38(void *, void *, int);

void fn_825BB8D0(Spawner_825BB8D0 *self, int ownerId)
{
    Def_825BB8D0 def;

    if (self->kind != 0) {
        fn_82558150(&def);
        def.size = 0xe8;
        fn_82526C70(def.name, 0x40, "objDefId_%s", fn_82587B68(0x11)->name);
        def.kind = self->kind;
        def.model = self->model;
        def.colour[0] = self->colour[0];
        def.colour[1] = self->colour[1];
        def.colour[2] = self->colour[2];
        def.colour[3] = self->colour[3];
        def.position[0] = self->position[0];
        def.position[1] = self->position[1];
        def.position[2] = self->position[2];
        def.rotation[0] = self->rotation[0];
        def.rotation[1] = self->rotation[1];
        def.rotation[2] = self->rotation[2];
        def.radius = self->radius;
        def.rotation[3] = self->rotation[3];
        def.extent[0] = self->extent[0];
        def.extent[1] = self->extent[1];
        def.extent[2] = self->extent[2];
        def.ownerId = ownerId;
        fn_82529A38(fn_82587AC0(def.name + 9), &def, 0);
    }
}
