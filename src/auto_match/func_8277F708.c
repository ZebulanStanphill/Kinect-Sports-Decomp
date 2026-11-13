extern unsigned int fStack_40;
extern int fn_8277E848();
extern int fn_8277E8B8();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;


void fn_8277F708(double param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  unsigned int uVar2;
  struct { int first; int second; } stack_pair_50;

  struct { float first; unsigned int second; } stack_pair_40;

  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;

  if (((param_3 != 0) && (iVar1 = *(int *)(param_3 + 4), iVar1 != 0)) &&
     (*(char *)(*(int *)(iVar1 + 0x10) + *(int *)(param_2 + 0x24)) != '\0')) {
    if (*(int *)(iVar1 + 0x14) == 0) {
      uStack_38 = *(unsigned int *)(param_3 + 8);
      uStack_30 = *(unsigned int *)(param_2 + 0x144);
      stack_pair_40.first = (float)param_1;
      uStack_34 = 0xffffffff;
      uStack_2c = 0;
      stack_pair_40.second = *(unsigned int *)(*param_4 + 0x1c);
      uStack_28 = 0xffffffff;
      fn_8277E848(param_2 + 0x134,&stack_pair_40.first);
      uVar2 = *(int *)(param_2 + 0x134) - 1;
      *(unsigned int *)(iVar1 + 0x14) =
           *(int *)((uVar2 >> 2 & 0x3ffffffc) + *(int *)(param_2 + 0x140)) + (uVar2 & 0xf) * 0x1c;
    }
    stack_pair_50.first = param_4[2];
    stack_pair_50.second = param_4[1];
    fn_8277E8B8(param_2 + 0x144,&stack_pair_50.first);
    *(int *)(*(int *)(iVar1 + 0x14) + 0x14) = *(int *)(*(int *)(iVar1 + 0x14) + 0x14) + 1;
  }
  return;
}
