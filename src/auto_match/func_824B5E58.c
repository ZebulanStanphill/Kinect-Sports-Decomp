typedef struct Range_824B5E58 {
    float lo;
    float hi;
    int key;
} Range_824B5E58;

typedef struct Vec_824B5E58 {
    float x, y, z, w;
} Vec_824B5E58;

typedef struct Obj_824B5E58 {
    char pad[0x3c];
    int alt;
} Obj_824B5E58;

extern Range_824B5E58 lbl_831C3F8C;
extern const float lbl_821CA45C[2];
extern Vec_824B5E58 *fn_824B44C8(Vec_824B5E58 *out, void *src, int key, int kind);
extern float fn_82539560(float v, float inLo, float inHi, float outLo, float outHi);

float fn_824B5E58(Obj_824B5E58 *self, void *src)
{
    Vec_824B5E58 v;

    fn_824B44C8(&v, src, lbl_831C3F8C.key, self->alt ? 6 : 10);
    return fn_82539560(v.y, lbl_831C3F8C.lo, lbl_831C3F8C.hi, 0.0f, lbl_821CA45C[1]);
}
