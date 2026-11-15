void fn_82D97250(char *self, char *owner, char enabled)
{
    char *object;
    int values;
    float *out;
    self[0xa2] = enabled;
    self[0xb2] = enabled == 0;
    if (owner == 0) {
        return;
    }
    object = *(char **)(owner + 0x30);
    if (object == 0) {
        return;
    }
    values = *(int *)(object + 0x1c);
    if (values == 0) {
        return;
    }
    out = (float *)values;
    out[0] = 0.0f;
    out[1] = 0.0f;
    out[2] = 0.0f;
    out[3] = 0.0f;
}
