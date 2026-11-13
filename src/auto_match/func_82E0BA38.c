extern int fn_82CE4040();
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CEAC20();
extern int fn_82E09F28();
extern int fn_82E0A398();
extern int fn_82E0A430();
extern int fn_82E0AAF0();
extern int fn_82E0ADB8();
extern int fn_82E129F0();
extern int fn_82E17418();
extern int fn_82E17540();
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int uStack_68;


int fn_82E0BA38(int *param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int iVar5;
  int *piVar6;
  unsigned __int64 uVar4;
  int *piVar7;
  int iVar8;
  struct { int first; int second; } stack_pair_70;

  unsigned int uStack_68;
  
  piVar7 = param_1 + 0x1f;
  iVar5 = param_1[0x1f];
  if (iVar5 == 0) {
    (**(int (***)())(*param_1 + 0x28))(param_1);
    uVar3 = fn_82E0A398();
    iVar5 = fn_82CE5410();
    iVar5 = (**(int (***)())(**(int **)(iVar5 + 0x10) + 4))(*(int **)(iVar5 + 0x10),0x20);
    *(unsigned short *)(iVar5 + 4) = 0x20;
    iVar5 = fn_82E17540(iVar5,0);
    if (iVar5 != 0) {
      fn_82CE4040();
    }
    if (*piVar7 != 0) {
      fn_82CE4118();
    }
    *piVar7 = iVar5;
    fn_82CE4118(iVar5);
    if ((param_1[0x1e] == 0) || (*(int *)(param_1[0x1e] + 0x38) == 0)) {
      stack_pair_70.first = 0;
      stack_pair_70.second = 0;
      uStack_68 = 0x80000000;
      fn_82E0ADB8(param_1,&stack_pair_70.first);
      if (0 < stack_pair_70.second) {
        iVar5 = 0;
        iVar8 = 0;
        do {
          uVar1 = *(unsigned int *)(iVar8 + stack_pair_70.first);
          uVar4 = (**(int (***)())(*param_1 + 0x28))(param_1);
          fn_82E129F0(uVar1,*(unsigned int *)(param_1[7] + 0xc),uVar4,param_1 + 2);
          piVar6 = (int *)*piVar7;
          iVar2 = *piVar6;
          uVar4 = fn_82CEAC20(uVar1);
          (**(int (***)())(iVar2 + 0x1c))(piVar6,uVar1,uVar4);
          iVar5 = iVar5 + 1;
          iVar8 = iVar8 + 0xc;
        } while (iVar5 < stack_pair_70.second);
        fn_82E0A430(piVar7,*(unsigned int *)(param_1[7] + 0xc));
      }
      iVar5 = fn_82CE5410();
      stack_pair_70.second = 0;
      if ((uStack_68 & 0x80000000) == 0) {
        (**(int (***)())(**(int **)(iVar5 + 0x10) + 0x10))
                  (*(int **)(iVar5 + 0x10),stack_pair_70.first,uStack_68 & 0x3fffffff,0xc);
      }
      stack_pair_70.first = 0;
      uStack_68 = 0x80000000;
    }
    else {
      fn_82E17418(*piVar7,0);
      piVar6 = (int *)(**(int (***)())(*param_1 + 0x1c))(param_1);
      iVar5 = 0;
      if (0 < piVar6[1]) {
        iVar8 = 0;
        do {
          uVar1 = *(unsigned int *)(*piVar6 + iVar8 + 4);
          fn_82E09F28(*piVar7,uVar1);
          fn_82E0AAF0(*piVar7,*(unsigned int *)(*piVar6 + iVar8),uVar1,1);
          iVar5 = iVar5 + 1;
          iVar8 = iVar8 + 8;
        } while (iVar5 < piVar6[1]);
      }
    }
    fn_82E17418(*piVar7,uVar3);
    iVar5 = *piVar7;
  }
  return iVar5;
}

