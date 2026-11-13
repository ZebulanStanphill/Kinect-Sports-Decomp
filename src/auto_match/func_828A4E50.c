extern unsigned int *auStack_38;
extern unsigned int *auStack_60;
extern int fn_828A2E00();
extern int fn_828A43E8();
extern unsigned int iStack_40;
extern unsigned int iStack_50;
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_54;
extern unsigned int uStack_58;


void fn_828A4E50(int param_1,unsigned int param_2)

{
  int iVar1;
  int iVar2;
  unsigned int uStack0000001c;
  unsigned int auStack_60 [2];
  unsigned int uStack_58;
  unsigned int uStack_54;
  int iStack_50;
  unsigned int uStack_48;
  unsigned int uStack_44;
  int iStack_40;
  unsigned char auStack_38 [40];
  
  uStack_58 = *(unsigned int *)(param_1 + 0x240);
  uStack_54 = 0;
  uStack_44 = 0;
  iStack_40 = *(int *)(param_1 + 0x24c);
  iVar2 = *(int *)(param_1 + 0x250) + iStack_40;
  uStack0000001c = param_2;
  iStack_50 = iVar2;
  uStack_48 = uStack_58;
  iVar1 = fn_828A2E00(auStack_38,&uStack_48,&uStack_58,&stack0x0000001c);
  if (*(int *)(iVar1 + 8) == iVar2) {
    auStack_60[0] = param_2;
    fn_828A43E8(param_1 + 0x240,auStack_60);
  }
  return;
}

