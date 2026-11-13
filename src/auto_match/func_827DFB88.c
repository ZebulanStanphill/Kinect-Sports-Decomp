extern unsigned int *auStack_28;
extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_827D5070();
extern int fn_827D96A0();
extern int fn_827E1280();
extern int fn_827E2598();
extern int fn_827E2790();
extern unsigned int iStack_24;


void fn_827DFB88(__int64 param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned char auStack_30 [8];
  unsigned char auStack_28 [4];
  int iStack_24;
  
  fn_827E2598(param_2);
  fn_827D96A0();
  iVar1 = fn_827E1280(param_1,auStack_30);
  if (iVar1 == 0) {
    fn_827E1280(param_1 + 0x78,auStack_30);
  }
  puVar2 = (unsigned int *)fn_827E2790(auStack_28,param_2);
  fn_827D5070(*puVar2);
  fn_827E1280(param_1 + 0xf0,auStack_30);
  if (iStack_24 != 0) {
    fn_822315A0();
  }
  return;
}

