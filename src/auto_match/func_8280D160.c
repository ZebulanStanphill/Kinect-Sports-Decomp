typedef struct Row_8280D160 {
    float x;
    float y;
    float z;
    float w;
} Row_8280D160;

typedef struct Matrix_8280D160 {
    Row_8280D160 r[4];
} Matrix_8280D160;

typedef struct Vec3_8280D160 {
    float x;
    float y;
    float z;
} Vec3_8280D160;

static __forceinline void Row_Set(Row_8280D160 *r, float x, float y, float z)
{
    r->x = x;
    r->y = y;
    r->z = z;
}

void fn_8280D160(Matrix_8280D160 *self, const Vec3_8280D160 *v)
{
    Row_Set(&self->r[1], v->x, v->y, v->z);
}
