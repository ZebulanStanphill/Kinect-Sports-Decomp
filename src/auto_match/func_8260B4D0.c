typedef struct Grid_8260B4D0 {
    char pad[0x2e];
    unsigned short column;
    unsigned short count;      /* read through fn_827FA1E8 */
    unsigned short row;
    char pad34[0x50];
    unsigned int *cells;
} Grid_8260B4D0;

typedef struct Obj_8260B4D0 {
    char pad[0xbc];
    unsigned int *values;
} Obj_8260B4D0;

extern void fn_827F40B8(Obj_8260B4D0 *self);
extern Grid_8260B4D0 *fn_827F3C20(Obj_8260B4D0 *self);
extern unsigned int fn_827FA1E8(Grid_8260B4D0 *grid);
extern void *memcpy(void *dst, const void *src, unsigned int n);

void fn_8260B4D0(Obj_8260B4D0 *self)
{
    fn_827F40B8(self);
    if (self->values != 0) {
        Grid_8260B4D0 *grid = fn_827F3C20(self);
        unsigned int offset = (fn_827F3C20(self)->row * 12 + fn_827F3C20(self)->column) * 4;
        char *dst = (char *)fn_827F3C20(self)->cells + offset;
        memcpy(dst, self->values, fn_827FA1E8(grid) * 4);
    }
}
