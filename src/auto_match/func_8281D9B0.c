void fn_8281D9B0(float *matrix, char axis, float sine, float cosine)
{
    switch (axis | 0x20) {
    case 'x':
        matrix[0] = 1.0f;
        matrix[6] = 0.0f;
        matrix[2] = 0.0f;
        matrix[3] = 0.0f;
        matrix[4] = cosine;
        matrix[5] = sine;
        matrix[1] = 0.0f;
        matrix[7] = -sine;
        matrix[8] = cosine;
        break;
    case 'y':
        matrix[3] = 0.0f;
        matrix[0] = cosine;
        matrix[1] = 0.0f;
        matrix[2] = -sine;
        matrix[4] = 1.0f;
        matrix[6] = sine;
        matrix[7] = 0.0f;
        matrix[8] = cosine;
        matrix[5] = 0.0f;
        break;
    case 'z':
        matrix[0] = cosine;
        matrix[1] = sine;
        matrix[2] = 0.0f;
        matrix[7] = 0.0f;
        matrix[4] = cosine;
        matrix[5] = 0.0f;
        matrix[6] = 0.0f;
        matrix[3] = -sine;
        matrix[8] = 1.0f;
        break;
    }
}
