extern int fn_82653BE8();


void fn_82653ED0(unsigned __int64 param_1,unsigned int param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  
  if ((((param_2 & 1) == 0) || ((param_2 & 2) != 0)) || ((param_2 & 0xfffffffc) == 0)) {
    uVar2 = 0xffffffff821cc990;
  }
  else {
    param_2 = *(unsigned int *)(param_2 - 1);
    if (param_2 == 0) {
      fn_82653BE8(param_1,0xffffffff821cc888);
      goto LAB_82653f44;
    }
    uVar2 = 0xffffffff821cc900;
  }
  fn_82653BE8(param_1,uVar2,param_2);
LAB_82653f44:
  if ((param_3 == 0) && (param_2 != 0)) {
    if (*(int *)(param_2 + 0x98) == 0) {
      fn_82653BE8(param_1,0xffffffff821cca20,*(unsigned int *)(param_2 + 0xac),
                    *(unsigned int *)(param_2 + 0xa4));
    }
    fn_82653BE8(param_1,0xffffffff821ccaa0);
    for (puVar1 = *(unsigned int **)(param_2 + 0x74); puVar1 != (unsigned int *)0x0; puVar1 = (unsigned int *)*puVar1) {
      uVar3 = 0;
      puVar4 = puVar1;
      if (puVar1[1] != 0) {
        do {
          fn_82653BE8(param_1,0xffffffff821ccb24,puVar4[3],puVar4[2] & 0xffffff);
          uVar3 = uVar3 + 1;
          puVar4 = puVar4 + 2;
        } while (uVar3 < puVar1[1]);
      }
    }
    if (*(int *)(param_2 + 0x98) == 0) {
      fn_82653BE8(param_1,0xffffffff821ccb38);
      fn_82653BE8(param_1,0xffffffff821ccbc8);
    }
  }
  return;
}

