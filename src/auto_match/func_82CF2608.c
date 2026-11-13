typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_d0;
extern int fn_82BA02A8();
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CEA160();
extern int fn_82CEA2F0();
extern int fn_82CEA4B8();
extern int fn_82CEAB00();
extern int fn_82CF1548();
extern int fn_82CFBC28();
extern unsigned int iStack_bc;
extern unsigned int iStack_c0;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_c8;


void fn_82CF2608(double param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,int *param_5,
                  int param_6,__int64 param_7,int param_8,unsigned int param_9,unsigned __int64 param_10)

{
  unsigned int uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  unsigned int *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  unsigned __int64 uVar11;
  int iVar12;
  __int64 lVar13;
  double dVar14;
  unsigned int in_stack_00000064;
  unsigned int auStack_d0 [2];
  unsigned __int64 uStack_c8;
  struct { int first; int second; } stack_pair_c0;

  unsigned int uStack_b8;
  struct { unsigned int first; unsigned int second; } stack_pair_b0;

  unsigned int uStack_a8;

  stack_pair_b0.first = 0;
  stack_pair_b0.second = 0;
  uStack_a8 = 0xffffffff;
  iVar3 = fn_82CE5410();
  fn_82CEAB00(&stack_pair_b0.first,*(unsigned int *)(iVar3 + 0x10),0);
  iVar9 = (int)param_10;
  uStack_c8 = (unsigned __int64)iVar9;
  stack_pair_c0.first = 0;
  stack_pair_c0.second = 0;
  uStack_b8 = 0x80000000;
  dVar14 = (double)(float)(param_1 / (double)(__int64)uStack_c8);
  iVar3 = fn_82CE5410();
  if ((int)(uStack_b8 & 0x3fffffff) < iVar9) {
    fn_82CE6310(*(unsigned int *)(iVar3 + 0x10),&stack_pair_c0.first,param_10,4);
  }
  if (0 < *(int *)(*(int *)(param_4 * 4 + *param_5) + 0x34)) {
    stack_pair_c0.second = 0;
    fn_82CF1548(param_2,dVar14,*(unsigned int *)(param_4 * 4 + *param_5));
    iVar3 = stack_pair_c0.second;
    iVar8 = 0;
    if (0 < stack_pair_c0.second) {
      iVar10 = 0;
      do {
        if (iVar9 <= iVar8) break;
        uVar11 = 0xffffffffffffffff;
        iVar6 = *(int *)(iVar10 + stack_pair_c0.first);
        if (iVar6 != 0) {
          for (; iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x48)) {
            uVar1 = *(unsigned int *)(iVar6 + 0x4c);
            iVar4 = fn_82CEA2F0(&stack_pair_b0.first,uVar1,&uStack_c8);
            if (iVar4 == 0) {
              uVar11 = uStack_c8 >> 0x20;
              break;
            }
            iVar4 = fn_82CEA2F0(in_stack_00000064,uVar1,auStack_d0);
            if (iVar4 == 0) {
              uVar11 = (unsigned __int64)auStack_d0[0];
            }
            else {
              bVar2 = false;
              iVar4 = 0;
              if (0 < *(int *)(param_8 + 0xc)) {
                iVar12 = 0;
                do {
                  iVar5 = fn_82CFBC28(*(unsigned int *)(*(int *)(param_8 + 8) + iVar12) & 0xfffffffe,uVar1)
                  ;
                  if (iVar5 == 0) {
                    bVar2 = true;
                    uVar11 = (unsigned __int64)*(unsigned int *)(iVar4 * 8 + *(int *)(param_8 + 8) + 4);
                    break;
                  }
                  iVar4 = iVar4 + 1;
                  iVar12 = iVar12 + 8;
                } while (iVar4 < *(int *)(param_8 + 0xc));
              }
              if (bVar2) {
                iVar6 = fn_82CE5410();
                fn_82CEA160(&stack_pair_b0.first,*(unsigned int *)(iVar6 + 0x10),uVar1,uVar11);
                break;
              }
              iVar4 = fn_82CE5410();
              fn_82CEA160(in_stack_00000064,*(unsigned int *)(iVar4 + 0x10),uVar1,uVar11);
            }
          }
        }
        if (0 < (int)param_7) {
          puVar7 = (unsigned int *)(iVar10 + (param_9 & 0x3fffffff) * -4 + param_6);
          lVar13 = param_7;
          do {
            puVar7 = puVar7 + param_9;
            *puVar7 = (int)uVar11;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
        iVar8 = iVar8 + 1;
        iVar10 = iVar10 + 4;
      } while (iVar8 < iVar3);
    }
  }
  iVar3 = fn_82CE5410();
  stack_pair_c0.second = 0;
  if ((uStack_b8 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar3 + 0x10) + 0x10))
              (*(int **)(iVar3 + 0x10),stack_pair_c0.first,uStack_b8 & 0x3fffffff,4);
  }
  stack_pair_c0.first = 0;
  uStack_b8 = 0x80000000;
  iVar3 = fn_82CE5410();
  fn_82CEA4B8(&stack_pair_b0.first,*(unsigned int *)(iVar3 + 0x10));
  fn_82BA02A8(&stack_pair_b0.first);
  return;
}
