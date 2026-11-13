extern int fn_8300F2C0();
extern int fn_8300F848();
extern int fn_83019E38();
extern unsigned int iStack0000001c;
extern unsigned int stack0x0000001c;


void fn_8300FF00(int param_1,int param_2)

{
  int iVar1;
  __int64 lVar2;
  int iStack0000001c;
  
  lVar2 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x90) - (unsigned __int64)*(unsigned int *)(param_2 + 0x14)) +
          (unsigned __int64)*(unsigned int *)(param_2 + 0xc);
  *(int *)(param_2 + 0xc) = (int)lVar2;
  iStack0000001c = param_2;
  iVar1 = fn_83019E38(param_1 + 0x50,lVar2,&stack0x0000001c);
  if (iVar1 != 1) {
    fn_8300F848(param_1,param_2,1);
    fn_8300F2C0(param_1,param_2);
  }
  return;
}

