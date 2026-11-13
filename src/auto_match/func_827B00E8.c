extern int fn_8267BE38();
extern int fn_827AF558();
extern int fn_827AFDE0();
extern int fn_827AFFE0();
extern unsigned int iStack_50;
extern unsigned int iStack_5c;
extern unsigned int iStack_70;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;


void fn_827B00E8(int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  unsigned __int64 uVar8;
  int iVar9;
  unsigned int uVar10;
  struct { int first; unsigned int second; } stack_pair_70;

  unsigned int uStack_68;
  struct { unsigned int first; int second; } stack_pair_60;

  unsigned int uStack_58;
  unsigned int uStack_54;
  int iStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned char uStack_3c;

  iVar9 = 0;
  uStack_68 = 0;
  uVar4 = 0;
  stack_pair_70.first = 0;
  uVar10 = param_2[1] + *param_2;
  stack_pair_70.second = 0;
  uVar8 = 0;
  iVar2 = stack_pair_70.first;
  iVar3 = stack_pair_70.first;
  if (param_1[1] != 0) {
    do {
      uVar5 = *param_2;
      puVar7 = (unsigned int *)(iVar9 + *param_1);
      uVar1 = *puVar7;
      uVar6 = puVar7[1] + uVar1;
      if ((uVar1 < uVar5) && (uVar5 < uVar6)) {
        if (uVar10 < uVar6) {
          uStack_58 = puVar7[2];
          stack_pair_60.second = uVar6 - uVar10;
          uStack_4c = puVar7[5];
          puVar7[1] = uVar5 - uVar1;
          puVar7[4] = uVar5 - uVar1;
          uStack_40 = puVar7[8];
          uStack_3c = *(unsigned char *)(puVar7 + 9);
          uStack_48 = puVar7[6];
          uStack_44 = puVar7[7];
          stack_pair_60.first = uVar10;
          uStack_54 = uVar10;
          iStack_50 = stack_pair_60.second;
          fn_827AF558(&stack_pair_70.first,&stack_pair_60.first);
        }
        else {
          uVar5 = (puVar7[1] - uVar6) + uVar5;
          puVar7[1] = uVar5;
          puVar7[4] = uVar5;
        }
LAB_827b0228:
        *(unsigned char *)((int)param_1 + 0x19) = 0;
        *(unsigned char *)(param_1 + 6) = 0;
      }
      else if ((uVar5 <= uVar1) && (uVar1 < uVar10)) {
        if (uVar10 < uVar6) {
          uVar6 = *puVar7 + (uVar10 - uVar1);
          uVar5 = puVar7[1] - (uVar10 - uVar1);
          *puVar7 = uVar6;
          puVar7[3] = uVar6;
          puVar7[1] = uVar5;
          puVar7[4] = uVar5;
        }
        else {
          fn_827AFFE0(param_1,uVar8);
          uVar8 = uVar8 - 1;
          iVar9 = iVar9 + -0x28;
        }
        goto LAB_827b0228;
      }
      uVar8 = uVar8 + 1;
      iVar9 = iVar9 + 0x28;
    } while ((uVar8 & 0xffffffff) < (unsigned __int64)(unsigned int)param_1[1]);
    uVar4 = (unsigned __int64)stack_pair_70.second;
    iVar2 = stack_pair_70.first;
    iVar3 = stack_pair_70.first;
  }
  for (; iVar9 = stack_pair_70.first, stack_pair_70.first = iVar3, uVar4 != 0; uVar4 = uVar4 - 1) {
    fn_827AFDE0(param_1,iVar2);
    iVar2 = iVar2 + 0x28;
    iVar3 = stack_pair_70.first;
    stack_pair_70.first = iVar9;
  }
  fn_8267BE38(iVar9);
  return;
}
