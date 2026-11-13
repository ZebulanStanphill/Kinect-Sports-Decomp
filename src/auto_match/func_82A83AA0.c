typedef struct Mat_82A83AA0 {
    __declspec(align(16)) float m[16];
} Mat_82A83AA0;

extern long fn_82A82980(void *a, void *b, Mat_82A83AA0 *m0, Mat_82A83AA0 *m1, Mat_82A83AA0 *m2);

long fn_82A83AA0(void *a, void *b, Mat_82A83AA0 m0, Mat_82A83AA0 m1, Mat_82A83AA0 m2)
{
    if (b == 0 || a == 0) {
        return 0x80070057;
    }
    return fn_82A82980(a, b, &m0, &m1, &m2);
}
