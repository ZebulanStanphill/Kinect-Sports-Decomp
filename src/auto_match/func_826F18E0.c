#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_826F0610();
extern unsigned int iStack_28;
extern unsigned int iStack_30;
extern unsigned int iStack_40;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;


void fn_826F18E0(int param_1,int *param_2)

{
  int iVar1;
  unsigned int uVar2;
  int *piVar3;
  unsigned int uVar4;
  int iStack_40;
  unsigned int uStack_3c;
  unsigned __int64 uStack_38;
  int iStack_30;
  int *piStack_2c;
  int iStack_28;
  
  piVar3 = (int *)0x0;
  iStack_40 = *param_2;
  uStack_3c = 0;
  uStack_38 = 0;
  if (param_2[1] != 0) {
    do {
      if ((*(char *)(iStack_40 + uStack_3c) == '\0') || (*(char *)(iStack_40 + uStack_3c) == ':'))
      break;
      uStack_3c = uStack_3c + 1;
    } while (uStack_3c < (unsigned int)param_2[1]);
  }
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 0x14) != 0) {
    piStack_2c = &iStack_40;
    iStack_28 = param_1 + 0xc;
    iStack_30 = iVar1;
    piVar3 = (int *)(**(int (***)())(**(int **)(iVar1 + 0x14) + 4))(*(int **)(iVar1 + 0x14),&iStack_30);
  }
  uVar2 = param_2[1];
  uVar4 = uStack_3c + 1;
  if (uVar2 < uStack_3c + 1) {
    uVar4 = uVar2;
  }
  uStack_38 = CONCAT44(*param_2 + uVar4,uVar2 - uVar4);
  if (piVar3 != (int *)0x0) {
    if (uVar2 - uVar4 != 0) {
      (**(int (***)())(*piVar3 + 8))(piVar3,&uStack_38);
    }
    fn_826F0610(*(unsigned int *)(param_1 + 4),param_1,piVar3,1);
  }
  return;
}

