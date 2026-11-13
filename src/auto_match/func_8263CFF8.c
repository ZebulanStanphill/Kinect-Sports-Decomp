extern int fn_8263CD40();
extern unsigned int iStack_a8;
extern unsigned int iStack_ac;
extern unsigned int iStack_b0;
extern unsigned int iStack_bc;
extern unsigned int iStack_c0;
extern unsigned int uStack_a4;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;


void fn_8263CFF8(unsigned __int64 param_1,unsigned __int64 param_2,__int64 param_3,__int64 param_4,
                  unsigned int param_5,unsigned int param_6,unsigned __int64 param_7,unsigned __int64 param_8,unsigned __int64 param_9)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  unsigned __int64 uVar12;
  int iVar13;
  int iVar14;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  struct { int first; int second; } stack_pair_c0;

  unsigned int uStack_b8;
  unsigned int uStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  unsigned int uStack_a4;
  int aiStack_a0 [8];
  
  uVar5 = (param_9 & 0xffffffff) >> 0x10 & 3;
  iVar11 = 1;
  if (uVar5 == 0) {
    iVar10 = 1;
  }
  else {
    iVar10 = 0;
    if (uVar5 != 1) {
      iVar11 = 0;
    }
  }
  uVar1 = 0x28 << iVar11;
  uVar6 = (unsigned __int64)uVar1;
  uVar2 = 8 << iVar10;
  uVar4 = (unsigned __int64)uVar2;
  uVar5 = (uVar6 + param_3) - 1;
  uVar12 = (uVar4 + param_4) - 1;
  iVar14 = ((int)uVar5 / (int)uVar1) * uVar1;
  iVar13 = ((int)param_5 / (int)uVar1) * uVar1;
  trapWord(6,uVar6,0);
  trapWord(6,uVar6,0);
  trapWord(6,uVar4,0);
  trapWord(6,uVar4,0);
  trapWord(5,uVar6 & ~(((uVar5 & 0x7fffffff) << 1 | (uVar5 & 0xffffffff) >> 0x1f) - 1),0xffff);
  trapWord(5,uVar4 & ~(((uVar12 & 0x7fffffff) << 1 | (uVar12 & 0xffffffff) >> 0x1f) - 1),0xffff);
  iVar9 = ((int)uVar12 / (int)uVar2) * uVar2;
  trapWord(5,uVar6 & ~((((unsigned __int64)param_5 & 0x7fffffff) << 1 | (unsigned __int64)(param_5 >> 0x1f)) - 1),
           0xffff);
  trapWord(5,uVar4 & ~((((unsigned __int64)param_6 & 0x7fffffff) << 1 | (unsigned __int64)(param_6 >> 0x1f)) - 1),
           0xffff);
  iVar8 = ((int)param_6 / (int)uVar2) * uVar2;
  stack_pair_c0.second = (int)param_4;
  stack_pair_c0.first = (int)param_3;
  if ((iVar14 < iVar13) && (iVar9 < iVar8)) {
    piVar7 = &iStack_b0;
    if (stack_pair_c0.first < iVar14) {
      piVar7 = aiStack_a0;
      iStack_b0 = stack_pair_c0.first;
      iStack_ac = stack_pair_c0.second;
      iStack_a8 = iVar14;
      uStack_a4 = param_6;
    }
    if (iVar13 < (int)param_5) {
      *piVar7 = iVar13;
      piVar7[1] = stack_pair_c0.second;
      piVar7[2] = param_5;
      piVar7[3] = param_6;
      piVar7 = piVar7 + 4;
    }
    if (stack_pair_c0.second < iVar9) {
      *piVar7 = iVar14;
      piVar7[1] = stack_pair_c0.second;
      piVar7[2] = iVar13;
      piVar7[3] = iVar9;
      piVar7 = piVar7 + 4;
    }
    if (iVar8 < (int)param_6) {
      *piVar7 = iVar14;
      piVar7[1] = iVar8;
      piVar7[2] = iVar13;
      piVar7[3] = param_6;
      piVar7 = piVar7 + 4;
    }
    iVar3 = (int)piVar7 - (int)&iStack_b0 >> 4;
    if (iVar3 != 0) {
      fn_8263CD40(param_1,param_2,iVar3,&iStack_b0,param_7,param_6,param_9,in_stack_00000054,
                    in_stack_0000005c);
    }
    stack_pair_c0.first = iVar14 >> iVar11;
    stack_pair_c0.second = iVar9 >> iVar10;
    uStack_b8 = iVar13 >> iVar11;
    uStack_b4 = iVar8 >> iVar10;
    fn_8263CD40(param_1,param_2,1,&stack_pair_c0.first,param_7);
  }
  else {
    uStack_b8 = param_5;
    uStack_b4 = param_6;
    fn_8263CD40(param_1,param_2,1,&stack_pair_c0.first,param_7,param_6,param_9,in_stack_00000054,
                  in_stack_0000005c);
  }
  return;
}

