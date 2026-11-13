#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82788EB0();
extern int fn_82789240();
extern int fn_827899E0();


void fn_82789EF0(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  int *piVar6;
  unsigned __int64 uVar5;
  
  uVar1 = *(unsigned int *)(param_1 + 0x10);
  piVar6 = (int *)(param_1 + 0x30);
  fn_82788EB0(piVar6,uVar1,0);
  *(unsigned int *)(param_1 + 0x34) = uVar1;
  uVar3 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar2 = 0;
    do {
      *(unsigned int *)(*piVar6 + iVar2) = uVar3;
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (uVar3 < *(unsigned int *)(param_1 + 0x10));
  }
  fn_82789240(piVar6,0,*(unsigned int *)(param_1 + 0x34),CONCAT44(param_1,(unsigned int *)(param_1 + 0x10)))
  ;
  uVar5 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    do {
      iVar2 = *(int *)(((unsigned int)((uVar5 & 0xffffffff) >> 6) & 0x3fffffc) + *(int *)(param_1 + 0x2c)) +
              ((unsigned int)uVar5 & 0xff) * 0x3c;
      uVar4 = (unsigned __int64)*(unsigned int *)(iVar2 + 0x18);
      uVar1 = fn_827899E0(param_1,uVar4);
      *(unsigned int *)(iVar2 + 0x1c) = uVar1;
      uVar1 = fn_827899E0(param_1,uVar4 + 1);
      *(unsigned int *)(iVar2 + 0x20) = uVar1;
      uVar1 = fn_827899E0(param_1,uVar4 + 2);
      uVar5 = uVar5 + 1;
      *(unsigned int *)(iVar2 + 0x24) = uVar1;
    } while ((uVar5 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x20));
  }
  return;
}

