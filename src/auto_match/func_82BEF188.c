extern int fn_82BE1A10();
extern int fn_82BE1FA8();
extern int fn_82BEA420();
extern int fn_82BF1430();


unsigned __int64 fn_82BEF188(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar3;
  unsigned int uVar2;
  int iVar4;
  
  if (((*(unsigned int *)(param_1 + 0x3c) == 0) && (*(unsigned int *)(param_1 + 0x18) != 0)) &&
     (uVar1 = fn_82BEA420(*(unsigned int *)(param_1 + 0x18),0), (uVar1 & 0xffffffff) != 0)) {
    uVar3 = fn_82BF1430(uVar1,*(unsigned int *)(param_1 + 0x44));
    *(unsigned int *)(param_1 + 0x3c) = uVar3;
  }
  uVar2 = fn_82BE1A10();
  iVar4 = fn_82BE1FA8(uVar2,2);
  if (((iVar4 != 0) || (*(unsigned int *)(param_1 + 0x28) != 0)) &&
     ((*(unsigned int *)(param_1 + 0x2c) == 0 && (*(unsigned int *)(param_1 + 0x30) == 0)))) {
    *(unsigned int *)(param_1 + 0x10) = 0x10;
  }
  return 0;
}

