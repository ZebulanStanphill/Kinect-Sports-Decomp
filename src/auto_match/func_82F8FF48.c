extern void *fn_82F90110(void **it);
extern void fn_82F90140(void *first, void *last, void *dest);

void fn_82F8FF48(void *first, void *last, void *dest)
{
    fn_82F90140(fn_82F90110(&first), fn_82F90110(&last), dest);
}
