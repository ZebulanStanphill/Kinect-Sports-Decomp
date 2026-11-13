extern int fn_82FA5D50();
extern int fn_82FA62E0();


int fn_82FA6430(unsigned __int64 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  
  uVar3 = (param_2 - 0xc6cU) - (param_2 - 0xc6cU & 3);
  if ((0xb < uVar3) && (uVar3 < 0x40000001)) {
    iVar1 = fn_82FA62E0();
    iVar4 = iVar1 + 0xc60;
    *(unsigned int *)(iVar1 + 0xc64) = uVar3 - (uVar3 & 3) & 0xfffffffc | 1;
    iVar2 = fn_82FA5D50(iVar1,iVar4);
    iVar1 = (*(unsigned int *)(iVar2 + 0xc64) & 0xfffffffc) + iVar4;
    *(int *)(iVar1 + 4) = iVar4;
    *(unsigned int *)(iVar1 + 8) = 2;
    return iVar2;
  }
  return 0;
}

