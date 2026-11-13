extern int fn_82E50BE8();
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82E55008();
extern int fn_82EE2EE8();
extern int fn_82F691F0();
extern unsigned int stack0x00000000;


unsigned __int64 fn_82E55070(int param_1,unsigned int *param_2)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  
  uVar5 = 0;
  fn_82E50CB8(param_1 + 8);
  if (*(unsigned int *)(param_1 + 0x58) < 0x7f) {
    puVar2 = (unsigned int *)fn_82E50BE8(0xc,0,0,0,0);
    uVar4 = 0xffffffff8007000e;
    if (puVar2 == (unsigned int *)0x0) {
      puVar2 = (unsigned int *)0x0;
      uVar6 = 0;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      uVar1 = fn_82E50BE8(0x14,0,0,0,0);
      *puVar2 = (int)uVar1;
      uVar6 = uVar4;
      if ((uVar1 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(uVar1,0,0x14);
      }
    }
    if (puVar2 != (unsigned int *)0x0) {
      uVar7 = uVar6;
      if (-1 < (int)uVar6) {
        if (&stack0x00000000 != (unsigned char *)0x50) {
          uVar5 = *(unsigned int *)(param_1 + 0x58);
        }
        iVar3 = fn_82EE2EE8(param_1 + 0x54,*(unsigned int *)(param_1 + 0x58),puVar2);
        uVar7 = uVar4;
        if (iVar3 != 0) {
          uVar4 = uVar6;
          if (param_2 != (unsigned int *)0x0) {
            *param_2 = uVar5;
          }
          goto LAB_82e5517c;
        }
      }
      fn_82E55008(puVar2,1);
      uVar4 = uVar7;
    }
  }
  else {
    uVar4 = 0xffffffffc00d36b2;
  }
LAB_82e5517c:
  fn_82E50F10(param_1 + 8);
  return uVar4;
}

