extern unsigned int *auStack_60;
extern int fn_82AA0568();
extern int fn_82AA2370();


unsigned __int64 fn_82AA2668(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,unsigned int param_4)

{
  int iVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned char auStack_60 [96];
  
  iVar1 = *(int *)(param_3 + 0x10);
  if (iVar1 != 0) {
    if (param_4 < iVar1 + 0x1cU) {
      return 0xffffffff80070057;
    }
    iVar1 = iVar1 + param_3;
    iVar3 = iVar1 + 4;
    uVar2 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x10);
    if (uVar2 != 0) {
      iVar1 = *(int *)(iVar1 + 0x14) + iVar3;
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        fn_82AA0568(auStack_60,iVar3,iVar1,*(int *)(iVar1 + 0xc) + iVar3);
        fn_82AA2370(param_1,0xffffffff82196582,0xffffffff82196582,0xffffffff82196582,auStack_60,
                      iVar3,iVar1);
        iVar1 = iVar1 + 0x14;
      }
    }
  }
  return 0;
}

