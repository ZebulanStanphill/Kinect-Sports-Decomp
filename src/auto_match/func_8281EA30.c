typedef struct Matrix3_8281EA30 {
    unsigned int m[9]; /* float bits, row-major 3x3 */
} Matrix3_8281EA30;

static __forceinline int IsFinite(unsigned int bits)
{
    return (bits & 0x7f800000) != 0x7f800000;
}

/* Returns 1 when no element is an infinity or a NaN. */
int fn_8281EA30(Matrix3_8281EA30 *matrix)
{
    return IsFinite(matrix->m[0]) & IsFinite(matrix->m[1]) & IsFinite(matrix->m[2]) & IsFinite(matrix->m[3]) &
           IsFinite(matrix->m[4]) & IsFinite(matrix->m[5]) & IsFinite(matrix->m[6]) & IsFinite(matrix->m[7]) &
           IsFinite(matrix->m[8]) & 1;
}
