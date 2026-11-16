void fn_8280C658(float *out, float top, float bottom, float left, float right, float xScale, float yScale,
                 float xOffset, float yOffset)
{
    float inverseWidth = 1.0f / (right - left);
    float inverseHeight = 1.0f / (top - bottom);
    float horizontalSum = left + right;
    float verticalSum = top + bottom;
    out[4] = 0.0f;
    out[8] = 0.0f;
    out[1] = 0.0f;
    out[9] = 0.0f;
    out[2] = 0.0f;
    out[6] = 0.0f;
    out[10] = 0.0f;
    out[3] = 0.0f;
    out[7] = 0.0f;
    out[11] = 0.0f;
    out[14] = 1.0f;
    out[15] = 1.0f;
    horizontalSum = -(horizontalSum * inverseWidth);
    verticalSum = -(verticalSum * inverseHeight);
    out[0] = (inverseWidth * xScale) * 2.0f;
    out[5] = (inverseHeight * 2.0f) * yScale;
    out[12] = horizontalSum * xScale + xOffset;
    out[13] = verticalSum * yScale + yOffset;
}
