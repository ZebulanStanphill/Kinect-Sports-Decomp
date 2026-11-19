/* Scales the first three columns of a matrix by 1 / ((scale - 1) * amount + 1)
   for each axis whose scale is neither 1 nor 0. */
void fn_827F7360(float scaleX, float scaleY, float scaleZ, float amount, float *matrix)
{
    float factor;

    if (scaleX != 1.0f && scaleX != 0.0f) {
        factor = 1.0f / ((scaleX - 1.0f) * amount + 1.0f);
        matrix[0] *= factor;
        matrix[4] *= factor;
        matrix[8] *= factor;
    }
    if (scaleY != 1.0f && scaleY != 0.0f) {
        factor = 1.0f / ((scaleY - 1.0f) * amount + 1.0f);
        matrix[1] *= factor;
        matrix[5] *= factor;
        matrix[9] *= factor;
    }
    if (scaleZ != 1.0f && scaleZ != 0.0f) {
        factor = 1.0f / ((scaleZ - 1.0f) * amount + 1.0f);
        matrix[2] *= factor;
        matrix[6] *= factor;
        matrix[10] *= factor;
    }
}
