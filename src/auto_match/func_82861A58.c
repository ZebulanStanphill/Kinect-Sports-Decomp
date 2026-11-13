typedef struct Camera_82861A58 {
    char pad0[0x18];
    unsigned char flags;    /* 0x18 */
    char pad19[0x114 - 0x19];
    float fov;              /* 0x114 */
    float aspect;           /* 0x118 */
    float depth;            /* 0x11c */
    float depthScale;       /* 0x120 */
} Camera_82861A58;

extern float lbl_8201F94C;
extern float fn_82809400(float x);

void fn_82861A58(Camera_82861A58 *self, const float *proj)
{
    float m22 = proj[10];
    float depth;

    self->flags &= ~3;
    self->fov = lbl_8201F94C * (fn_82809400(1.0f / proj[5]) * 2.0f);
    self->aspect = proj[5] / proj[0];
    depth = proj[14] / m22;
    self->depth = depth;
    self->depthScale = depth * m22 / (m22 + 1.0f);
}
