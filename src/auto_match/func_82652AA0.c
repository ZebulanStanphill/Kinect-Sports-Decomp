extern int fn_8264D6C0();
extern int fn_8265C940();
extern int fn_8265C990();


unsigned __int64 fn_82652AA0(int param_1)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int *puVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x555c) == 0) {
    iVar2 = fn_8265C940(0x7a0,0xffffffffa3800000);
    if (iVar2 != 0) {
      *(int *)(param_1 + 0x555c) = iVar2;
      goto LAB_82652adc;
    }
LAB_82652ad0:
    uVar1 = 0;
  }
  else {
LAB_82652adc:
    if (*(int *)(param_1 + 0x5560) == 0) {
      iVar2 = fn_8265C940(0x40,0x24800000);
      if (iVar2 == 0) goto LAB_82652ad0;
      *(int *)(param_1 + 0x5560) = iVar2;
    }
    iVar2 = 0;
    iVar5 = 0;
    do {
      puVar3 = (unsigned int *)(*(int *)(param_1 + 0x5560) + iVar5);
      iVar4 = iVar2 + *(int *)(param_1 + 0x555c);
      if (puVar3 == (unsigned int *)0x0) {
        puVar3 = (unsigned int *)fn_8265C940(0x10,0x24800000);
        if (puVar3 != (unsigned int *)0x0) goto LAB_82652b30;
      }
      else {
LAB_82652b30:
        if (iVar4 == 0) {
          iVar4 = fn_8265C940(0x1e0,0xffffffffa2800000);
          puVar3[1] = iVar4;
          if (iVar4 == 0) {
            fn_8265C990(puVar3,0x24800000);
            goto LAB_82652b60;
          }
        }
        else {
          puVar3[1] = iVar4;
        }
        fn_8264D6C0((unsigned __int64)(unsigned int)puVar3[1],(unsigned __int64)(unsigned int)puVar3[1] + 0x1e0,0);
        puVar3[2] = param_1;
        *puVar3 = 1;
        puVar3[3] = 0;
      }
LAB_82652b60:
      iVar5 = iVar5 + 0x10;
      iVar2 = iVar2 + 0x1e0;
    } while (iVar5 < 0x40);
    uVar1 = 1;
  }
  return uVar1;
}

