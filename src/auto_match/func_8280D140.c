typedef struct Row_8280D140 {
    float x;
    float y;
    float z;
    float w;
} Row_8280D140;

typedef struct Matrix_8280D140 {
    Row_8280D140 r[4];
} Matrix_8280D140;

typedef struct Vec3_8280D140 {
    float x;
    float y;
    float z;
} Vec3_8280D140;

static __forceinline void Row_Set(Row_8280D140 *r, float x, float y, float z)
{
    r->x = x;
    r->y = y;
    r->z = z;
}

void fn_8280D140(Matrix_8280D140 *self, const Vec3_8280D140 *v)
{
    Row_Set(&self->r[0], v->x, v->y, v->z);
}
