typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

/*
 * Projects a skeleton-space point onto the 320x240 depth image (focal length 285.63 pixels).
 * The constants are pooled under lbl_82057514, lbl_82015BD0 and lbl_82015BD8.
 */
void fn_82F55CC8(__vector4 point, float *depthX, float *depthY)
{
    float z;

    if (depthX == 0 || depthY == 0) {
        return;
    }
    z = point.vector4_f32[2];
    if (z > 1.1920929e-07f) {
        *depthX = (1.0f / z) * point.vector4_f32[0] * 285.63f + 160.0f;
        *depthY = 120.0f - (1.0f / z) * point.vector4_f32[1] * 285.63f;
    } else {
        *depthX = 0.0f;
        *depthY = 0.0f;
    }
}
