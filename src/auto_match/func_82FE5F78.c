typedef struct Vec3_82FE5F78 {
    int pad0;
    float x;    /* 0x4 */
    float y;    /* 0x8 */
    float z;    /* 0xc */
} Vec3_82FE5F78;

int fn_82FE5F78(Vec3_82FE5F78 *self, short axis, const float *value)
{
    if (value == 0)
        return 0x1f;
    switch (axis) {
    case 0: self->x = *value; break;
    case 1: self->y = *value; break;
    case 2: self->z = *value; break;
    default: return 0x1f;
    }
    return 1;
}
