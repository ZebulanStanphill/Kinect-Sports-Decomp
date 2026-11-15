void fn_82D97C48(char *self, char *owner, char enabled)
{
    char *object;
    int values;
    float *out;
    self[0xa2] = enabled;
    self[0xf2] = enabled == 0;
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
    out[6] = 0.0f;
    out[7] = 0.0f;
    out[8] = 0.0f;
    out[9] = 0.0f;
    out[10] = 0.0f;
    out[11] = 0.0f;
    out[0] = 0.0f;
    out[1] = 0.0f;
    out[2] = 0.0f;
    out[3] = 0.0f;
    out[4] = 0.0f;
    out[5] = 0.0f;
}
