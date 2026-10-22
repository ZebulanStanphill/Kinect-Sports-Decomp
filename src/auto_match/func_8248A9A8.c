typedef unsigned int uint;
extern void fn_8225F160(void);
extern int fn_8225F3C0(void);
extern float lbl_821CC160;

typedef struct {
  char pad[0x20];
  int v;
} T;
extern T *fn_8249ABC0(void);
extern int fn_8249B598(T *, int);

float fn_8248A9A8(float *param_1)
{
  float f = lbl_821CC160;
  int i;

  fn_8225F160();
  if (fn_8225F3C0() == 1) {
    T *t = fn_8249ABC0();
    f = param_1[fn_8249B598(t, t->v) + 0xdc];
  } else {
    for (i = 0; i < 2; i++)
      f += param_1[0xdc + i];
  }
  return f;
}
