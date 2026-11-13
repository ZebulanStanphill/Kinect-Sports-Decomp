extern unsigned int *auStack_24;
extern unsigned int *auStack_38;
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828B55F8();
extern int fn_828E6240();
extern int fn_828E6B10();
extern int fn_828E7FB0();
extern int fn_828E8EF8();
extern int fn_828E97F8();
extern unsigned int iStack_3c;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_40;


unsigned int fn_828E9A48(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  unsigned char uStack_40;
  int iStack_3c;
  unsigned char auStack_38 [1];
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  unsigned int uStack_28;
  unsigned char auStack_24 [20];
  
  (**(int (***)())(**(int **)(param_1 + 0x10) + 0x1c))(auStack_38);
  uStack_28 = *(unsigned int *)(*(int *)(param_1 + 4) + 0x28);
  fn_828B5580(auStack_24,auStack_38);
  uVar2 = fn_828E8EF8();
  fn_828E6B10(&stack_pair_30.first,uVar2,&uStack_28);
  iStack_3c = 0;
  fn_828E6240(stack_pair_30.first,stack_pair_30.second,&iStack_3c,uStack_40);
  if (iStack_3c == 0) {
    uVar1 = *(unsigned int *)(param_1 + 4);
    uVar2 = fn_828B55F8(auStack_38);
    puVar3 = (unsigned int *)fn_828E97F8(uVar1,uVar2);
  }
  else {
    uVar2 = fn_828E8EF8();
    puVar3 = (unsigned int *)fn_828E7FB0(uVar2,&uStack_28);
  }
  uVar1 = *puVar3;
  fn_828B55B0(auStack_24);
  fn_828B55B0(auStack_38);
  return uVar1;
}

