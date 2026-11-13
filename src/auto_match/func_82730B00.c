extern void fn_82730710(void *, void *, unsigned);
void fn_82730B00(int *param_1, unsigned param_2)
{
  unsigned uVar1;
  unsigned uVar2;
  unsigned cnt;
  int *puVar3;
  int *puVar4;

  uVar1 = param_1[1];
  fn_82730710(param_1, param_1, param_2);
  if (param_2 > uVar1) {
    puVar4 = (int *)(uVar1 * 0x14 + *param_1);
    uVar2 = 0;
    cnt = param_2 - uVar1;
    if (cnt != 0) {
      puVar3 = puVar4 + 4;
      do {
        if (puVar4 != 0) {
          *puVar4 = 0;
          puVar3[-3] = 0;
          puVar3[-2] = 0;
          puVar3[-1] = 0;
          *puVar3 = 0;
        }
        uVar2 = uVar2 + 1;
        puVar4 = puVar4 + 5;
        puVar3 = puVar3 + 5;
      } while (uVar2 < cnt);
    }
  }
}
