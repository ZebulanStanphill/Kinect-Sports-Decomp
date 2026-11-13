extern void fn_830221F8(void *list, float f);
extern void fn_83022188(void *list, void **item);
typedef struct Obj_83022338 { char pad[0xc]; char list[4]; } Obj_83022338;
int fn_83022338(Obj_83022338 *self, void **item, float f)
{
    int r = 1;
    if (*item != 0) {
        fn_830221F8(self->list, f);
        fn_83022188(self->list, item);
    } else {
        r = 2;
    }
    return r;
}
