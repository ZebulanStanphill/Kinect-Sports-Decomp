typedef struct Obj_82668E00 {
    int pad[3];
    int fC;
} Obj_82668E00;

extern void fn_82669D08(void *first, void *last, int *dest);

void fn_82668E00(Obj_82668E00 *self, void *first, void *last)
{
    fn_82669D08(first, last, &self->fC);
}
