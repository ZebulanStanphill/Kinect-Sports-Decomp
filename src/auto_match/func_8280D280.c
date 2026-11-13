typedef struct Row_8280D280 {
    float x;
    float y;
    float z;
    float w;
} Row_8280D280;

typedef struct Matrix_8280D280 {
    Row_8280D280 r[4];
} Matrix_8280D280;

typedef struct Vec3_8280D280 {
    float x;
    float y;
    float z;
} Vec3_8280D280;

static __forceinline void Row_Set(Row_8280D280 *r, float x, float y, float z)
{
    r->x = x;
    r->y = y;
    r->z = z;
}

void fn_8280D280(Matrix_8280D280 *self, const Vec3_8280D280 *v)
{
    Row_Set(&self->r[3], v->x, v->y, v->z);
}
