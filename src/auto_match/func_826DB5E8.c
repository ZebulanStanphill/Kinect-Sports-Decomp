extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_8267C4C8();
extern int fn_826E56B8();
extern unsigned int lbl_8200C6C0;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


unsigned int * fn_826DB5E8(unsigned int *param_1,int param_2,int *param_3,unsigned int param_4)

{
  int iVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  unsigned int *puVar4;
  struct { unsigned int first; unsigned int second; } stack_pair_70;

  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned char uStack_44;
  
  fn_826E56B8(param_1,param_2,0x20003);
  param_1[5] = 0;
  *param_1 = &lbl_8200C6C0;
  param_1[6] = 0x90000;
  param_1[7] = 0;
  if (param_3[7] != 0) {
    fn_8267C4C8();
  }
  iVar1 = param_3[7];
  param_1[8] = iVar1;
  param_1[0xb] = param_4;
  piVar3 = *(int **)(iVar1 + 0xc);
  param_1[9] = piVar3;
  uVar2 = (**(int (***)())(*piVar3 + 0x44))();
  uVar2 = (uVar2 & 0xffffffff) >> 4 & 1;
  *(char *)(param_1 + 10) = (char)uVar2;
  piVar3 = *(int **)(*(int *)(param_2 + 8) + 0x28);
  if ((piVar3 == (int *)0x0) || (uVar2 != 0)) {
    param_1[0xc] = 0;
  }
  else {
    uStack_58 = *(unsigned int *)(param_2 + 0x20);
    uStack_44 = 1;
    uStack_54 = *(unsigned int *)(param_2 + 0xc);
    stack_pair_70.first = 1;
    uStack_60 = 0;
    uStack_68 = 0;
    stack_pair_70.second = 1;
    uStack_64 = 1;
    uStack_48 = 0;
    uStack_5c = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    if ((*(char *)(param_2 + 0x44) == '\0') && (*(int *)(param_2 + 0x18) == 0)) {
      uStack_44 = 0;
    }
    uStack_48 = (**(int (***)())(*param_3 + 0x48))(param_3);
    piVar3 = (int *)(**(int (***)())(*piVar3 + 8))
                              (piVar3,param_1 + 6,*(unsigned int *)(*(int *)(param_2 + 8) + 0x10),
                               &stack_pair_70.first);
    if (param_1[7] != 0) {
      fn_8267C498(param_1[7]);
    }
    param_1[7] = piVar3;
    (**(int (***)())(*piVar3 + 4))(piVar3,param_1[8]);
    puVar4 = (unsigned int *)fn_8267B890(lbl_831E7E64,4,0);
    if (puVar4 == (unsigned int *)0x0) {
      puVar4 = (unsigned int *)0x0;
    }
    else {
      *puVar4 = 0;
    }
    param_1[0xc] = puVar4;
  }
  return param_1;
}

