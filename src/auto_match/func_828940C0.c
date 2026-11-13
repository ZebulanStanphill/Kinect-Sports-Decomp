typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8240D928();
extern int fn_8265C9E0();
extern int fn_82886518();
extern int fn_8288DF40();
extern int fn_82893F40();
extern int fn_82897BD0();
extern int fn_8289F2E0();
extern int fn_828BE158();
extern int fn_828CBDC8();
extern unsigned int uStack_2c;


void fn_828940C0(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  int *piVar4;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  char cVar7;
  unsigned int uVar8;
  bool bVar9;
  char acStack_30;
  unsigned int uStack_2c;
  
  piVar4 = (int *)fn_8289F2E0(param_1[4]);
  uVar2 = (**(int (***)())(*piVar4 + 0xc))();
  iVar1 = param_1[0xd];
  if (*(int **)(iVar1 + 0x38) == piVar4) {
    uVar6 = (param_3 & 0xff) - (unsigned __int64)*(unsigned char *)(param_1 + 0x17);
    if (0xff < (uVar6 & 0xffffffff)) {
      uVar6 = uVar6 + 0x100;
    }
    if ((uVar6 == 0) || (bVar9 = true, 0x7f < (uVar6 & 0xffffffff))) {
      bVar9 = false;
    }
    if (!bVar9) {
      return;
    }
  }
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x38) == 0)) {
    cVar7 = '\0';
  }
  else {
    cVar7 = *(char *)(*(int *)(iVar1 + 0x38) + 0x26);
  }
  if (cVar7 == '\0') {
    uVar8 = 3;
    bVar9 = false;
  }
  else {
    uVar3 = fn_8240D928(piVar4);
    puVar5 = (unsigned int *)fn_8288DF40(&acStack_30,param_1 + 0xf,uVar3);
    bVar9 = (1 << (puVar5[1] & 0x3f) & *(unsigned int *)*puVar5) != 0;
    if (bVar9) {
      (**(int (***)())(*param_1 + 0x20))(&acStack_30,param_1);
      bVar9 = acStack_30 != '\0';
      uVar8 = 0;
      if (!bVar9) {
        uVar8 = uStack_2c;
      }
    }
    else {
      uVar8 = 4;
    }
  }
  if (bVar9) {
    fn_82893F40(param_1,uVar2,0);
  }
  else {
    uVar6 = fn_8265C9E0(0xa8);
    if ((uVar6 & 0xffffffff) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_828CBDC8(uVar6,param_1,0,0,uVar8);
    }
    fn_82886518(uVar2,0xffffffffffffffff,0xffffffffffffffff);
    iVar1 = param_1[4];
    uVar3 = fn_82897BD0(piVar4);
    fn_828BE158(iVar1,uVar2,uVar3,0);
  }
  return;
}

