extern int fn_826F0360();
extern int fn_826F0540();
extern unsigned int iStack_14;
extern unsigned int iStack_18;
extern unsigned int iStack_1c;
extern unsigned int iStack_20;
extern unsigned int iStack_24;
extern unsigned int iStack_28;
extern unsigned int iStack_2c;
extern unsigned int iStack_30;
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int iStack_3c;


void fn_826F16C0(unsigned int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  unsigned int uVar4;
  int iVar5;
  char *pcStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  struct { int first; int second; } stack_pair_28;

  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  iStack_3c = param_2[1];
  if (iStack_3c == 0) {
    return;
  }
  pcStack_40 = (char *)*param_2;
  if (pcStack_40 == (char *)0x0) {
    return;
  }
  cVar1 = *pcStack_40;
  if (cVar1 == ' ') {
    *(unsigned char *)((int)param_1 + 6) = *(unsigned char *)((int)param_1 + 6) | 0x40;
    uVar4 = (unsigned int)(param_2[1] != 0);
    iVar2 = param_2[1] - uVar4;
    piVar3 = &iStack_18;
    iVar5 = *param_2 + uVar4;
    iStack_18 = iVar5;
    iStack_14 = iVar2;
  }
  else if (cVar1 == '#') {
    *(unsigned char *)((int)param_1 + 6) = *(unsigned char *)((int)param_1 + 6) | 0x10;
    uVar4 = (unsigned int)(param_2[1] != 0);
    iVar2 = param_2[1] - uVar4;
    piVar3 = &iStack_20;
    iVar5 = *param_2 + uVar4;
    iStack_20 = iVar5;
    iStack_1c = iVar2;
  }
  else if (cVar1 == '+') {
    *(unsigned char *)((int)param_1 + 5) = *(unsigned char *)((int)param_1 + 5) | 1;
    uVar4 = (unsigned int)(param_2[1] != 0);
    iVar2 = param_2[1] - uVar4;
    piVar3 = &stack_pair_28.first;
    iVar5 = *param_2 + uVar4;
    stack_pair_28.first = iVar5;
    stack_pair_28.second = iVar2;
  }
  else if (cVar1 == '-') {
    *(unsigned char *)((int)param_1 + 6) = *(unsigned char *)((int)param_1 + 6) | 0x20;
    uVar4 = (unsigned int)(param_2[1] != 0);
    iVar2 = param_2[1] - uVar4;
    piVar3 = &iStack_30;
    iVar5 = *param_2 + uVar4;
    iStack_30 = iVar5;
    iStack_2c = iVar2;
  }
  else {
    if (cVar1 == '.') {
      *param_1 = *param_1 & 0x7ffffff;
      uVar4 = (unsigned int)(param_2[1] != 0);
      param_2[1] = param_2[1] - uVar4;
      *param_2 = *param_2 + uVar4;
      iVar2 = fn_826F0360(param_2,*param_1 >> 0x1b,0x3a);
      *param_1 = iVar2 << 0x1b | *param_1 & 0x7ffffff;
      return;
    }
    if (cVar1 != '0') {
      fn_826F0540(param_1,&pcStack_40);
      return;
    }
    *(unsigned char *)(param_1 + 1) = *(unsigned char *)(param_1 + 1) & 1 | 0x60;
    uVar4 = (unsigned int)(param_2[1] != 0);
    iVar2 = param_2[1] - uVar4;
    piVar3 = &iStack_38;
    iVar5 = *param_2 + uVar4;
    iStack_38 = iVar5;
    iStack_34 = iVar2;
  }
  param_2[1] = iVar2;
  *param_2 = iVar5;
  fn_826F16C0(param_1,piVar3);
  return;
}

