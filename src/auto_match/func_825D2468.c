int fn_825D2468(char *self, void *unused, int index, float value)
{
    unsigned int key = *(unsigned int *)(*(char **)(*(char **)(self + 0x3c) + 0xb8) + 0x28);

    *(unsigned int *)(self + index * 8 + 0x74) = key;
    *(float *)(self + (index + 15) * 8) = value;
    return 0;
}
