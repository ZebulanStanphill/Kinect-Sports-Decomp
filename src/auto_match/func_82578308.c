extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_825200A8();
extern int fn_82631488();
extern int fn_82631830();
extern int fn_8265CA60();


void fn_82578308(int param_1,__int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar3;
  int iVar4;
  unsigned __int64 uVar2;
  __int64 lVar5;
  
  uVar3 = fn_825200A8(param_2 + 0xc0,0xffffffff82196288);
  lVar5 = param_2 + 0xc4;
  *(unsigned int *)(param_1 + 8) = (unsigned int)LZCOUNT(uVar3) >> 5;
  iVar4 = fn_825200A8(lVar5);
  *(unsigned int *)(param_1 + 0xc) = (unsigned int)(iVar4 == 0);
  if (iVar4 == 0) {
    uVar2 = fn_8251F720(lVar5,0);
    uVar3 = fn_82631830();
    *(unsigned int *)(param_1 + 0xb8) = uVar3;
    fn_8251FA58(uVar2);
    *(unsigned int *)(param_1 + 0xc4) = *(unsigned int *)((int)param_2 + 0xdc);
  }
  if (*(int *)(param_1 + 8) != 0) {
    uVar2 = fn_8251F720(param_2 + 0xc0,0);
    uVar3 = fn_82631488();
    *(unsigned int *)(param_1 + 0xb4) = uVar3;
    fn_8251FA58(uVar2);
    uVar1 = *(unsigned int *)((int)param_2 + 200);
    iVar4 = 0;
    *(unsigned int *)(param_1 + 0xbc) = uVar1;
    if (uVar1 == 0) {
      *(unsigned int *)(param_1 + 0xc0) = 0;
    }
    else {
      lVar5 = ((unsigned __int64)uVar1 & 0x3fffffff) << 2;
      if (0x3fffffff < uVar1) {
        lVar5 = -1;
      }
      uVar3 = fn_8265CA60(lVar5);
      *(unsigned int *)(param_1 + 0xc0) = uVar3;
    }
    if (0 < *(int *)(param_1 + 0xbc)) {
      lVar5 = 0;
      do {
        uVar3 = fn_8251F720(param_2 + 0xcc + lVar5,0);
        iVar4 = iVar4 + 1;
        *(unsigned int *)(*(int *)(param_1 + 0xc0) + (int)lVar5) = uVar3;
        lVar5 = lVar5 + 4;
      } while (iVar4 < *(int *)(param_1 + 0xbc));
    }
  }
  return;
}

