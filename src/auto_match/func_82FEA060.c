extern unsigned int *auStack_60;
extern int fn_82F68CC0();
extern int fn_82FAB9C0();
extern int fn_82FF4858();
extern int fn_8300F0F0();
extern int fn_8300F208();
extern unsigned int iStack_44;
extern unsigned int iStack_58;
extern unsigned int lbl_832642E0;
extern unsigned int lbl_832642E4;
extern unsigned int lbl_83264304;
extern unsigned int lbl_83264348;
extern unsigned int uStack_4c;
extern unsigned int uStack_54;
extern unsigned int uStack_5c;
extern unsigned int uStack_5e;


int fn_82FEA060(unsigned __int64 param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                 unsigned __int64 param_5,unsigned __int64 param_6)

{
  unsigned short uVar2;
  int iVar1;
  unsigned char auStack_60 [2];
  unsigned short uStack_5e;
  struct { unsigned int first; int second; } stack_pair_5c;

  unsigned __int64 uStack_54;
  unsigned int uStack_4c;
  int iStack_44;
  
  uStack_5e = 1;
  if ((param_6 & 0xffffffff) == 0) {
    uStack_54 = 0;
    uStack_4c = 0;
  }
  else {
    fn_82F68CC0(&uStack_54,param_6,0x10);
  }
  iStack_44 = fn_82FAB9C0((unsigned __int64)lbl_832642E0 + 0x674,param_1);
  if (iStack_44 != 0) {
    lbl_83264348 = lbl_83264348 + 1;
    stack_pair_5c.first = param_2;
    stack_pair_5c.second = lbl_83264348;
    uVar2 = fn_8300F0F0();
    iVar1 = fn_8300F208(lbl_832642E4,auStack_60,uVar2);
    if (iVar1 == 1) {
      if (((param_4 & 0xffffffff) == 0) && ((param_3 & 0x10000) == 0)) {
        return stack_pair_5c.second;
      }
      iVar1 = fn_82FF4858(lbl_83264304,&stack_pair_5c.first,param_4,param_5,param_3,
                                *(unsigned int *)(iStack_44 + 0xc));
      if (iVar1 == 1) {
        return stack_pair_5c.second;
      }
    }
  }
  return 0;
}

