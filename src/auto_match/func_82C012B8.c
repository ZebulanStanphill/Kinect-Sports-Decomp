typedef struct Surface_82C012B8 Surface_82C012B8;
typedef struct SurfaceVtbl_82C012B8 {
    void *slots[20];
    void (*allocate)(Surface_82C012B8 *self, unsigned int bytes);
} SurfaceVtbl_82C012B8;
struct Surface_82C012B8 {
    SurfaceVtbl_82C012B8 *vt;
    char pad[0x78];
    unsigned int width;
    unsigned int height;
};

void fn_82C012B8(Surface_82C012B8 *self)
{
    self->vt->allocate(self, self->width * self->height * 12 / 8);
}
