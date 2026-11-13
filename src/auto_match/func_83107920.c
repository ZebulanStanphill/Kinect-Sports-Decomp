typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Rows_83107920 {
    __vector4 row[4];
} Rows_83107920;

extern Rows_83107920 lbl_8329EAD0;

void fn_83107920(void)
{
    __vector4 r0 = { 1.0f, 0.0f, 0.0f, 0.0f };
    __vector4 r1 = { 0.0f, 1.0f, 0.0f, 0.0f };
    __vector4 r2 = { 0.0f, 0.0f, 1.0f, 0.0f };
    __vector4 r3 = { 0.0f, 0.0f, 0.0f, 1.0f };
    lbl_8329EAD0.row[0] = r0;
    lbl_8329EAD0.row[1] = r1;
    lbl_8329EAD0.row[2] = r2;
    lbl_8329EAD0.row[3] = r3;
}
