typedef struct Q_830A07B0 { int a; int b; float f; int c; } Q_830A07B0;
extern void fn_830A5EA8(Q_830A07B0 *, int, int);

void fn_830A07B0(char *param_1, int param_2, int param_3, int *param_4)
{
  Q_830A07B0 q;
  if (param_1[2] != 0 && *(float *)(param_1 + 8) != 0.0f) {
    q.f = *(float *)(param_1 + 8);
    q.c = (unsigned char)param_1[4];
    q.b = *(int *)(param_2 + 0x4c);
    q.a = (unsigned char)param_1[3] * 0x10 + param_3;
    fn_830A5EA8(&q, param_2, (int)param_4);
    return;
  } else {
    char *d = (char *)*param_4;
    char v = param_1[4];
    d[3] = 3;
    d[4] = v;
    *param_4 = (int)(d + 0x10);
  }
}
