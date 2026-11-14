typedef struct Inner_8232E230 {
    char pad[0x118];
    char *data;
} Inner_8232E230;

typedef struct Obj_8232E230 {
    char pad[0x54];
    Inner_8232E230 *inner;
} Obj_8232E230;

extern void fn_825114C8(void *p, int n);

void fn_8232E230(Obj_8232E230 *self)
{
    fn_825114C8(self->inner->data + 0x14, 0x14);
}
