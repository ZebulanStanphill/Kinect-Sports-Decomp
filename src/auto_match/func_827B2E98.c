extern unsigned int *auStack_20;
extern int fn_827B1238();
extern int fn_827B26B0();


void fn_827B2E98(int param_1,unsigned __int64 param_2,unsigned short param_3)

{
  int iVar1;
  int iVar2;
  __int64 lVar3;
  unsigned short auStack_20 [4];
  
  if ((param_2 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x4c)) {
    iVar2 = param_1 + 0x48;
    *(unsigned short *)
     (*(int *)(((unsigned int)((param_2 & 0xffffffff) >> 4) & 0xffffffc) + *(int *)(param_1 + 0x58)) +
     ((unsigned int)((param_2 & 0xffffffff) << 3) & 0x1f8)) = param_3;
    auStack_20[0] = param_3;
    iVar1 = fn_827B26B0(iVar2,auStack_20);
    if (iVar1 == 0) {
      lVar3 = 2;
      do {
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      auStack_20[0] = param_3;
      fn_827B1238(iVar2,iVar2,auStack_20);
    }
  }
  return;
}

