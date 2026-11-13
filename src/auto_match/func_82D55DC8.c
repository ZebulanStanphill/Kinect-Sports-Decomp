extern unsigned int *auStack_250;
extern unsigned int *auStack_270;
extern int fn_82D74740();
extern unsigned int iStack_260;
extern unsigned int uStack_258;
extern unsigned int uStack_25c;


void fn_82D55DC8(int param_1,int *param_2,unsigned int *param_3,int *param_4,unsigned __int64 param_5)

{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  unsigned char auStack_270 [16];
  struct { int first; unsigned int second; } stack_pair_260;

  unsigned int uStack_258;
  unsigned int *puStack_254;
  unsigned char auStack_250 [512];
  
  piVar2 = (int *)(**(int (***)())(*(int *)*param_3 + 0x10))();
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    iVar9 = 0;
    do {
      stack_pair_260.first = (**(int (***)())(*piVar2 + 0x14))
                             (piVar2,*(unsigned int *)(iVar9 + *(int *)(param_1 + 0xc)),auStack_250);
      uStack_258 = param_3[2];
      puVar6 = (unsigned int *)(iVar9 + *(int *)(param_1 + 0xc));
      stack_pair_260.second = *puVar6;
      puStack_254 = param_3;
      pcVar3 = (char *)(**(int (***)())(*(int *)(param_4[3] + 0xc) + 4))
                                 (auStack_270,param_4[3] + 0xc,param_4,param_2,param_3,piVar2,
                                  *puVar6);
      iVar8 = iVar9 + *(int *)(param_1 + 0xc);
      if (*pcVar3 == '\0') {
        iVar4 = fn_82D74740();
        if (*(int *)(iVar8 + 8) != iVar4) {
          piVar1 = *(int **)(iVar9 + *(int *)(param_1 + 0xc) + 8);
          (**(int (***)())(*piVar1 + 0x1c))(piVar1,param_5);
          iVar8 = *(int *)(param_1 + 0xc);
          uVar5 = fn_82D74740();
          *(unsigned int *)(iVar9 + iVar8 + 8) = uVar5;
        }
      }
      else {
        iVar4 = fn_82D74740();
        if (*(int *)(iVar8 + 8) == iVar4) {
          iVar8 = *param_4;
          iVar4 = iVar8 + 0x5a0;
          if (param_4[5] == 0) {
            iVar4 = iVar8 + 0x1a0;
          }
          uVar5 = (**(int (***)())((unsigned int)*(unsigned char *)(*(int *)(*param_2 + 0xc) * 0x20 + iVar4 +
                                              *(int *)(stack_pair_260.first + 0xc)) * 0x14 + iVar8 + 0x9a0))
                            (param_2,&stack_pair_260.first,param_4,*(unsigned int *)(param_1 + 8));
          *(unsigned int *)(iVar9 + *(int *)(param_1 + 0xc) + 8) = uVar5;
        }
        else {
          piVar1 = *(int **)(iVar9 + *(int *)(param_1 + 0xc) + 8);
          (**(int (***)())(*piVar1 + 0x20))(piVar1,param_2,&stack_pair_260.first,param_4,param_5);
        }
      }
      iVar7 = iVar7 + 1;
      iVar9 = iVar9 + 0xc;
    } while (iVar7 < *(int *)(param_1 + 0x10));
  }
  return;
}

