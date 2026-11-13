extern unsigned int *auStack_20;
extern int fn_82BE6268();
extern int fn_82BE6E28();
extern int fn_82F6D460();
extern unsigned int iStack_1c;


unsigned __int64 fn_82BE6ED8(unsigned __int64 param_1,unsigned int param_2)

{
  int iVar1;
  unsigned char auStack_20 [4];
  int iStack_1c;
  
  if ((param_2 & 0xffffffff) != 0) {
    auStack_20[0] = 0xe6;
    iVar1 = fn_82BE6268(param_1,auStack_20,1);
    if (iVar1 != 0) {
      iStack_1c = fn_82F6D460(param_2,2000);
      iStack_1c = iStack_1c + 3;
      iVar1 = fn_82BE6268(param_1,&iStack_1c,4);
      if (iVar1 != 0) {
        auStack_20[0] = 0x3d;
        iVar1 = fn_82BE6268(param_1,auStack_20,1);
        if ((iVar1 != 0) && (iVar1 = fn_82BE6E28(param_1,param_2,0), iVar1 != 0)) {
          return 1;
        }
      }
    }
  }
  return 0;
}

