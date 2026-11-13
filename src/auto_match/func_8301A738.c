extern unsigned int *auStack_20;
extern int fn_82FFDF28();


unsigned __int64 fn_8301A738(__int64 param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned char auStack_20 [32];
  
  iVar1 = fn_82FFDF28(auStack_20,param_1 + 0x24,param_2);
  if (*(int *)(iVar1 + 8) != 0) {
    uVar2 = (unsigned __int64)*(unsigned int *)(*(int *)(*(int *)(iVar1 + 8) + 8) + 0x5c);
    return ((~uVar2 & 0xffffffff) >> 0x1f) + (unsigned __int64)(uVar2 < 2) & 1;
  }
  return 0;
}

