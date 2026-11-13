extern unsigned int fStack_20;
extern int fn_82DADF68();
extern int fn_82DAE040();
extern int fn_82DBFB80();
extern int fn_82DBFC60();
extern unsigned int iStack_2c;
extern unsigned int iStack_3c;
extern unsigned int lbl_8323CCA0;
extern unsigned int uStack_1c;
extern unsigned int uStack_24;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_40;


void fn_82D984B0(double param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  unsigned int uVar2;
  unsigned char bVar3;
  struct { unsigned int first; int second; } stack_pair_40;

  unsigned char *puStack_38;
  unsigned int uStack_34;
  struct { unsigned int first; int second; } stack_pair_30;

  unsigned char *puStack_28;
  unsigned int uStack_24;
  float fStack_20;
  unsigned int uStack_1c;

  iVar1 = *(int *)(*(int *)(param_3 + 0x30) + 0x1c);
  bVar3 = *(unsigned char *)((unsigned int)*(unsigned short *)(param_2 + 0x1c) + iVar1);
  if ((int)param_4 != (unsigned int)bVar3 + (-(unsigned int)(bVar3 == 0) - (bVar3 - 1))) {
    *(char *)((unsigned int)*(unsigned short *)(param_2 + 0x1c) + iVar1) = param_4;
    iVar1 = *(int *)(param_3 + 0x30);
    if (param_4 == 0) {
      bVar3 = *(unsigned char *)(iVar1 + 0x12) | 4;
    }
    else {
      bVar3 = *(unsigned char *)(iVar1 + 0x12) & 0xfb;
    }
    *(unsigned char *)(iVar1 + 0x12) = bVar3;
    uVar2 = *(unsigned int *)(*(int *)(param_3 + 8) + 0x18);
    if (param_4 != '\0') {
      uStack_1c = *(unsigned int *)(param_2 + 0x20);
      fStack_20 = (float)param_1;
      puStack_28 = &lbl_8323CCA0;
      uStack_24 = 0;
      stack_pair_30.first = uVar2;
      stack_pair_30.second = param_3;
      if (*(short *)(param_3 + 0x24) != 0) {
        fn_82DBFB80(&stack_pair_30.first);
      }
      fn_82DADF68(uVar2,&stack_pair_30.first);
      return;
    }
    uStack_34 = 0;
    puStack_38 = &lbl_8323CCA0;
    stack_pair_40.first = uVar2;
    stack_pair_40.second = param_3;
    if (*(short *)(param_3 + 0x24) != 0) {
      fn_82DBFC60(&stack_pair_40.first);
    }
    fn_82DAE040(uVar2,&stack_pair_40.first);
  }
  return;
}
