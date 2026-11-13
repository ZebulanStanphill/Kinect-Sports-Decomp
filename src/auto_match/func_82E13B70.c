extern int fn_82CE4040();
extern int fn_82CE5410();
extern int fn_82CFBBF0();
extern int fn_82D000A0();
extern int fn_82D001D8();
extern int fn_82D002F0();
extern int fn_82D00310();
extern int fn_82D00450();
extern int fn_82E0E658();
extern int fn_82E12FE0();
extern int fn_82CE5410();
extern int fn_82E14240();
extern int fn_82E1BC40();
extern int iRam831d0ea0;
extern unsigned int iStack_74;
extern unsigned int iStack_88;
extern unsigned int *lbl_8323FD9C;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_80;
extern unsigned int uStack_84;


/* WARNING: Removing unreachable block (ram,0x82e13e58) */

int * fn_82E13B70(__int64 param_1,unsigned __int64 param_2)

{
  int iVar3;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  char acStack_90;
  int *piStack_8c;
  struct { int first; unsigned int second; } stack_pair_88;

  unsigned int uStack_80;
  struct { unsigned int first; int second; } stack_pair_78;

  unsigned int uStack_70;

  lVar8 = param_1 + 0x14;
  iVar3 = fn_82D00310(lVar8,param_2,&piStack_8c);
  piVar4 = piStack_8c;
  if (iVar3 != 0) {
    uVar1 = fn_82E0E658();
    uVar1 = fn_82D001D8(lVar8,uVar1);
    fn_82D002F0(&acStack_90,lVar8,uVar1);
    if (acStack_90 == '\0') {
      uVar1 = (**(int (***)())(*lbl_8323FD9C + 0x10))();
      fn_82CE4040();
      uVar2 = fn_82E0E658();
      fn_82D000A0(lVar8,uVar2,uVar1);
    }
    piVar4 = (int *)0x0;
    piStack_8c = (int *)0x0;
    uVar1 = fn_82E0E658();
    iVar3 = fn_82CFBBF0(param_2,uVar1);
    if (iVar3 == 0) {
      fn_82E14240(lVar8,param_2,&piStack_8c);
      piVar4 = piStack_8c;
    }
    else {
      stack_pair_88.first = 0;
      stack_pair_88.second = 0;
      uStack_80 = 0x80000000;
      uVar1 = fn_82E0E658();
      iVar3 = fn_82CE5410(param_1,param_2,uVar1,&stack_pair_88.first);
      if (iVar3 == 1) {
        iVar3 = fn_82CE5410();
        stack_pair_88.second = 0;
        if ((uStack_80 & 0x80000000) == 0) {
          (**(int (***)())(**(int **)(iVar3 + 0xc) + 0x10))
                    (*(int **)(iVar3 + 0xc),stack_pair_88.first,uStack_80 & 0x3fffffff,4);
        }
        piVar4 = (int *)0x0;
      }
      else {
        uStack_70 = 0;
        piVar7 = (int *)0x831d0ea0;
        piVar5 = piVar7;
        iVar3 = iRam831d0ea0;
        while (iVar3 != 0) {
          piVar5 = piVar5 + 1;
          uStack_70 = uStack_70 + 1;
          iVar3 = *piVar5;
        }
        stack_pair_78.second = 0;
        iVar3 = iRam831d0ea0;
        while (iVar3 != 0) {
          piVar7 = piVar7 + 1;
          stack_pair_78.second = stack_pair_78.second + 1;
          iVar3 = *piVar7;
        }
        uStack_70 = uStack_70 | 0x80000000;
        stack_pair_78.first = 0x831d0ea0;
        uVar9 = (unsigned __int64)stack_pair_88.second - 1;
        if (-1 < (__int64)uVar9) {
          lVar10 = (uVar9 & 0x3fffffff) << 2;
          do {
            iVar3 = (int)lVar10;
            uVar1 = fn_82D00450(lVar8,*(unsigned int *)(*(int *)(iVar3 + stack_pair_88.first) + 4),0);
            piVar4 = (int *)fn_82D00450(lVar8,**(unsigned int **)(iVar3 + stack_pair_88.first),0);
            if (piVar4 == (int *)0x0) {
              piVar5 = (int *)fn_82E12FE0(**(unsigned int **)(iVar3 + stack_pair_88.first),&stack_pair_78.first);
              iVar6 = fn_82CE5410();
              iVar6 = (**(int (***)())(**(int **)(iVar6 + 0x10) + 4))(*(int **)(iVar6 + 0x10),0x4c);
              *(unsigned short *)(iVar6 + 4) = 0x4c;
              piVar4 = (int *)fn_82E1BC40(iVar6,**(unsigned int **)
                                                        (*(int *)(iVar3 + stack_pair_88.first) + 8),uVar1);
              iVar6 = *piVar4;
              uVar1 = (**(int (***)())(*piVar5 + 0xc))(piVar5);
              (**(int (***)())(iVar6 + 0x18))(piVar4,uVar1);
              (**(int (***)())(*piVar4 + 0x24))(piVar4,piVar5);
              uVar1 = (**(int (***)())(*piVar4 + 0xc))(piVar4);
              fn_82D000A0(lVar8,uVar1,piVar4);
            }
            iVar3 = fn_82CFBBF0(**(unsigned int **)(iVar3 + stack_pair_88.first),param_2);
            if (iVar3 == 0) break;
            uVar9 = uVar9 - 1;
            lVar10 = lVar10 + -4;
          } while (-1 < (__int64)uVar9);
        }
        fn_82CE5410();
        iVar3 = fn_82CE5410();
        stack_pair_88.second = 0;
        if ((uStack_80 & 0x80000000) == 0) {
          (**(int (***)())(**(int **)(iVar3 + 0xc) + 0x10))
                    (*(int **)(iVar3 + 0xc),stack_pair_88.first,uStack_80 & 0x3fffffff,4);
        }
      }
    }
  }
  return piVar4;
}
