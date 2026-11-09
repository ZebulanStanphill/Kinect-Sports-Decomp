typedef struct Obj_82668DC0 {
    int pad[3];
    int fC;
} Obj_82668DC0;

extern void fn_82669CB8(void *first, void *last, int *dest);

void fn_82668DC0(Obj_82668DC0 *self, void *first, void *last)
{
    fn_82669CB8(first, last, &self->fC);
}
