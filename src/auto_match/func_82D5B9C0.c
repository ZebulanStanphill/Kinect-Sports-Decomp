extern unsigned int *auStack_260;
extern unsigned int iStack_268;
extern unsigned int iStack_270;
extern unsigned int iStack_278;
extern unsigned int iStack_280;
extern unsigned int uStack_26c;
extern unsigned int uStack_27c;


unsigned __int64
fn_82D5B9C0(int param_1,int *param_2,int *param_3,unsigned __int64 param_4,unsigned __int64 param_5,
             unsigned char *param_6,unsigned __int64 param_7)

{
  unsigned char bVar1;
  unsigned char bVar2;
  int iVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned char *pbVar6;
  unsigned int uVar7;
  int *piVar8;
  int *piVar9;
  struct { int first; unsigned int second; } stack_pair_280;

  int iStack_278;
  int *piStack_274;
  struct { int first; unsigned int second; } stack_pair_270;

  int iStack_268;
  int *piStack_264;
  unsigned char auStack_260 [544];

  iVar3 = *param_2;
  piVar8 = param_2;
  if (*(int *)(iVar3 + 0xc) == 0x17) {
    iVar5 = 1;
    bVar1 = *param_6;
    pbVar6 = param_6;
    if (1 < param_6[8]) {
      do {
        if ((unsigned int)pbVar6[2] != (unsigned int)bVar1) goto LAB_82d5bb2c;
        iVar5 = iVar5 + 1;
        pbVar6 = pbVar6 + 2;
      } while (iVar5 < (int)(unsigned int)param_6[8]);
    }
    stack_pair_270.first = (**(int (***)())(*(int *)(iVar3 + 0x14) + 0x14))(iVar3 + 0x14,bVar1,auStack_260);
    iStack_268 = param_2[2];
    piVar8 = &stack_pair_270.first;
    stack_pair_270.second = (unsigned int)bVar1;
    piStack_264 = param_2;
  }
  iVar3 = *param_3;
  piVar9 = param_3;
  if (*(int *)(iVar3 + 0xc) == 0x17) {
    bVar1 = param_6[8];
    uVar7 = bVar1 + 1;
    bVar2 = param_6[(unsigned int)bVar1 * 2];
    if (uVar7 < (unsigned int)param_6[9] + (unsigned int)bVar1) {
      pbVar6 = param_6 + uVar7 * 2;
      do {
        if ((unsigned int)*pbVar6 != (unsigned int)bVar2) {
LAB_82d5bb2c:
          *(unsigned char *)(param_1 + 0x10) = 1;
          return 0xffffffffffffffff;
        }
        uVar7 = uVar7 + 1;
        pbVar6 = pbVar6 + 2;
      } while ((int)uVar7 < (int)((unsigned int)param_6[9] + (unsigned int)bVar1));
    }
    stack_pair_280.first = (**(int (***)())(*(int *)(iVar3 + 0x14) + 0x14))(iVar3 + 0x14,bVar2,auStack_260);
    iStack_278 = param_3[2];
    piVar9 = &stack_pair_280.first;
    stack_pair_280.second = (unsigned int)bVar2;
    piStack_274 = param_3;
  }
  uVar4 = (**(int (***)())(**(int **)(param_1 + 0xc) + 0xc))
                    (*(int **)(param_1 + 0xc),piVar8,piVar9,param_4,param_5,param_6,param_7);
  return uVar4;
}
