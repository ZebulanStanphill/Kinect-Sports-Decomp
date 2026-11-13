typedef struct Vec4_82D3E730 { float x, y, z, w; } Vec4_82D3E730;
typedef struct Mat_82D3E730 { float m[4][4]; } Mat_82D3E730;
typedef struct Obj_82D3E730 { char pad[0x40]; Mat_82D3E730 *mat; } Obj_82D3E730;
void fn_82D3E730(Obj_82D3E730 *o, Vec4_82D3E730 *out)
{
    Mat_82D3E730 *m = o->mat;
    out->x = m->m[0][0];
    out->y = m->m[1][0];
    out->z = m->m[2][0];
    out->w = 0.0f;
}
