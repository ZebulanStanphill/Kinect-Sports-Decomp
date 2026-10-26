extern void fn_82CE4040(void *obj);
extern void fn_82CE4118(void *obj);

void fn_830825B8(void **self, void *obj)
{
    if (obj != 0) {
        fn_82CE4040(obj);
    }
    if (*self != 0) {
        fn_82CE4118(*self);
    }
    *self = obj;
}
