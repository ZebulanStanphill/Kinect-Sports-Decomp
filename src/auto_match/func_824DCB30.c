typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

/* Projects a skeleton-space point onto the 320x240 depth image and packs the depth in
   millimetres (shifted left by three) for the depth value. */
void fn_824DCB30(__vector4 point, int *depthX, int *depthY, unsigned short *depthValue)
{
    float z;

    if (depthX == 0 || depthY == 0 || depthValue == 0) {
        return;
    }
    z = point.vector4_f32[2];
    if (z > 1.1920929e-07f) {
        unsigned short value = (unsigned short)(((unsigned short)(z * 1000.0f) & 0x1fff) << 3);

        *depthX = (int)(point.vector4_f32[0] / z * 285.63f + 160.0f);
        *depthY = (int)(120.0f - point.vector4_f32[1] / z * 285.63f);
        *depthValue = value;
    } else {
        *depthX = 0;
        *depthY = 0;
        *depthValue = 0;
    }
}
