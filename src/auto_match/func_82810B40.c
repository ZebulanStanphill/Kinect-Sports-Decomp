typedef struct V { float x, y, z; } V;
extern float fn_82809558(float x);  /* sqrtf */

float fn_82810B40(V *a, V *b)
{
    V d;
    d.x = a->x - b->x;
    d.y = a->y - b->y;
    d.z = a->z - b->z;
    return fn_82809558(d.x * d.x + d.y * d.y + d.z * d.z);
}
