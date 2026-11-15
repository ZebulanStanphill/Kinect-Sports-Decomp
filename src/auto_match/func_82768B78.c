unsigned short fn_82768B78(char *self)
{
    float bounds[4];
    int index;
    int *object;
    bounds[0] = 0.0f;
    bounds[1] = 0.0f;
    bounds[2] = 0.0f;
    bounds[3] = 0.0f;
    object = *(int **)(self + 0xc);
    index = (*(int (**)(void *))(*object + 0xc))(object);
    if (index != -1) {
        object = *(int **)(self + 0xc);
        (*(void (**)(void *, int, float *))(*object + 0x30))(object, index, bounds);
        return (unsigned short)(-bounds[1]);
    }
    return 0;
}
