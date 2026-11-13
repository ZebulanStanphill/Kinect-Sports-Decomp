extern int fn_826F0610();
extern unsigned int iStack_40;
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int iStack_50;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_4c;


void fn_826F13A8(int param_1,int *param_2)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned int uVar3;
  int iStack_50;
  unsigned int uStack_4c;
  struct { int first; int second; } stack_pair_48;

  int iStack_40;
  int *piStack_3c;
  unsigned int *puStack_38;
  unsigned int uStack_30;
  unsigned char uStack_2c;
  unsigned int uStack_28;
  
  iStack_50 = *param_2;
  uStack_4c = 0;
  if (param_2[1] != 0) {
    do {
      if ((*(char *)(iStack_50 + uStack_4c) == '\0') || (*(char *)(iStack_50 + uStack_4c) == ':'))
      break;
      uStack_4c = uStack_4c + 1;
    } while (uStack_4c < (unsigned int)param_2[1]);
  }
  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(*(int *)(param_1 + 4) + 0x14) != 0)) {
    iStack_40 = *(int *)(param_1 + 4);
    uStack_30 = *(unsigned int *)(param_1 + 0xc);
    piStack_3c = &iStack_50;
    uStack_2c = 1;
    puStack_38 = &uStack_30;
    uStack_28 = 0;
    piVar2 = (int *)(**(int (***)())(**(int **)(iStack_40 + 0x14) + 4))
                              (*(int **)(iStack_40 + 0x14),&iStack_40);
    if (piVar2 != (int *)0x0) {
      uVar1 = param_2[1];
      uVar3 = uStack_4c + 1;
      if (uVar1 < uStack_4c + 1) {
        uVar3 = uVar1;
      }
      stack_pair_48.second = uVar1 - uVar3;
      stack_pair_48.first = *param_2 + uVar3;
      if (stack_pair_48.second != 0) {
        (**(int (***)())(*piVar2 + 8))(piVar2,&stack_pair_48.first);
      }
      fn_826F0610(*(unsigned int *)(param_1 + 4),param_1,piVar2,1);
    }
  }
  return;
}

