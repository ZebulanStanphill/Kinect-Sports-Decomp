extern const float lbl_821954B0[0xa28 / 4];

typedef struct Vec_823464D8 {
    float x, y, z;
} Vec_823464D8;

void fn_823464D8(Vec_823464D8 *out, char *self)
{
    Vec_823464D8 result;
    result.x = *(float *)(*(char **)(self + 0x10) + 8) * lbl_821954B0[15];
    result.y = 0.0f;
    result.z = 0.0f;
    *out = result;
}
