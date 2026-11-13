extern unsigned int *auStack_270;
extern unsigned int iStack_278;
extern unsigned int iStack_280;
extern unsigned int iStack_288;
extern unsigned int iStack_290;
extern unsigned int uStack_27c;
extern unsigned int uStack_28c;


unsigned __int64
fn_82D5BB40(unsigned __int64 param_1,int param_2,int *param_3,int *param_4,unsigned __int64 param_5,
             unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8,unsigned char *param_9)

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
  unsigned int in_stack_00000054;
  int iStack_290;
  unsigned int uStack_28c;
  int iStack_288;
  int *piStack_284;
  struct { int first; unsigned int second; } stack_pair_280;

  int iStack_278;
  int *piStack_274;
  unsigned char auStack_270 [560];
  
  iVar3 = *param_3;
  piVar8 = param_3;
  if (*(int *)(iVar3 + 0xc) == 0x17) {
    iVar5 = 1;
    bVar1 = *param_9;
    pbVar6 = param_9;
    if (1 < param_9[8]) {
      do {
        if ((unsigned int)pbVar6[2] != (unsigned int)bVar1) goto LAB_82d5bccc;
        iVar5 = iVar5 + 1;
        pbVar6 = pbVar6 + 2;
      } while (iVar5 < (int)(unsigned int)param_9[8]);
    }
    stack_pair_280.first = (**(int (***)())(*(int *)(iVar3 + 0x14) + 0x14))(iVar3 + 0x14,bVar1,auStack_270);
    iStack_278 = param_3[2];
    piVar8 = &stack_pair_280.first;
    stack_pair_280.second = (unsigned int)bVar1;
    piStack_274 = param_3;
  }
  iVar3 = *param_4;
  piVar9 = param_4;
  if (*(int *)(iVar3 + 0xc) == 0x17) {
    bVar1 = param_9[8];
    uVar7 = bVar1 + 1;
    bVar2 = param_9[(unsigned int)bVar1 * 2];
    if (uVar7 < (unsigned int)param_9[9] + (unsigned int)bVar1) {
      pbVar6 = param_9 + uVar7 * 2;
      do {
        if ((unsigned int)*pbVar6 != (unsigned int)bVar2) {
LAB_82d5bccc:
          *(unsigned char *)(param_2 + 0x10) = 1;
          return 1;
        }
        uVar7 = uVar7 + 1;
        pbVar6 = pbVar6 + 2;
      } while ((int)uVar7 < (int)((unsigned int)param_9[9] + (unsigned int)bVar1));
    }
    iStack_290 = (**(int (***)())(*(int *)(iVar3 + 0x14) + 0x14))(iVar3 + 0x14,bVar2,auStack_270);
    iStack_288 = param_4[2];
    piVar9 = &iStack_290;
    uStack_28c = (unsigned int)bVar2;
    piStack_284 = param_4;
  }
  uVar4 = (**(int (***)())(**(int **)(param_2 + 0xc) + 0x1c))
                    (param_1,*(int **)(param_2 + 0xc),piVar8,piVar9,param_5,param_6,
                     in_stack_00000054,param_8,param_9);
  return uVar4;
}

