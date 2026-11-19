typedef struct Matrix_8281EC50 {
    unsigned int m[16]; /* float bits, row-major 4x4 */
} Matrix_8281EC50;

static __forceinline int IsFinite(unsigned int bits)
{
    return (bits & 0x7f800000) != 0x7f800000;
}

/* Returns 1 when no element is an infinity or a NaN. */
int fn_8281EC50(Matrix_8281EC50 *matrix)
{
    return IsFinite(matrix->m[0]) & IsFinite(matrix->m[1]) & IsFinite(matrix->m[2]) & IsFinite(matrix->m[3]) &
           IsFinite(matrix->m[4]) & IsFinite(matrix->m[5]) & IsFinite(matrix->m[6]) & IsFinite(matrix->m[7]) &
           IsFinite(matrix->m[8]) & IsFinite(matrix->m[9]) & IsFinite(matrix->m[10]) &
           IsFinite(matrix->m[11]) & IsFinite(matrix->m[12]) & IsFinite(matrix->m[13]) &
           IsFinite(matrix->m[14]) & IsFinite(matrix->m[15]) & 1;
}
