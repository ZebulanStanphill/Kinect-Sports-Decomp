extern int fn_82F68CC0();
extern int fn_82FA5060();
extern int fn_8300E490();
extern unsigned int lbl_831BC768;


unsigned __int64 fn_8301E890(int param_1,int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  
  iVar1 = *(int *)(param_2 + 4);
  iVar3 = iVar1 * 4;
  if (iVar3 == 0) {
    *(unsigned int *)(param_1 + 0x10) = 0;
  }
  else {
    uVar4 = fn_82FA5060(lbl_831BC768,iVar3);
    *(int *)(param_1 + 0x10) = (int)uVar4;
    if ((uVar4 & 0xffffffff) == 0) {
      return 0x34;
    }
    fn_82F68CC0(uVar4,param_2 + 8,iVar3);
  }
  puVar2 = (unsigned int *)(param_2 + 8 + iVar3);
  uVar5 = fn_8300E490(param_1 + 0x14,iVar1,(int)puVar2 + 6,*puVar2,*(unsigned char *)(puVar2 + 1)
                            ,*(unsigned char *)((int)puVar2 + 5));
  return uVar5;
}

