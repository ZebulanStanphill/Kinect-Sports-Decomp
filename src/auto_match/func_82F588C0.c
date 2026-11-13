extern unsigned int *auStack_28;
extern int fn_82F56D40();
extern int fn_82F56DC0();
extern int fn_82F573F8();
extern int fn_82F58028();
extern int fn_82F58670();
extern unsigned int iStack_30;
extern unsigned int stack0x0000001c;
extern unsigned int uStack_2c;


void fn_82F588C0(unsigned __int64 param_1,int *param_2)

{
  int iVar1;
  int *piStack0000001c;
  int iStack_30;
  unsigned int uStack_2c;
  unsigned char auStack_28 [16];
  
  iStack_30 = *param_2;
  if (iStack_30 != 0) {
    piStack0000001c = param_2;
    fn_82F56D40(&uStack_2c,param_1,&iStack_30);
    iVar1 = fn_82F58670(param_1,&iStack_30);
    fn_82F56DC0(&iStack_30,iVar1,&stack0x0000001c);
    fn_82F573F8(auStack_28,iVar1,iStack_30);
    if (*(int *)(iVar1 + 8) == 0) {
      fn_82F58028(auStack_28,param_1,uStack_2c);
    }
  }
  return;
}

