typedef struct Name_82526180 {
    char text[0x3e8];
} Name_82526180;

typedef struct Buffer_82524770 {
    unsigned int words[8];
} Buffer_82524770;

typedef struct Texture_82524770 {
    unsigned int words[13];
} Texture_82524770;

typedef struct Surface_82524770 {
    int format;          /* 0x00 */
    unsigned int width;  /* 0x04 */
    unsigned int height; /* 0x08 */
    int pad0c[2];
    int pitch; /* 0x14 */
    int pad18[2];
    unsigned int count;  /* 0x20 */
    unsigned int offset; /* 0x24 */
    int pad28;
} Surface_82524770;

typedef struct Mesh_82524770 {
    int pad00[3];
    unsigned int vertexLength; /* 0x0c */
    unsigned int indexLength;  /* 0x10 */
    int pad14;
    unsigned int surfaceCount; /* 0x18 */
    int pad1c[2];
    unsigned int vertexOffset; /* 0x24 */
    unsigned int indexOffset;  /* 0x28 */
    int pad2c;
    Surface_82524770 *surfaces; /* 0x30 */
} Mesh_82524770;

typedef struct Model_82524770 {
    int pad00[2];
    unsigned int meshCount; /* 0x08 */
    int pad0c;
    Mesh_82524770 *meshes; /* 0x10 */
} Model_82524770;

typedef struct Owner_82524770 {
    char pad0[0x1ac];
    char *resource; /* 0x1ac */
    char pad1b0[0x10];
    int state; /* 0x1c0 */
    char pad1c4[0x1c];
    Name_82526180 names[2]; /* 0x1e0 */
    char pad9b0[0x4];
    int mode;    /* 0x9b4 */
    int swapped; /* 0x9b8 */
    char pad9bc[0xc];
    int disabled; /* 0x9c8 */
    char pad9cc[0x4c];
    Model_82524770 *model; /* 0xa18 */
    void *handle;          /* 0xa1c */
    int registered;        /* 0xa20 */
    char pada24[0x139c];
    Buffer_82524770 vertexBuffers[13];     /* 0x1dc0 */
    Buffer_82524770 indexBuffers[13];      /* 0x1f60 */
    Texture_82524770 textures[13][18][16]; /* 0x2100 */
} Owner_82524770;

extern int fn_82526180(const Name_82526180 *name, void *buffer, void *handle);
extern void fn_82A938E8(unsigned int length, unsigned int usage, unsigned int pool, unsigned int offset,
                        Buffer_82524770 *buf);
extern void fn_82A93980(unsigned int length, unsigned int usage, unsigned int format, unsigned int pool,
                        unsigned int offset, Buffer_82524770 *buf);
extern void fn_82A93C18(unsigned int a, unsigned int b, unsigned int c, unsigned int d, int e, int unused,
                        int p7, int p8, int p9, int p10, int p11, int p12);
extern void fn_82A93F70(char *self, unsigned int offset);
extern int fn_82A82440(short *p);

int fn_82524770(Owner_82524770 *self)
{
    Name_82526180 *name;
    Mesh_82524770 *mesh;
    Surface_82524770 *surface;
    Texture_82524770 *texture;
    unsigned int base;
    unsigned int size;
    unsigned int i;
    unsigned int j;
    unsigned int k;

    if (self->registered == 0) {
        if (self->swapped != 0) {
            name = self->mode == 1 ? &self->names[1] : &self->names[0];
        } else {
            name = self->mode == 1 ? &self->names[0] : &self->names[1];
        }
        if (self->disabled == 0 && fn_82526180(name, self->model, self->handle) != 0) {
            self->registered = 1;
        }
    }
    for (i = 0; i < self->model->meshCount; i++) {
        mesh = &self->model->meshes[i];
        fn_82A938E8(mesh->vertexLength, 0, 0, 0, &self->vertexBuffers[i]);
        fn_82A93F70((char *)&self->vertexBuffers[i], mesh->vertexOffset);
        fn_82A93980(mesh->indexLength, 0, 1, 0, 0, &self->indexBuffers[i]);
        fn_82A93F70((char *)&self->indexBuffers[i], mesh->indexOffset);
        for (j = 0; j < mesh->surfaceCount; j++) {
            surface = &mesh->surfaces[j];
            base = surface->offset;
            for (k = 0; k < surface->count; k++) {
                texture = &self->textures[i][j][k];
                fn_82A93C18(surface->width, surface->height, 1, 0, surface->format, 0, 0, 0, 0, (int)texture,
                            (int)&size, 0);
                fn_82A93F70((char *)texture, surface->pitch * k + base);
            }
        }
    }
    self->state = 3;
    if (self->resource != 0) {
        fn_82A82440((short *)(self->resource + 0xc));
    }
    return 0;
}
