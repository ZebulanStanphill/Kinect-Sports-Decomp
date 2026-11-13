typedef unsigned char bool;
extern int fn_82F085F8();
extern int fn_82F08690();
extern unsigned int lbl_8324DBB0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


bool fn_82F08E88(int param_1,short *param_2,short *param_3,int param_4,int *param_5,
                  unsigned int *param_6,__int64 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  int *piVar9;
  unsigned int *puStack0000003c;
  int in_stack_00000054;
  unsigned int in_stack_0000005c;
  unsigned int in_stack_00000064;
  int in_stack_0000006c;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned int uStack_a8;
  unsigned int uStack_a4;
  
  iVar6 = *(int *)(param_1 + 0x6d24) + in_stack_00000054 * 0x34;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a4 = *(unsigned int *)(iVar6 + 0x24);
  iVar1 = *(int *)(iVar6 + 0x2c);
  iVar2 = *(int *)(iVar6 + 0x14);
  iVar5 = *(int *)(iVar6 + 0x18);
  sVar7 = 0;
  iVar3 = *(int *)(iVar6 + 0x1c);
  iVar8 = 0;
  uVar4 = *(unsigned int *)(iVar6 + 0x20);
  if (((*(int *)(param_1 + 0x7b2c) != 0) && (-1 < in_stack_0000006c)) && (in_stack_0000006c < 4)) {
    uStack_ac = 0;
    puStack0000003c = param_6;
    fn_82F085F8(param_1,*(int *)(param_1 + 0x7b2c),in_stack_0000005c,in_stack_00000064,
                      in_stack_0000006c,&uStack_b0);
    fn_82F08690(param_1,*(unsigned int *)(param_1 + 0x7b2c),in_stack_0000005c,in_stack_00000064,
                  in_stack_0000006c,param_7,&uStack_a8,&uStack_ac);
    param_6 = puStack0000003c;
  }
  *param_3 = 0;
  piVar9 = param_5;
  if (0 < (int)param_7) {
    do {
      if ((unsigned int)(*(short *)(*piVar9 * 2 + param_4) + iVar5) < uVar4) {
        sVar7 = sVar7 + 1;
      }
      else {
        param_2[*param_3 + 1] = sVar7;
        sVar7 = 0;
        *param_3 = *param_3 + 2;
      }
      param_7 = param_7 + -1;
      piVar9 = piVar9 + 1;
    } while (param_7 != 0);
  }
  iVar5 = 0;
  if (0 < *param_3) {
    do {
      sVar7 = *(short *)(param_5[param_2[1] + iVar8] * 2 + param_4);
      iVar6 = (int)sVar7;
      if (uStack_a4 < (unsigned int)(iVar6 + iVar3)) {
        if (iVar6 < 0) {
          *param_2 = -*(short *)(&lbl_8324DBB0 + ((iVar2 - sVar7) * iVar1 >> 0xe) * 2);
        }
        else {
          *param_2 = *(short *)(&lbl_8324DBB0 + ((sVar7 + iVar2) * iVar1 >> 0xe) * 2);
        }
      }
      else if (iVar6 < 0) {
        *param_2 = -1;
      }
      else {
        *param_2 = 1;
      }
      iVar8 = param_2[1] + iVar8 + 1;
      iVar5 = iVar5 + 2;
      param_2 = param_2 + 2;
    } while (iVar5 < *param_3);
  }
  *param_6 = 0;
  return *param_3 != 0;
}

