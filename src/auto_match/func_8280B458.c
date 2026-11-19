void fn_8280B458(float *matrix, char axis, float sine, float cosine)
{
    switch (axis | 0x20) {
    case 'x':
        matrix[9] = -sine;
        matrix[6] = sine;
        matrix[10] = cosine;
        matrix[0] = 1.0f;
        matrix[4] = 0.0f;
        matrix[1] = 0.0f;
        matrix[8] = 0.0f;
        matrix[2] = 0.0f;
        matrix[5] = cosine;
        matrix[12] = 0.0f;
        matrix[13] = 0.0f;
        matrix[14] = 0.0f;
        matrix[3] = 0.0f;
        matrix[7] = 0.0f;
        matrix[11] = 0.0f;
        matrix[15] = 1.0f;
        break;
    case 'y':
        matrix[2] = -sine;
        matrix[0] = cosine;
        matrix[8] = sine;
        matrix[10] = cosine;
        matrix[4] = 0.0f;
        matrix[1] = 0.0f;
        matrix[5] = 1.0f;
        matrix[9] = 0.0f;
        matrix[6] = 0.0f;
        matrix[12] = 0.0f;
        matrix[13] = 0.0f;
        matrix[14] = 0.0f;
        matrix[3] = 0.0f;
        matrix[7] = 0.0f;
        matrix[11] = 0.0f;
        matrix[15] = 1.0f;
        break;
    case 'z':
        matrix[4] = -sine;
        matrix[0] = cosine;
        matrix[1] = sine;
        matrix[9] = 0.0f;
        matrix[6] = 0.0f;
        matrix[10] = 1.0f;
        matrix[8] = 0.0f;
        matrix[2] = 0.0f;
        matrix[5] = cosine;
        matrix[12] = 0.0f;
        matrix[13] = 0.0f;
        matrix[14] = 0.0f;
        matrix[3] = 0.0f;
        matrix[7] = 0.0f;
        matrix[11] = 0.0f;
        matrix[15] = 1.0f;
        break;
    }
}
