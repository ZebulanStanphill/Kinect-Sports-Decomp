extern unsigned int *auStack_90;
extern int fn_82CE4040();
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D9A040();
extern int fn_82D9A2C8();
extern int fn_82DA6530();
extern int fn_82DA6A58();
extern int fn_82DA6BA8();
extern int fn_82DADB30();
extern int fn_83088518();
extern unsigned int iStack_54;
extern unsigned int iStack_60;
extern unsigned int iStack_64;
extern unsigned int iStack_70;
extern unsigned int iStack_8c;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_88;


void fn_82D86288(int param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned int *puVar3;
  int iVar4;
  int iVar5;
  __int64 lVar6;
  unsigned int uVar7;
  unsigned char auStack_90;
  int iStack_8c;
  unsigned short uStack_88;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  struct { int first; unsigned int second; } stack_pair_70;

  unsigned int uStack_68;
  int iStack_64;
  struct { int first; unsigned int second; } stack_pair_60;

  unsigned int uStack_58;
  int iStack_54;

  if ((unsigned __int64)*(unsigned int *)(param_1 + 0x98) + (unsigned __int64)*(unsigned int *)(param_1 + 0x94) == 0) {
    stack_pair_60.first = 0;
    *(unsigned int *)(param_1 + 0x94) = *(unsigned int *)(param_1 + 0x94) + 1;
    stack_pair_60.second = 0;
    uStack_58 = 0x80000000;
    piVar2 = (int *)fn_82CE5410();
    uVar1 = (unsigned int)param_3;
    uVar7 = uVar1 | 0x80000000;
    stack_pair_60.first = *piVar2;
    *piVar2 = ((int)((param_3 & 0xffffffff) << 2) + 0x7fU & 0xffffff80) + stack_pair_60.first;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = 0x80000000;
    uStack_58 = uVar7;
    iStack_54 = stack_pair_60.first;
    puVar3 = (unsigned int *)fn_82CE5410();
    uStack_80 = *puVar3;
    *puVar3 = ((int)((param_3 & 0xffffffff) << 5) + 0x7fU & 0xffffff80) + uStack_80;
    uStack_7c = uVar1;
    uStack_78 = uVar7;
    uStack_74 = uStack_80;
    stack_pair_60.second = uVar1;
    if (0 < (int)uVar1) {
      lVar6 = 0;
      iVar5 = 0;
      do {
        piVar2 = *(int **)(iVar5 + param_2);
        if (piVar2[6] == 0) {
          iVar4 = (**(int (***)())(*piVar2 + 0x10))(piVar2);
          piVar2[6] = iVar4;
        }
        piVar2[2] = param_1;
        *(int **)(iVar5 + stack_pair_60.first) = piVar2 + 9;
        (**(int (***)())(*piVar2 + 0x18))(piVar2,lVar6 + (unsigned __int64)uStack_80);
        fn_82D9A040(piVar2,lVar6 + (unsigned __int64)uStack_80);
        fn_82CE4040(piVar2);
        iVar4 = fn_82CE5410();
        if (*(unsigned int *)(param_1 + 0x118) == (*(unsigned int *)(param_1 + 0x11c) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(unsigned int *)(iVar4 + 0x10),(int *)(param_1 + 0x114),4);
        }
        *(int **)(*(int *)(param_1 + 0x118) * 4 + *(int *)(param_1 + 0x114)) = piVar2;
        *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + 1;
        fn_82DADB30(param_1,piVar2);
        fn_82D9A2C8(piVar2);
        param_3 = param_3 - 1;
        iVar5 = iVar5 + 4;
        lVar6 = lVar6 + 0x20;
      } while (param_3 != 0);
    }
    stack_pair_70.first = 0;
    stack_pair_70.second = 0;
    uStack_68 = 0x80000000;
    uVar1 = *(unsigned int *)(param_1 + 0x338);
    piVar2 = (int *)fn_82CE5410();
    uStack_68 = uVar1 | 0x80000000;
    stack_pair_70.first = *piVar2;
    *piVar2 = (uVar1 * 8 + 0x7f & 0xffffff80) + stack_pair_70.first;
    iStack_64 = stack_pair_70.first;
    (**(int (***)())(**(int **)(param_1 + 0x58) + 0x18))
              (*(int **)(param_1 + 0x58),&stack_pair_60.first,&uStack_80,&stack_pair_70.first);
    fn_83088518(*(unsigned int *)(param_1 + 100),stack_pair_70.first,stack_pair_70.second);
    lVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x94) - 1;
    *(int *)(param_1 + 0x94) = (int)lVar6;
    if ((lVar6 == 0) && (*(char *)(param_1 + 0x9c) == '\0')) {
      if (*(int *)(param_1 + 0x8c) != 0) {
        *(unsigned int *)(param_1 + 0x8c) = 0;
        fn_82DA6BA8(*(unsigned int *)(param_1 + 0x88));
      }
      if ((*(int *)(param_1 + 0xa4) == 1) && (*(int *)(param_1 + 0x90) != 0)) {
        *(unsigned int *)(param_1 + 0x90) = 0;
        fn_82DA6A58(*(unsigned int *)(param_1 + 0x88));
      }
    }
    iVar5 = iStack_64;
    stack_pair_70.second = -(unsigned int)(stack_pair_70.first != iStack_64) & stack_pair_70.second;
    piVar2 = (int *)fn_82CE5410();
    *piVar2 = iVar5;
    iVar5 = fn_82CE5410();
    stack_pair_70.second = 0;
    if ((uStack_68 & 0x80000000) == 0) {
      (**(int (***)())(**(int **)(iVar5 + 0x10) + 0x10))
                (*(int **)(iVar5 + 0x10),stack_pair_70.first,uStack_68 & 0x3fffffff);
    }
    uVar1 = uStack_74;
    stack_pair_70.first = 0;
    uStack_68 = 0x80000000;
    uStack_7c = -(unsigned int)(uStack_80 != uStack_74) & uStack_7c;
    puVar3 = (unsigned int *)fn_82CE5410();
    *puVar3 = uVar1;
    iVar5 = fn_82CE5410();
    uStack_7c = 0;
    if ((uStack_78 & 0x80000000) == 0) {
      (**(int (***)())(**(int **)(iVar5 + 0x10) + 0x10))
                (*(int **)(iVar5 + 0x10),uStack_80,uStack_78 & 0x3fffffff);
    }
    iVar5 = iStack_54;
    uStack_80 = 0;
    uStack_78 = 0x80000000;
    stack_pair_60.second = -(unsigned int)(stack_pair_60.first != iStack_54) & stack_pair_60.second;
    piVar2 = (int *)fn_82CE5410();
    *piVar2 = iVar5;
    iVar5 = fn_82CE5410();
    stack_pair_60.second = 0;
    if ((uStack_58 & 0x80000000) == 0) {
      (**(int (***)())(**(int **)(iVar5 + 0x10) + 0x10))
                (*(int **)(iVar5 + 0x10),stack_pair_60.first,uStack_58 & 0x3fffffff,4);
    }
  }
  else {
    uStack_88 = (unsigned short)param_3;
    auStack_90 = 0xf;
    iStack_8c = param_2;
    fn_82DA6530(*(unsigned int *)(param_1 + 0x88),&auStack_90);
  }
  return;
}
