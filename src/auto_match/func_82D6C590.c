#define true 1
extern unsigned int *auStack_250;
extern unsigned int *auStack_270;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern unsigned int iStack_260;
extern unsigned int uStack_258;
extern unsigned int uStack_25c;


void fn_82D6C590(int param_1,unsigned int *param_2,int *param_3,int *param_4,unsigned __int64 param_5)

{
  int *piVar1;
  int iVar2;
  int *piVar4;
  unsigned __int64 uVar3;
  char *pcVar5;
  int iVar6;
  unsigned int uVar7;
  int iVar8;
  unsigned int *puVar9;
  int iVar10;
  unsigned int *puVar11;
  __int64 lVar12;
  unsigned char auStack_270 [16];
  struct { int first; unsigned int second; } stack_pair_260;

  unsigned int uStack_258;
  unsigned int *puStack_254;
  unsigned char auStack_250 [512];
  
  uStack_258 = param_2[2];
  puStack_254 = param_2;
  piVar4 = (int *)(**(int (***)())(*(int *)*param_2 + 0x10))();
  uVar3 = (**(int (***)())(*piVar4 + 8))();
  iVar6 = (int)uVar3;
  do {
    if (iVar6 == -1) {
      return;
    }
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      puVar9 = *(unsigned int **)(param_1 + 0xc);
      do {
        if ((unsigned __int64)*puVar9 == (uVar3 & 0xffffffff)) goto LAB_82d6c624;
        iVar6 = iVar6 + 1;
        puVar9 = puVar9 + 2;
      } while (iVar6 < *(int *)(param_1 + 0x10));
    }
    iVar6 = -1;
LAB_82d6c624:
    pcVar5 = (char *)(**(int (***)())(*(int *)(param_4[3] + 0xc) + 4))
                               (auStack_270,param_4[3] + 0xc,param_4,param_3,param_2,piVar4,uVar3);
    if (*pcVar5 == '\0') {
      if (iVar6 != -1) {
        piVar1 = *(int **)(iVar6 * 8 + *(int *)(param_1 + 0xc) + 4);
        (**(int (***)())(*piVar1 + 0x1c))(piVar1,param_5);
        iVar10 = *(int *)(param_1 + 0x10) + -1;
        *(int *)(param_1 + 0x10) = iVar10;
        if (iVar10 != iVar6) {
          puVar11 = (unsigned int *)(*(int *)(param_1 + 0xc) + iVar6 * 8);
          iVar6 = (iVar10 * 8 + *(int *)(param_1 + 0xc)) - (int)puVar11;
          lVar12 = 2;
          do {
            *puVar11 = *(unsigned int *)(iVar6 + (int)puVar11);
            puVar11 = puVar11 + 1;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
      }
    }
    else {
      stack_pair_260.first = (**(int (***)())(*piVar4 + 0x14))(piVar4,uVar3,auStack_250);
      uVar7 = (unsigned int)uVar3;
      stack_pair_260.second = uVar7;
      if (iVar6 == -1) {
        iVar6 = fn_82CE5410();
        if (*(unsigned int *)(param_1 + 0x10) == (*(unsigned int *)(param_1 + 0x14) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(unsigned int *)(iVar6 + 0x10),(int *)(param_1 + 0xc),8);
        }
        iVar6 = *(int *)(param_1 + 0xc);
        iVar2 = *(int *)(param_1 + 0x10) * 8;
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        *(unsigned int *)(iVar2 + iVar6) = uVar7;
        iVar10 = *param_4;
        iVar8 = iVar10 + 0x5a0;
        if (param_4[5] == 0) {
          iVar8 = iVar10 + 0x1a0;
        }
        uVar7 = (**(int (***)())((unsigned int)*(unsigned char *)(*(int *)(stack_pair_260.first + 0xc) * 0x20 + iVar8 +
                                            *(int *)(*param_3 + 0xc)) * 0x14 + iVar10 + 0x9a0))
                          (&stack_pair_260.first,param_3,param_4,*(unsigned int *)(param_1 + 8));
        *(unsigned int *)(iVar2 + iVar6 + 4) = uVar7;
      }
      else {
        piVar1 = *(int **)(iVar6 * 8 + *(int *)(param_1 + 0xc) + 4);
        (**(int (***)())(*piVar1 + 0x20))(piVar1,&stack_pair_260.first,param_3,param_4,param_5);
      }
    }
    uVar3 = (**(int (***)())(*piVar4 + 0xc))(piVar4,uVar3);
    iVar6 = (int)uVar3;
  } while( true );
}

