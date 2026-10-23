extern unsigned int fn_82FA61A0(void *p, unsigned int n);
extern void fn_82FA6260(void *p, unsigned int a, unsigned int n);

void fn_82FA64D8(void *param_1, unsigned int param_2)
{
  unsigned int uVar1;
  unsigned int uVar2;

  uVar2 = 0;
  if (param_2 != 0 && param_2 < 0x40000000) {
    uVar2 = (param_2 + 3) & 0xfffffffc;
    if (uVar2 <= 0xc) {
      uVar2 = 0xc;
    }
  }
  uVar1 = fn_82FA61A0(param_1, uVar2);
  fn_82FA6260(param_1, uVar1, uVar2);
}
