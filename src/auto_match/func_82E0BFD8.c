extern int fn_82CE4118();
extern int fn_82CE52E0();
extern int fn_82CE5410();
extern int fn_82CEAC20();
extern int fn_82E0DF70();
extern int fn_82E162A8();
extern int fn_82E16858();
extern int fn_82E168C0();
extern int fn_82E16858();
extern int fn_82E17DD0();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int uStack_58;
extern unsigned int uStack_68;


unsigned __int64 fn_82E0BFD8(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar2;
  int iVar3;
  unsigned __int64 uVar1;
  unsigned int uVar4;
  int *piVar5;
  int iVar6;
  struct { int first; int second; } stack_pair_70;

  unsigned int uStack_68;
  struct { int first; int second; } stack_pair_60;

  unsigned int uStack_58;

  if (param_1[0x1f] != 0) {
    fn_82CE4118();
  }
  param_1[0x1f] = 0;
  fn_82E162A8(param_1[6],0);
  iVar6 = param_3 * 0x30 + param_1[8];
  iVar3 = *(int *)(iVar6 + 0x2c);
  if (param_4 == 0) {
    iVar2 = fn_82CE5410();
    param_4 = fn_82CE52E0(*(unsigned int *)(iVar2 + 0x10),iVar3);
    fn_82E0DF70(param_1[6],param_4);
  }
  iVar2 = (**(int (***)())(*param_2 + 0x10))(param_2,param_4,iVar3);
  if (iVar2 == iVar3) {
    iVar3 = 0;
    piVar5 = (int *)(*(int *)(iVar6 + 0x18) + param_4);
    uVar4 = *(int *)(iVar6 + 0x1c) - *(int *)(iVar6 + 0x18);
    if (0 < (__int64)
            ((__int64)((int)uVar4 >> 2) + (unsigned __int64)((int)uVar4 < 0 && (uVar4 & 3) != 0))) {
      do {
        if (*piVar5 != -1) {
          *(int *)(*piVar5 + param_4) = piVar5[1] + param_4;
        }
        iVar3 = iVar3 + 2;
        piVar5 = piVar5 + 2;
        uVar4 = *(int *)(iVar6 + 0x1c) - *(int *)(iVar6 + 0x18);
      } while (iVar3 < (int)(((int)uVar4 >> 2) + (unsigned int)((int)uVar4 < 0 && (uVar4 & 3) != 0)));
    }
    stack_pair_70.first = 0;
    stack_pair_70.second = 0;
    uStack_68 = 0x80000000;
    fn_82E16858(iVar6,param_4,&stack_pair_70.first);
    iVar3 = 0;
    if (0 < stack_pair_70.second) {
      iVar2 = 0;
      do {
        fn_82E16858(param_1[6],*(unsigned int *)(iVar2 + stack_pair_70.first),
                          *(unsigned int *)(iVar2 + stack_pair_70.first + 4));
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 8;
      } while (iVar3 < stack_pair_70.second);
    }
    iVar3 = fn_82CE5410();
    stack_pair_70.second = 0;
    if ((uStack_68 & 0x80000000) == 0) {
      (**(int (***)())(**(int **)(iVar3 + 0x10) + 0x10))
                (*(int **)(iVar3 + 0x10),stack_pair_70.first,uStack_68 & 0x3fffffff,8);
    }
    stack_pair_70.first = 0;
    uStack_68 = 0x80000000;
    stack_pair_60.first = 0;
    stack_pair_60.second = 0;
    uStack_58 = 0x80000000;
    fn_82E17DD0(iVar6,param_4,&stack_pair_60.first);
    iVar3 = 0;
    if (0 < stack_pair_60.second) {
      iVar6 = 0;
      do {
        fn_82E168C0(param_1[6],*(unsigned int *)(iVar6 + stack_pair_60.first),
                          *(unsigned int *)(iVar6 + stack_pair_60.first + 4));
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + 8;
      } while (iVar3 < stack_pair_60.second);
    }
    iVar3 = fn_82CE5410();
    stack_pair_60.second = 0;
    if ((uStack_58 & 0x80000000) == 0) {
      (**(int (***)())(**(int **)(iVar3 + 0x10) + 0x10))
                (*(int **)(iVar3 + 0x10),stack_pair_60.first,uStack_58 & 0x3fffffff,8);
    }
    stack_pair_60.first = 0;
    uStack_58 = 0x80000000;
    *(int *)(param_3 * 4 + param_1[9]) = param_4;
    iVar3 = param_1[7];
    if (((param_3 == *(int *)(iVar3 + 0x20)) && (-1 < *(int *)(iVar3 + 0x24))) &&
       (*(int *)(iVar3 + 0xc) < 3)) {
      (**(int (***)())(*param_1 + 0x3c))(param_1);
      iVar3 = fn_82CEAC20();
      *(int *)(param_1[7] + 0x24) = iVar3 - param_4;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
