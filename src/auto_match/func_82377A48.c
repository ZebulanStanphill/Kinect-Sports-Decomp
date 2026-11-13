extern int fn_82250A18();
extern int fn_823910A8();
extern unsigned int lbl_832975B0;


void fn_82377A48(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  
  iVar1 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar1 = fn_82250A18();
  }
  if (((*(char *)(iVar1 + 4) != '\0') && (*(int *)(param_2 + 0x84) != 0)) &&
     (iVar1 = *(int *)(*(int *)(param_2 + 0x84) + 0x88), iVar1 != 0)) {
    fn_823910A8(param_1,(unsigned __int64)*(unsigned int *)(iVar1 + 0x78) + 0x1d8,param_3,param_4);
  }
  return;
}

