typedef struct Vector_82449898 {
    float x; /* 0x0 */
    float y; /* 0x4 */
    float z; /* 0x8 */
} Vector_82449898;

extern const float lbl_82193E50;

static __forceinline Vector_82449898 MakeVector(float x, float y, float z)
{
    Vector_82449898 value;
    value.x = x;
    value.y = y;
    value.z = z;
    return value;
}

Vector_82449898 fn_82449898(int self, float unused, unsigned char index)
{
    int *data = *(int **)(self + 0x40);
    Vector_82449898 result;
    if (data[(index + 12) * 12] != 0) {
        result = *(Vector_82449898 *)((char *)data + index * 48 + 0x260);
    } else {
        result = MakeVector(0.0f, lbl_82193E50, 0.0f);
    }
    return result;
}
