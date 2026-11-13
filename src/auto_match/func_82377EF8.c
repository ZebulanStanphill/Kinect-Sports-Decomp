extern int fn_82250A18();
extern int fn_82390A80();
extern unsigned int lbl_832975B0;


void fn_82377EF8(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,char param_5
                  )

{
  int iVar1;
  
  iVar1 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar1 = fn_82250A18();
  }
  if (((*(char *)(iVar1 + 4) != '\0') && (*(int *)(param_2 + 0x84) != 0)) &&
     (iVar1 = *(int *)(*(int *)(param_2 + 0x84) + 0x88), iVar1 != 0)) {
    fn_82390A80(param_1,(unsigned __int64)*(unsigned int *)(iVar1 + 0x78) + 0x28,param_3,param_4,
                      param_5 != '\0');
  }
  return;
}

