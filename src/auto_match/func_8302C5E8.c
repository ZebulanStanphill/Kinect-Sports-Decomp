extern int fn_830052F8(void *self, int arg, unsigned int paramId, int unused, float value, int a, int b);

int fn_8302C5E8(void *self, int arg, unsigned int paramId, int unused, float value, int a, int b)
{
    if (paramId == 4) {
        return 1;
    }
    return fn_830052F8(self, arg, paramId, unused, value, a, b);
}
