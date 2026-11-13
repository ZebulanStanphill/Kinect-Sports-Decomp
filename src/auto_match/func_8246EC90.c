extern unsigned int *auStack_38;
extern int fn_822315A0();
extern int fn_82356F98();
extern int fn_82365BD8();
extern int fn_823F2E20();
extern int fn_82469C10();
extern int fn_82469CD8();
extern int fn_8246E850();
extern int fn_824713F8();
extern unsigned int iStack_34;
extern unsigned int iStack_3c;
extern unsigned int stack0x00000024;
extern unsigned int stack0x0000002c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack_40;


void fn_8246EC90(int param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6)

{
  unsigned __int64 uVar1;
  unsigned int uStack00000024;
  unsigned int uStack0000002c;
  unsigned int uStack_40;
  int iStack_3c;
  unsigned char auStack_38 [4];
  int iStack_34;
  
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  fn_824713F8(&uStack_40,param_2,&stack0x00000024,&stack0x0000002c);
  fn_82469C10(uStack_40,**(unsigned int **)(param_1 + 0x90));
  fn_82469CD8(uStack_40,*(unsigned int *)(*(int *)(param_1 + 0x90) + 0x14));
  uVar1 = fn_82365BD8(auStack_38,&uStack_40);
  fn_8246E850(param_1,uVar1,param_5,param_6,0,3);
  fn_82356F98(auStack_38);
  fn_823F2E20(&uStack_40,auStack_38);
  if (iStack_34 != 0) {
    fn_822315A0();
  }
  if (iStack_3c != 0) {
    fn_822315A0();
  }
  return;
}

