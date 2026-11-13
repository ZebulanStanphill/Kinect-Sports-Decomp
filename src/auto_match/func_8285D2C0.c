typedef struct Matrix_8285D2C0 {
    float m[4][4];
} Matrix_8285D2C0;

extern void fn_82863790(int *handle);
extern void fn_82862080(int handle, Matrix_8285D2C0 *out);
extern void fn_828105C8(float *out, float x, float y, float z);

void fn_8285D2C0(float *out)
{
    int handle = 0;
    Matrix_8285D2C0 m;
    fn_82863790(&handle);
    fn_82862080(handle, &m);
    fn_828105C8(out, m.m[3][0], m.m[3][1], m.m[3][2]);
}
