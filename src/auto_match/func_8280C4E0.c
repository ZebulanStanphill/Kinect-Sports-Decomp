void fn_8280C4E0(float *out, float top, float bottom, float left, float right, float nearPlane, float xScale,
                 float yScale, float xOffset, float yOffset)
{
    float inverseWidth = 1.0f / (right - left);
    float inverseHeight = 1.0f / (top - bottom);
    float horizontalSum = left + right;
    float verticalSum = top + bottom;
    float twiceNear = nearPlane * 2.0f;
    out[4] = 0.0f;
    out[12] = 0.0f;
    out[1] = 0.0f;
    out[13] = 0.0f;
    out[2] = 0.0f;
    out[6] = 0.0f;
    out[14] = 0.0f;
    out[3] = 0.0f;
    out[7] = 0.0f;
    out[11] = 0.0f;
    out[15] = 1.0f;
    out[10] = -1.0f;
    out[0] = (twiceNear * inverseWidth) * xScale;
    out[8] = (horizontalSum * inverseWidth) * xScale - xOffset;
    out[5] = (twiceNear * inverseHeight) * yScale;
    out[9] = (verticalSum * inverseHeight) * yScale - yOffset;
}
