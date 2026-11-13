extern unsigned int *auStack_30;
extern int fn_8267BE38();
extern int fn_8267BED0();
extern int fn_8269A608();
extern int fn_8269F1B8();
extern int fn_8269F310();


void fn_8269F440(int param_1,int *param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned int auStack_30;
  
  if (*(int *)(*param_2 + 0x10) != 0) {
    *(unsigned int *)(param_1 + 0x8c) = *(unsigned int *)(param_1 + 0x8c) & 0xffffbfff;
  }
  if (*(int *)(param_1 + 0x80) == 0) {
    auStack_30 = 0x143;
    uVar3 = fn_8267BED0(param_1,0x14,&auStack_30);
    if ((uVar3 & 0xffffffff) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = fn_8269F1B8(uVar3,param_2,*(unsigned int *)(param_1 + 0x20),param_1);
    }
    puVar1 = *(unsigned int **)(param_1 + 0x80);
    if (puVar1 != (unsigned int *)0x0) {
      uVar2 = *puVar1;
      *puVar1 = (unsigned int)((unsigned __int64)uVar2 - 1);
      if ((__int64)((unsigned __int64)uVar2 - 1) < 1) {
        fn_8269A608(puVar1);
        fn_8267BE38(puVar1);
      }
    }
    *(unsigned int *)(param_1 + 0x80) = uVar4;
  }
  else {
    fn_8269F310(*(int *)(param_1 + 0x80),param_2,*(unsigned int *)(param_1 + 0x20));
  }
  return;
}

