extern void fn_8308AF58(int, unsigned int);
void fn_8308B3D8(int p, unsigned int *index)
{
    fn_8308AF58(p, *index * 16 + *(unsigned int *)(p + 0xa0));
}
