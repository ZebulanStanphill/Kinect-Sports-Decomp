extern unsigned int *auStack_40;
extern int fn_8300F118();
extern int fn_8300F208();
extern unsigned int iStack_3c;
extern unsigned int lbl_832642E4;
extern unsigned int uStack_38;
extern unsigned int uStack_3e;


unsigned __int64 fn_82FE7078(int param_1)

{
  unsigned short uVar2;
  unsigned __int64 uVar1;
  unsigned char auStack_40 [2];
  unsigned short uStack_3e;
  int iStack_3c;
  unsigned int uStack_38;
  
  if ((param_1 != 0) && (param_1 != -1)) {
    uStack_3e = 6;
    uStack_38 = 0;
    iStack_3c = param_1;
    uVar2 = fn_8300F118();
    uVar1 = fn_8300F208(lbl_832642E4,auStack_40,uVar2);
    return uVar1;
  }
  return 2;
}

