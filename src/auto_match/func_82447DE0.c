typedef struct Vector_82447DE0 {
    float x; /* 0x0 */
    float y; /* 0x4 */
    float z; /* 0x8 */
} Vector_82447DE0;

static __forceinline Vector_82447DE0 MakeVector(float x, float y, float z)
{
    Vector_82447DE0 value;
    value.x = x;
    value.y = y;
    value.z = z;
    return value;
}

Vector_82447DE0 fn_82447DE0(int self, float unused, unsigned char index)
{
    int *data = *(int **)(self + 0x40);
    Vector_82447DE0 result;
    if (data[(index + 12) * 12] != 0) {
        result = *(Vector_82447DE0 *)((char *)data + index * 48 + 0x260);
    } else {
        result = MakeVector(0.0f, *(float *)(*(int *)(*(int *)(*data + 0x174) + 4) + 0x10), 0.0f);
    }
    return result;
}
