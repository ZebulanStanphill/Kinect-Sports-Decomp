int fn_8223D930(int *self)
{
    int result;
    unsigned char *current;

    result = (*(int (**)(void))(*self + 0x18))();
    if (result != -1) {
        *(int *)self[0xc] = *(int *)self[0xc] + -1;
        current = *(unsigned char **)self[8];
        *(unsigned char **)self[8] = current + 1;
        result = *current;
    }
    return result;
}
