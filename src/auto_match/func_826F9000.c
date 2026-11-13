extern unsigned int fStack_64;
extern unsigned int fStack_68;
extern int fn_8268CC00();
extern int fn_8268D008();
extern int fn_8269A240();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_826F9000(int *param_1,char param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  struct { unsigned int first; unsigned int second; } stack_pair_70;

  struct { float first; float second; } stack_pair_68;

  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;

  *(char *)(param_1 + 1) = param_2;
  if (param_2 == '\0') {
    fn_8268CC00(&uStack_40);
    piVar2 = (int *)*param_1;
    iVar3 = piVar2[8];
    if (iVar3 != 0) {
      fn_8268CC00(&uStack_60);
      fn_8269A240(iVar3,&uStack_60);
      uStack_40 = uStack_60;
      uStack_3c = uStack_5c;
      uStack_38 = uStack_58;
      uStack_34 = uStack_54;
      uStack_30 = uStack_50;
      uStack_2c = uStack_4c;
    }
    iVar3 = (**(int (***)())(*piVar2 + 0x40))(piVar2);
    stack_pair_70.second = *(unsigned int *)(iVar3 + 0x95c);
    stack_pair_70.first = *(unsigned int *)(iVar3 + 0x958);
    fn_8268D008(&uStack_40,&stack_pair_68.first,&stack_pair_70.first);
    fVar1 = (float)piVar2[0x16];
    param_1[6] = (int)((float)piVar2[0x13] - stack_pair_68.first);
    param_1[7] = (int)(fVar1 - stack_pair_68.second);
  }
  return;
}
