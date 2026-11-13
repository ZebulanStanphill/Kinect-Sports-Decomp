typedef struct In_82861820 { float fov, aspect, znear, zfar; } In_82861820;
typedef struct Out_82861820 { float right, left, bottom, top, znear, zfar; } Out_82861820;

extern float fn_828094D0(float x);

void fn_82861820(const In_82861820 *in, Out_82861820 *out)
{
    float rad = in->fov * 0.017453292f;
    float t = fn_828094D0(rad * 0.5f);
    float w;
    out->right = t * in->znear;
    out->left = -out->right;
    w = in->aspect * out->right;
    out->top = w;
    out->bottom = -w;
    out->znear = in->znear;
    out->zfar = in->zfar;
}
