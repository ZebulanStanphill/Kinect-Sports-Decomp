void fn_8280B900(float *out, float top, float bottom, float left, float right, float nearPlane,
                 float farPlane)
{
    float inverseWidth = 1.0f / (right - left);
    float inverseHeight = 1.0f / (top - bottom);
    float inverseDepth = 1.0f / (farPlane - nearPlane);
    float horizontalSum = left + right;
    float verticalSum = top + bottom;
    out[4] = 0.0f;
    out[8] = 0.0f;
    out[1] = 0.0f;
    out[9] = 0.0f;
    out[2] = 0.0f;
    out[6] = 0.0f;
    out[3] = 0.0f;
    out[7] = 0.0f;
    out[11] = 0.0f;
    out[15] = 1.0f;
    out[0] = inverseWidth * 2.0f;
    out[5] = inverseHeight * 2.0f;
    out[10] = -inverseDepth;
    out[12] = -(horizontalSum * inverseWidth);
    out[13] = -(verticalSum * inverseHeight);
    out[14] = -(inverseDepth * nearPlane);
}
