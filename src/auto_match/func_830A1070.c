typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Q_830A1070 { __vector4 pos; __vector4 v; float f; int c; } Q_830A1070;
typedef struct Src_830A1070 { char pad0[0x30]; __vector4 pos; } Src_830A1070;
extern void fn_830A5FF8(Q_830A1070 *, int, int *);

void fn_830A1070(unsigned char *param_1, int param_2, const Src_830A1070 *src, const __vector4 *table, int *param_5)
{
  Q_830A1070 q;
  float f;
  if (param_1[2] != 0 && (f = *(float *)(param_1 + 4)) > 0.0f) {
    q.pos = src->pos;
    q.v = table[param_1[3]];
    q.c = *(int *)(param_2 + 0x4c);
    q.f = f;
    fn_830A5FF8(&q, param_2, param_5);
  } else {
    unsigned char *d = (unsigned char *)*param_5;
    d[3] = 3;
    d[4] = 1;
    *param_5 = (int)(d + 0x10);
  }
}
