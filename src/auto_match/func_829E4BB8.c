typedef struct Obj_829E4BB8 {
    void *vt;
    int x04;
    int x08;
    unsigned char x0c[0x2c];
    int x38;
} Obj_829E4BB8;

extern char lbl_82057B60[];
void *memset(void *dst, int c, unsigned int n);

Obj_829E4BB8 *fn_829E4BB8(Obj_829E4BB8 *self)
{
    self->x04 = 0;
    self->x08 = 0;
    self->vt = lbl_82057B60;
    self->x38 = 2;
    memset(self->x0c, 0, sizeof(self->x0c));
    return self;
}
