/* Builds a right-handed perspective projection matrix from a vertical field of
   view in degrees; the elements are written column by column. */
extern float fn_828094D0(float x); /* tanf */

void fn_8280B828(float *m, float fovY, float aspect, float zNear, float zFar)
{
    float yScale = 1.0f / fn_828094D0(0.017453292f * (fovY * 0.5f));

    m[0] = yScale / aspect;
    m[4] = 0.0f;
    m[8] = 0.0f;
    m[12] = 0.0f;
    m[1] = 0.0f;
    m[5] = yScale;
    m[9] = 0.0f;
    m[13] = 0.0f;
    m[2] = 0.0f;
    m[6] = 0.0f;
    m[10] = zFar / (zNear - zFar);
    m[14] = zNear * zFar / (zNear - zFar);
    m[3] = 0.0f;
    m[7] = 0.0f;
    m[11] = -1.0f;
    m[15] = 0.0f;
}
