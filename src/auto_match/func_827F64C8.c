extern int fn_82800648(void *list, int kind, int key, int *out1, float **out2);

float fn_827F64C8(char *self, int key)
{
    int a = 0;
    float *v = 0;
    fn_82800648(self + 0x24, 3, key, &a, &v);
    if (v != 0) {
        return *v;
    }
    return 0.0f;
}
