extern int fn_82421E98();
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D40130();
extern int fn_82E05A40();
extern int fn_82E084C8();
extern unsigned int iStack_70;
extern unsigned int iStack_74;
extern unsigned int uStack_6c;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_82E05B78(int param_1,int param_2,int *param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  unsigned __int64 uVar9;
  int iVar10;
  struct { unsigned int first; unsigned int second; } stack_pair_80;

  unsigned int uStack_78;
  int iStack_74;
  int iStack_70;
  unsigned int uStack_6c;
  
  uVar9 = 0xffffffffffffffff;
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar10 = 0;
    do {
      iVar1 = *(int *)(param_2 + 4);
      if (param_3 != (int *)0x0) {
        uVar9 = 0;
        uVar2 = param_3[1];
        iVar6 = *(int *)(*(int *)(iVar10 + *(int *)(param_1 + 8)) + 0x18);
        if (0 < (int)uVar2) {
          piVar7 = (int *)*param_3;
          do {
            if (*piVar7 == iVar6) {
              if ((int)uVar9 != -1) goto LAB_82e05c54;
              break;
            }
            uVar9 = uVar9 + 1;
            piVar7 = piVar7 + 1;
          } while ((int)uVar9 < (int)uVar2);
        }
        iVar5 = fn_82CE5410();
        if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(unsigned int *)(iVar5 + 0x10),param_3,4);
        }
        *(int *)(param_3[1] * 4 + *param_3) = iVar6;
        param_3[1] = param_3[1] + 1;
        uVar9 = (unsigned __int64)uVar2;
      }
LAB_82e05c54:
      stack_pair_80.first = 0;
      stack_pair_80.second = 0;
      uStack_78 = 0x80000000;
      iStack_74 = 0;
      iStack_70 = 0;
      uStack_6c = 0x80000000;
      fn_82E084C8(*(unsigned int *)(iVar10 + *(int *)(param_1 + 8)),&stack_pair_80.first,uVar9);
      uVar4 = stack_pair_80.second;
      uVar3 = stack_pair_80.first;
      iVar6 = 0;
      if (0 < iStack_70) {
        iVar5 = 0;
        do {
          iVar6 = iVar6 + 1;
          *(int *)(iVar5 + iStack_74) = iVar1 + *(int *)(iVar5 + iStack_74);
          *(int *)(iVar5 + iStack_74 + 4) = iVar1 + *(int *)(iVar5 + iStack_74 + 4);
          *(int *)(iVar5 + iStack_74 + 8) = iVar1 + *(int *)(iVar5 + iStack_74 + 8);
          iVar5 = iVar5 + 0x10;
        } while (iVar6 < iStack_70);
      }
      iVar6 = fn_82CE5410();
      fn_82D40130(param_2,*(unsigned int *)(iVar6 + 0x10),iVar1,0,uVar3,uVar4);
      iVar6 = iStack_70;
      iVar1 = iStack_74;
      uVar3 = *(unsigned int *)(param_2 + 0x10);
      iVar5 = fn_82CE5410();
      fn_82E05A40(param_2 + 0xc,*(unsigned int *)(iVar5 + 0x10),uVar3,0,iVar1,iVar6);
      fn_82421E98(&stack_pair_80.first);
      iVar8 = iVar8 + 1;
      iVar10 = iVar10 + 4;
    } while (iVar8 < *(int *)(param_1 + 0xc));
  }
  return;
}

