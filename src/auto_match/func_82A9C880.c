extern int fn_82A99B70();
extern int fn_82A99BC8();
extern int fn_82A99C28();
extern int fn_82A99D88();
extern int fn_82A9A810();
extern int fn_82A9A860();


void fn_82A9C880(int param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  __int64 lVar2;
  int *piVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int *piVar6;
  
  fn_82A99BC8(param_2);
  fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d2b28);
  fn_82A9A860(param_2);
  uVar1 = *param_3;
  if (uVar1 < param_3[1] * 0x14 + uVar1) {
    piVar6 = (int *)(uVar1 + 8);
    do {
      fn_82A99BC8(param_2);
      fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff8200ed6c);
      fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff82011264,
                    (int)((int)piVar6 + (-8 - *param_3)) / 0x14);
      lVar2 = -0x7de69a7e;
      if (piVar6[-2] != 0xffffffff) {
        lVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x2c) + (unsigned __int64)(unsigned int)piVar6[-2];
      }
      fn_82A99D88(param_2,0xffffffff820d2ac0,lVar2);
      fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff820d2b14,piVar6[-1]);
      fn_82A9A860(param_2);
      puVar5 = (unsigned int *)*piVar6;
      puVar4 = puVar5 + piVar6[1];
      for (; puVar5 < puVar4; puVar5 = puVar5 + 1) {
        fn_82A99BC8(param_2);
        fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d2b1c);
        fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff82011264,*puVar5);
        fn_82A9A810(param_2);
        puVar4 = (unsigned int *)(piVar6[1] * 4 + *piVar6);
      }
      fn_82A99C28(param_2,0xffffffff8200ed6c);
      piVar3 = piVar6 + 3;
      piVar6 = piVar6 + 5;
    } while (piVar3 < (int *)(param_3[1] * 0x14 + *param_3));
  }
  fn_82A99C28(param_2,0xffffffff820d2b28);
  return;
}

