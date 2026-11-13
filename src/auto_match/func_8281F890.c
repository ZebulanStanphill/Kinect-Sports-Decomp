#define TBLr 0
extern int fn_8281F588();
extern int fn_82F6B030();
extern unsigned int lbl_821AAD20;


void fn_8281F890(int param_1,char param_2)

{
  int iVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  lVar2 = TBLr;
  lVar2 = (unsigned __int64)(lVar2 * 0x4e2) / 0xf38b - *(__int64 *)(param_1 + 0x30);
  if ((param_2 != '\0') || (-1 < *(int *)(param_1 + 0x98))) {
    lVar2 = 0x8235;
  }
  dVar5 = (double)lbl_821AAD20;
  if ((*(char *)(param_1 + 0x9c) == '\0') &&
     (dVar6 = (double)*(float *)(param_1 + 0x88), dVar6 != dVar5)) {
    dVar4 = (double)fn_82F6B030(lVar2);
    uVar3 = (unsigned __int64)(dVar6 * dVar4);
  }
  else {
    uVar3 = 0;
  }
  if ((*(char *)(param_1 + 0x9d) != '\0') && (*(unsigned __int64 *)(param_1 + 0x90) < uVar3)) {
    uVar3 = *(unsigned __int64 *)(param_1 + 0x90);
  }
  fn_8281F588(param_1,param_1 + 8,lVar2);
  fn_8281F588(param_1,param_1 + 0x40,uVar3);
  if (param_2 == '\0') {
    iVar1 = *(int *)(param_1 + 0x78) + 1;
  }
  else {
    *(float *)(param_1 + 0x60) = (float)dVar5;
    iVar1 = 0;
    *(float *)(param_1 + 0x28) = (float)dVar5;
  }
  *(int *)(param_1 + 0x78) = iVar1;
  if (-1 < *(int *)(param_1 + 0x98)) {
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + -1;
  }
  return;
}

