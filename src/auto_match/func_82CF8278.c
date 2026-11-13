extern unsigned int *auStack_130;
extern int fn_82CE4118();
extern int fn_82CF7C08();
extern int fn_82CFBB60();
extern unsigned int uStack_138;
extern unsigned int uStack_13c;
extern unsigned int uStack_140;


void fn_82CF8278(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 in_r0;
  __int64 lVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  struct { unsigned int first; unsigned int second; } stack_pair_140;

  unsigned int uStack_138;
  unsigned char auStack_130 [272];
  
  if ((*(unsigned int *)(*(int *)(param_1 + 0x44) + 4) & 0x7fffffff) != 0) {
    (**(int (***)())(param_1 + 0x3c))(0xffffffff82133868,*(unsigned int *)(param_1 + 0x40));
    piVar5 = *(int **)(param_1 + 0x44);
    iVar7 = 0;
    if (-1 < piVar5[2]) {
      piVar6 = (int *)*piVar5;
      do {
        if (*piVar6 != -1) break;
        iVar7 = iVar7 + 1;
        piVar6 = piVar6 + 4;
      } while (iVar7 <= piVar5[2]);
    }
    if (iVar7 <= piVar5[2]) {
      do {
        iVar1 = *piVar5;
        iVar4 = iVar1 + iVar7 * 0x10;
        stack_pair_140.first = *(unsigned int *)(iVar4 + 4);
        stack_pair_140.second = *(unsigned int *)(iVar4 + 8);
        uStack_138 = *(unsigned int *)(iVar4 + 0xc);
        fn_82CF7C08(param_1,0xffffffff82133854,*(unsigned int *)(iVar1 + iVar7 * 0x10),&stack_pair_140.first,
                      stack_pair_140.first,iVar1);
        piVar5 = *(int **)(param_1 + 0x44);
        iVar7 = iVar7 + 1;
        if (iVar7 <= piVar5[2]) {
          piVar6 = (int *)(iVar7 * 0x10 + *piVar5);
          do {
            if (*piVar6 != -1) break;
            iVar7 = iVar7 + 1;
            piVar6 = piVar6 + 4;
          } while (iVar7 <= piVar5[2]);
        }
      } while (iVar7 <= piVar5[2]);
    }
    fn_82CFBB60(auStack_130,0x100,0xffffffff82133840,piVar5[1] & 0x7fffffff);
    (**(int (***)())(param_1 + 0x3c))(auStack_130,*(unsigned int *)(param_1 + 0x40));
    (**(int (***)())(param_1 + 0x3c))(0xffffffff82133780,*(unsigned int *)(param_1 + 0x40));
    trapWord(0x1f,in_r0,0x16);
  }
  *(unsigned int *)(param_1 + 0xc) = 0;
  if ((*(unsigned int *)(param_1 + 0x10) & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(param_1 + 0x14) + 0x10))
              (*(int **)(param_1 + 0x14),*(unsigned int *)(param_1 + 8),
               *(unsigned int *)(param_1 + 0x10) & 0x3fffffff,0x10);
  }
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(unsigned int *)(param_1 + 0x10) = 0x80000000;
  piVar5 = *(int **)(param_1 + 0x44);
  piVar6 = *(int **)(param_1 + 0x34);
  lVar3 = (unsigned __int64)(unsigned int)piVar5[2] + 1;
  if (lVar3 != 0) {
    iVar7 = 0;
    do {
      *(unsigned int *)(iVar7 + *piVar5) = 0xffffffff;
      iVar7 = iVar7 + 0x10;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  uVar2 = piVar5[1];
  piVar5[1] = uVar2 & 0x80000000;
  if ((uVar2 & 0x80000000) == 0) {
    (**(int (***)())(*piVar6 + 8))(piVar6,*piVar5,((unsigned __int64)(unsigned int)piVar5[2] + 1 & 0xfffffff) << 4);
  }
  (**(int (***)())(**(int **)(param_1 + 0x38) + 8))
            (*(int **)(param_1 + 0x38),*(unsigned int *)(param_1 + 0x44),0xc);
  fn_82CE4118(*(unsigned int *)(param_1 + 4));
  return;
}

