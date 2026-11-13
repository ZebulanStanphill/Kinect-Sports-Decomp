extern int fn_825A1198();
extern int fn_8262E510();
extern int fn_82818440();
extern int fn_82F64988();
extern int fn_82F66F28();
extern unsigned int iStack_58;
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int uStack_50;
extern unsigned int uStack_54;


unsigned __int64
fn_825A1048(int *param_1,char *param_2,unsigned short *param_3,unsigned __int64 param_4,int param_5)

{
  unsigned short uVar4;
  short *psVar2;
  unsigned __int64 uVar1;
  int iVar3;
  unsigned int uVar5;
  unsigned int *puVar6;
  char *pcVar7;
  char cVar8;
  char cVar9;
  struct { int first; int second; } stack_pair_60;

  int iStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  
  uStack_54 = 0;
  uStack_50 = 0;
  stack_pair_60.first = *(int *)(*param_1 + 0xc) + *param_1;
  stack_pair_60.second = stack_pair_60.first + 8;
  iStack_58 = (*(int *)(stack_pair_60.first + 4) + 1) * 6 + stack_pair_60.second;
  uVar4 = fn_82818440(param_2);
  iVar3 = 0;
  if (*(unsigned short *)(param_1 + 2) != 0) {
    puVar6 = (unsigned int *)param_1[1];
    do {
      if (uVar4 == *(unsigned short *)(puVar6 + 1)) {
        cVar8 = *param_2;
        cVar9 = *(char *)*puVar6;
        if (cVar8 == cVar9) {
          pcVar7 = param_2;
          do {
            pcVar7 = pcVar7 + 1;
            if (cVar8 == '\0') goto LAB_825a1124;
            cVar8 = *pcVar7;
            cVar9 = pcVar7[(int)*puVar6 - (int)param_2];
          } while (cVar8 == cVar9);
        }
        if (cVar8 == cVar9) {
LAB_825a1124:
          uVar4 = *(unsigned short *)(param_1[1] + iVar3 * 8 + 6);
          break;
        }
      }
      iVar3 = iVar3 + 1;
      puVar6 = puVar6 + 2;
    } while (iVar3 < (int)(unsigned int)*(unsigned short *)(param_1 + 2));
  }
  uVar5 = (unsigned int)uVar4;
  psVar2 = (short *)fn_8262E510(&stack_pair_60.first);
  if ((*psVar2 == 0) || (uVar5 == 0xffffffff)) {
    uVar1 = 0;
    *param_3 = 0;
  }
  else {
    fn_82F64988(param_3,param_4,psVar2);
    if ((param_5 != 0) && (iVar3 = fn_825A1198(), iVar3 != 0)) {
      fn_82F66F28(param_3,param_4);
    }
    uVar1 = 1;
  }
  return uVar1;
}

