typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82ACA5E0();
extern int fn_82AF6268();
extern int fn_82AFA378();
extern int fn_82B01CD0();
extern int fn_82B0A6B8();
extern int fn_82B0AD30();
extern int fn_82B0AE08();
extern int fn_82B83718();


unsigned __int64 fn_82B0AF40(int param_1,int param_2,unsigned int param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  bool bVar4;
  char cVar5;
  
  if (*(int *)(param_1 + 0x298) == 0) {
    uVar3 = *(unsigned int *)(param_3 + 8) >> 7 & 0x7f;
    if ((uVar3 == 0) || (bVar4 = true, 0x66 < uVar3)) {
      bVar4 = false;
    }
    if ((bVar4) && ((*(unsigned int *)(param_3 + 8) & 0x1c000) != 0x10000)) goto LAB_82b0afac;
  }
  fn_82B0A6B8(param_1,param_2,param_3);
LAB_82b0afac:
  iVar1 = *(int *)(param_3 + 4);
  while ((iVar1 != 0 &&
         ((*(int *)(iVar1 + 0x10) == 0 ||
          ((*(unsigned int *)(*(int *)(iVar1 + 0x10) + 8) & 0x3f80) != 0x3700))))) {
    iVar1 = *(int *)(iVar1 + 8);
  }
  cVar5 = fn_82AF6268(param_1,param_3);
  if ((cVar5 == '\0') && (iVar1 != 0)) {
    uVar2 = *(unsigned int *)(iVar1 + 0x10);
    fn_82AFA378(param_1,uVar2);
    cVar5 = fn_82ACA5E0(param_3);
    if (((cVar5 != '\0') && ((*(unsigned int *)(param_3 + 8) & 0x1c000) < 0x10000)) &&
       (cVar5 = fn_82B0AD30(param_1,param_3,uVar2), cVar5 != '\0')) {
      return 1;
    }
  }
  else if ((*(unsigned int *)(param_3 + 8) & 0x3f80) == 0x3700) {
    for (uVar3 = *(unsigned int *)(param_2 + 0x1c); ((uVar3 & 1) == 0 && (uVar3 != 0));
        uVar3 = *(unsigned int *)((uVar3 & 0xfffffffe) + 0x28)) {
      if ((param_3 != uVar3) &&
         (((*(unsigned int *)(uVar3 + 8) & 0x3f80) == 0x3700 &&
          (cVar5 = fn_82B01CD0(param_1,param_3,uVar3), cVar5 != '\0')))) {
        fn_82B83718(param_1,param_2);
        return 1;
      }
    }
    cVar5 = fn_82B0AE08(param_1,param_3);
    if (cVar5 != '\0') {
      return 1;
    }
  }
  return 0;
}

