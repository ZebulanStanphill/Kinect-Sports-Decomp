extern int fn_825FBDB8();
extern int fn_8284C860();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_821CA460;


void fn_825FBEA8(unsigned __int64 param_1, double param_2, double param_3, double param_4, double param_5, unsigned __int64 param_6, int param_7, unsigned int param_8, unsigned __int64 param_9, unsigned __int64 param_10, unsigned int param_11, int param_12, int param_13, unsigned __int64 unused_arg_14, int in_stack_00000084, unsigned __int64 unused_arg_16, unsigned __int64 unused_arg_17, int in_stack_0000009c)

{
  int iVar1;
  char cVar3;
  unsigned int uVar2;
  unsigned char uVar4;
  double dVar5;
  double extraout_f1;
  double dVar6;
  int in_stack_00000054;
  int in_stack_0000005c;
  int in_stack_00000064;
  int in_stack_0000006c;
  unsigned int in_stack_00000074;


  
  iVar1 = fn_82F6A544();
  dVar6 = extraout_f1;
  fn_825FBDB8();
  *(int *)(iVar1 + 0x25c) = param_7;
  *(unsigned int *)(iVar1 + 0x260) = param_8;
  cVar3 = fn_8284C860(*(unsigned int *)(param_7 + 0x14));
  if (cVar3 == '\0') {
    *(unsigned int *)(iVar1 + 0x264) = 0;
  }
  else {
    uVar2 = fn_8284C860(*(unsigned int *)(*(int *)(iVar1 + 0x25c) + 0x14));
    *(unsigned int *)(iVar1 + 0x264) = (uVar2 & 0xff) - 1;
  }
  *(float *)(iVar1 + 0x178) = (float)param_3;
  *(float *)(iVar1 + 0x17c) = (float)param_4;
  *(unsigned int *)(iVar1 + 600) = param_11;
  *(float *)(iVar1 + 0x180) = (float)param_5;
  *(unsigned int *)(iVar1 + 0x174) = in_stack_00000074;
  *(unsigned char *)(iVar1 + 0x270) = 0;
  dVar5 = (double)lbl_821CA460;
  *(float *)(iVar1 + 0x268) = (float)((double)(float)(dVar5 - param_2) * dVar6);
  *(float *)(iVar1 + 0x26c) = (float)((double)(float)(param_2 + dVar5) * dVar6);
  if ((*(int *)(iVar1 + 0x260) == 0) || (in_stack_00000084 != 0)) {
    uVar2 = -(unsigned int)(in_stack_00000054 == 0) & 2;
  }
  else {
    uVar2 = (-(unsigned int)(in_stack_00000054 != 0) & 0xfffffffe) + 3;
  }
  *(unsigned int *)(iVar1 + 0x254) = uVar2;
  if (param_12 == 1) {
    uVar4 = 4;
  }
  else if (param_12 == 2) {
    uVar4 = 8;
  }
  else {
    if (param_12 != 3) goto LAB_825fbfe0;
    uVar4 = 0x10;
  }
  *(unsigned char *)(iVar1 + 0x270) = uVar4;
LAB_825fbfe0:
  if (param_13 != 0) {
    *(unsigned char *)(iVar1 + 0x270) = *(unsigned char *)(iVar1 + 0x270) | 1;
  }
  if (in_stack_0000005c == 0) {
    uVar2 = *(unsigned int *)(iVar1 + 0x20) & 0xfffffeff;
  }
  else {
    uVar2 = *(unsigned int *)(iVar1 + 0x20) | 0x100;
  }
  *(unsigned int *)(iVar1 + 0x20) = uVar2;
  if (in_stack_00000064 == 0) {
    uVar2 = *(unsigned int *)(iVar1 + 0x20) & 0xfffffdff;
  }
  else {
    uVar2 = *(unsigned int *)(iVar1 + 0x20) | 0x200;
  }
  *(unsigned int *)(iVar1 + 0x20) = uVar2;
  if (in_stack_0000009c == 0) {
    uVar2 = *(unsigned int *)(iVar1 + 0x20) & 0xfffdffff;
  }
  else {
    uVar2 = *(unsigned int *)(iVar1 + 0x20) | 0x20000;
  }
  *(unsigned int *)(iVar1 + 0x20) = uVar2;
  if (in_stack_0000006c == 0) {
    uVar2 = *(unsigned int *)(iVar1 + 0x20) & 0xfffffbff;
  }
  else {
    uVar2 = *(unsigned int *)(iVar1 + 0x20) | 0x400;
  }
  *(unsigned int *)(iVar1 + 0x20) = uVar2;
  if ((in_stack_00000084 == 0) || (*(int *)(iVar1 + 0x260) == 0)) {
    uVar2 = *(unsigned int *)(iVar1 + 0x20) & 0xfffff7ff;
  }
  else {
    uVar2 = uVar2 | 0x800;
  }
  *(unsigned int *)(iVar1 + 0x20) = uVar2;
  fn_82F6A590(*(unsigned int *)(iVar1 + 0x264));
  return;
}

