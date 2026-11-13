extern int fn_82644040();
extern int fn_82645110();
extern int fn_82F68CC0();


void fn_82645CF8(int param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar2;
  __int64 lVar1;
  
  uVar2 = *(unsigned int *)(param_1 + 0x30);
  if (*(unsigned int *)(param_1 + 0x38) < uVar2) {
    uVar2 = fn_82645110();
  }
  lVar1 = fn_82644040(param_1,(param_4 & 0xffffffff) >> 2,4);
  if (lVar1 != 0) {
    fn_82F68CC0(lVar1,param_3,param_4);
  }
  *(unsigned int *)(uVar2 + 4) = 0x3857e;
  *(unsigned int *)(uVar2 + 8) = 0x1004c;
  *(unsigned int *)(uVar2 + 0xc) = param_2;
  *(int *)(uVar2 + 0x10) = (int)lVar1;
  *(unsigned int *)(uVar2 + 0x14) = (int)param_4;
  *(unsigned int **)(param_1 + 0x30) = (unsigned int *)(uVar2 + 0x14);
  return;
}

