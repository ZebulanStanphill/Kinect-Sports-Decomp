typedef struct Q_826A16E8 { unsigned a, b, c, d; } Q_826A16E8;
extern unsigned fn_8269A9E8(unsigned);
extern void fn_826A15C8(int, Q_826A16E8 *, int);

void fn_826A16E8(int param_1, Q_826A16E8 *param_2, int param_3)
{
  unsigned uVar1;
  unsigned uVar2;
  unsigned uVar3;
  Q_826A16E8 t;

  uVar1 = (unsigned char)fn_8269A9E8(param_2->a);
  if (uVar1 == 1) {
    fn_826A15C8(param_1, param_2, param_3);
  } else {
    uVar2 = 0;
    uVar3 = 1;
    if (uVar1 != 0) {
      do {
        if ((param_2->a & uVar3) != 0) {
          t = *param_2;
          uVar2++;
          t.a = uVar3;
          fn_826A15C8(param_1, &t, param_3);
        }
        uVar3 = uVar3 << 1;
      } while (uVar2 < uVar1);
    }
  }
}
