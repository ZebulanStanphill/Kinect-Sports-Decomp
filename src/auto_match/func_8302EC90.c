typedef struct Obj_8302EC90 {
    char pad[0xa8];
    char sub[0x10];
    int height;
    unsigned int width;
} Obj_8302EC90;

extern int fn_8300CA50(void *sub);


int fn_8302EC90(Obj_8302EC90 *self, unsigned int width, int height)
{
    int r = 1;
    if (width != self->width || height != self->height) {
        self->width = width;
        self->height = height;
        r = fn_8300CA50(self->sub);
    }
    return r;
}
