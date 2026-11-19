typedef struct Matrix_8281EB20 {
    unsigned int m[12]; /* float bits, a 4x3 matrix */
} Matrix_8281EB20;

static __forceinline int IsFinite(unsigned int bits)
{
    return (bits & 0x7f800000) != 0x7f800000;
}

/* Returns 1 when no element is an infinity or a NaN. */
int fn_8281EB20(Matrix_8281EB20 *matrix)
{
    return IsFinite(matrix->m[0]) & IsFinite(matrix->m[1]) & IsFinite(matrix->m[2]) & IsFinite(matrix->m[3]) &
           IsFinite(matrix->m[4]) & IsFinite(matrix->m[5]) & IsFinite(matrix->m[6]) & IsFinite(matrix->m[7]) &
           IsFinite(matrix->m[8]) & IsFinite(matrix->m[9]) & IsFinite(matrix->m[10]) &
           IsFinite(matrix->m[11]) & 1;
}
