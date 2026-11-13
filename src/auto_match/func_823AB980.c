extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_8239FF60();
extern int fn_8256D470();
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_823AB980(int *param_1,int param_2,unsigned __int64 param_3)

{
  int iVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned char auStack_50 [1];
  struct { int first; int second; } stack_pair_48;

  
  iVar1 = (**(int (***)())(*param_1 + 0x84))(param_1,param_3);
  if (iVar1 == 0) {
    return 1;
  }
  for (puVar4 = (unsigned int *)param_1[0x1b];
      (puVar4 != (unsigned int *)param_1[0x1c] &&
      ((unsigned __int64)*(unsigned int *)*puVar4 != (param_3 & 0xffffffff))); puVar4 = puVar4 + 2) {
  }
  piVar2 = param_1 + 0x1f;
  for (puVar3 = (unsigned int *)param_1[0x1f];
      (puVar3 != (unsigned int *)param_1[0x20] &&
      ((unsigned __int64)*(unsigned int *)*puVar3 != (param_3 & 0xffffffff))); puVar3 = puVar3 + 2) {
  }
  if (puVar4 == (unsigned int *)param_1[0x1c]) {
    if (puVar3 == (unsigned int *)param_1[0x20]) {
      return 0;
    }
    fn_82365BD8(&stack_pair_48.first,puVar3);
    if (*(char *)(stack_pair_48.first + 8) != '\0') {
      if (stack_pair_48.second == 0) {
        return 0;
      }
      fn_822315A0();
      return 0;
    }
  }
  else {
    fn_82365BD8(&stack_pair_48.first,puVar4);
    if (*(char *)(stack_pair_48.first + 8) == '\0') goto LAB_823aba7c;
    param_1[0x27] = 0;
    fn_8239FF60(*(unsigned int *)(param_2 + 0x2dc),0x1b);
    piVar2 = param_1 + 0x1b;
    puVar3 = puVar4;
  }
  fn_8256D470(auStack_50,piVar2,puVar3);
  if ((float)param_1[0x23] <= ltcg_pool_0_0f) {
    param_1[1] = 2;
  }
LAB_823aba7c:
  if (stack_pair_48.second != 0) {
    fn_822315A0();
  }
  return 1;
}

