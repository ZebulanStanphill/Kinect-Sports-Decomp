extern int fn_8267B890();
extern int fn_8267BE38();
extern unsigned int lbl_831E7E64;


unsigned __int64 fn_82759640(int param_1,unsigned short param_2)

{
  int iVar1;
  unsigned char *puVar2;
  unsigned int *puVar3;
  unsigned short uVar5;
  int iVar4;
  unsigned __int64 uVar6;
  
  if (param_2 != *(unsigned short *)(param_1 + 10)) {
    iVar1 = 0;
    if (param_2 != 0) {
      iVar1 = fn_8267B890(lbl_831E7E64,(unsigned __int64)param_2 << 3,0);
      if (iVar1 == 0) {
        return 0;
      }
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      uVar5 = *(unsigned short *)(param_1 + 10);
      if (param_2 < *(unsigned short *)(param_1 + 10)) {
        uVar5 = param_2;
      }
      uVar6 = (unsigned __int64)uVar5;
      if (uVar6 != 0) {
        iVar4 = 0;
        puVar3 = (unsigned int *)(iVar1 + -4);
        do {
          puVar2 = (unsigned char *)(*(int *)(param_1 + 0xc) + iVar4);
          iVar4 = iVar4 + 8;
          *(unsigned char *)(puVar3 + 1) = *puVar2;
          puVar3 = puVar3 + 2;
          *puVar3 = *(unsigned int *)(puVar2 + 4);
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      fn_8267BE38(*(unsigned int *)(param_1 + 0xc));
    }
    *(int *)(param_1 + 0xc) = iVar1;
    *(unsigned short *)(param_1 + 10) = param_2;
  }
  return 1;
}

