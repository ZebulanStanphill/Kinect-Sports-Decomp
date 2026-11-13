extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_8304DD90();
extern int fn_8304DE60();
extern unsigned int uStack_28;
extern unsigned int uStack_2c;


unsigned __int64 fn_8304E390(int param_1)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned int auStack_40;
  unsigned char auStack_30 [4];
  unsigned int uStack_2c;
  unsigned int uStack_28;
  
  uVar1 = fn_8304DD90(param_1,&auStack_40);
  if ((int)uVar1 == 1) {
    iVar2 = fn_8304DE60(param_1,auStack_40);
    if (iVar2 == 1) {
      (**(int (***)())(**(int **)(param_1 + 0x28) + 0xc))(*(int **)(param_1 + 0x28),auStack_30);
      if ((*(unsigned short *)(param_1 + 0x1c) == 0) || (1 < *(unsigned short *)(param_1 + 0x1c))) {
        uStack_2c = *(unsigned int *)(param_1 + 0x4c);
        uStack_28 = *(unsigned int *)(param_1 + 0x50);
      }
      else {
        uStack_2c = 0;
        uStack_28 = 0;
      }
      (**(int (***)())(**(int **)(param_1 + 0x28) + 0x10))(*(int **)(param_1 + 0x28),auStack_30);
      (**(int (***)())(**(int **)(param_1 + 0x28) + 0x30))();
      *(unsigned int *)(param_1 + 0x3c) = 0;
      *(unsigned int *)(param_1 + 0x34) = 0;
      *(unsigned int *)(param_1 + 0x38) = 0;
      *(unsigned char *)(param_1 + 0x40) = 0;
    }
    uVar1 = 1;
  }
  return uVar1;
}

