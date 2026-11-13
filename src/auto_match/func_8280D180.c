typedef struct Row_8280D180 {
    float x;
    float y;
    float z;
    float w;
} Row_8280D180;

typedef struct Matrix_8280D180 {
    Row_8280D180 r[4];
} Matrix_8280D180;

typedef struct Vec3_8280D180 {
    float x;
    float y;
    float z;
} Vec3_8280D180;

static __forceinline void Row_Set(Row_8280D180 *r, float x, float y, float z)
{
    r->x = x;
    r->y = y;
    r->z = z;
}

void fn_8280D180(Matrix_8280D180 *self, const Vec3_8280D180 *v)
{
    Row_Set(&self->r[2], v->x, v->y, v->z);
}
