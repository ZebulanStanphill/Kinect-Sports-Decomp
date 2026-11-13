extern unsigned int *auStack_30;
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_827D5070();
extern int fn_827E11C0();
extern int fn_827E2790();
extern unsigned int iStack_34;


void fn_827DF840(int param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  unsigned char auStack_40 [8];
  unsigned char auStack_38 [4];
  int iStack_34;
  unsigned char auStack_30 [48];
  
  RtlEnterCriticalSection(param_1 + 400);
  *(int *)(param_1 + 0x1ac) = *(int *)(param_1 + 0x1ac) + -1;
  puVar1 = (unsigned int *)fn_827E2790(auStack_38,param_2);
  fn_827D5070(*puVar1);
  fn_827E11C0(auStack_30,param_1 + 0xf0,auStack_40);
  if (iStack_34 != 0) {
    fn_822315A0();
  }
  RtlLeaveCriticalSection(param_1 + 400);
  return;
}

