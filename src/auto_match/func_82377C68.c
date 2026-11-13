extern int fn_82250A18();
extern int fn_823913F0();
extern unsigned int lbl_832975B0;


void fn_82377C68(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  int iVar1;
  
  iVar1 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar1 = fn_82250A18();
  }
  if (((*(char *)(iVar1 + 4) != '\0') && (*(int *)(param_4 + 0x84) != 0)) &&
     (iVar1 = *(int *)(*(int *)(param_4 + 0x84) + 0x88), iVar1 != 0)) {
    fn_823913F0(param_1,param_2,param_3,(unsigned __int64)*(unsigned int *)(iVar1 + 0x78) + 0x268,param_5,
                      param_6,param_7,param_8);
  }
  return;
}

