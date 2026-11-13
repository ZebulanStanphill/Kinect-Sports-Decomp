extern int fn_828A2E00();
extern int fn_828A34C0();
extern unsigned int iStack_28;
extern unsigned int iStack_38;
extern unsigned int iStack_48;
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_828A39C0(int param_1,unsigned int param_2)

{
  unsigned int uStack0000001c;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  int iStack_48;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  int iStack_38;
  int *apiStack_30 [2];
  int iStack_28;
  
  iStack_38 = *(int *)(param_1 + 0x24c);
  uStack_50 = *(unsigned int *)(param_1 + 0x240);
  uStack_4c = 0;
  uStack_3c = 0;
  iStack_48 = *(int *)(param_1 + 0x250) + iStack_38;
  uStack0000001c = param_2;
  uStack_40 = uStack_50;
  fn_828A2E00(apiStack_30,&uStack_40,&uStack_50,&stack0x0000001c);
  if (iStack_28 != *(int *)(param_1 + 0x250) + *(int *)(param_1 + 0x24c)) {
    uStack_50 = 0;
    uStack_4c = 0;
    if ((apiStack_30[0] != (int *)0x0) && ((unsigned int *)*apiStack_30[0] != (unsigned int *)0x0)) {
      uStack_50 = *(unsigned int *)*apiStack_30[0];
    }
    iStack_48 = iStack_28;
    fn_828A34C0(apiStack_30,param_1 + 0x240,&uStack_50);
  }
  return;
}

