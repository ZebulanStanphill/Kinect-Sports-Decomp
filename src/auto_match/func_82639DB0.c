extern int fn_82637550();


void fn_82639DB0(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  
  uVar5 = (unsigned int)*(float *)(param_1 + 0x3218);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar6 = (unsigned __int64)(unsigned int)(int)*(float *)(param_1 + 0x321c);
  *(unsigned int *)(param_1 + 0x3234) = uVar1;
  *(unsigned int *)(param_1 + 0x3238) = uVar2;
  uVar7 = (int)*(float *)(param_1 + 0x3220) + uVar5;
  *(unsigned int *)(param_1 + 0x323c) = uVar3;
  *(unsigned int *)(param_1 + 0x3240) = uVar4;
  uVar8 = (unsigned int)(int)*(float *)(param_1 + 0x3224) + uVar6;
  if (*(int *)(param_1 + 0x2f00) != 0) {
    if ((int)uVar5 <= (int)uVar1) {
      uVar5 = uVar1;
    }
    if ((int)*(float *)(param_1 + 0x321c) <= (int)uVar2) {
      uVar6 = (unsigned __int64)uVar2;
    }
    if ((int)uVar3 <= (int)uVar7) {
      uVar7 = uVar3;
    }
    if ((int)uVar4 <= (int)uVar8) {
      uVar8 = (unsigned __int64)uVar4;
    }
  }
  *(unsigned int *)(param_1 + 0x28c4) =
       uVar5 & 0x7fff |
       (unsigned int)(uVar6 << 0x10) & 0x7fff0000 | *(unsigned int *)(param_1 + 0x28c4) & 0x80008000;
  *(unsigned int *)(param_1 + 0x28c8) =
       uVar7 & 0x7fff |
       (unsigned int)((uVar8 & 0xffffffff) << 0x10) & 0x7fff0000 | *(unsigned int *)(param_1 + 0x28c8) & 0x80008000;
  fn_82637550();
  return;
}

