typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_822E1580();
extern int fn_82372F88();
extern int fn_82520780();
extern float lbl_8218E8E8;
extern unsigned int lbl_821917C0;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_822E13D0(int param_1)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  __int64 lVar4;
  int iVar5;
  unsigned __int64 uVar6;
  int iVar7;
  unsigned int uVar8;
  
  iVar5 = *(int *)(param_1 + 0x10);
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x2c);
  if (*(int *)(iVar5 + 0x204) == 0) {
    lVar4 = fn_82372F88(iVar5);
    iVar7 = (int)(lVar4 + 1) - ((int)lVar4 + (unsigned int)(lVar4 + 1 == 0));
  }
  else {
    iVar7 = *(int *)(iVar5 + 0x658);
  }
  if ((iVar7 == 0) || (iVar7 = fn_82372F88(iVar5), iVar7 != iVar1)) {
    if (*(int *)(iVar5 + 0x204) == 0) {
      lVar4 = fn_82372F88(iVar5);
      iVar7 = (int)(lVar4 + 1) - ((int)lVar4 + (unsigned int)(lVar4 + 1 == 0));
    }
    else {
      iVar7 = *(int *)(iVar5 + 0x658);
    }
    if ((iVar7 != 0) || (*(int *)(iVar5 + 0x1e0) != iVar1)) {
      bVar3 = false;
      goto LAB_822e1474;
    }
  }
  bVar3 = true;
LAB_822e1474:
  if ((*(int *)(iVar5 + 0x200) < *(int *)(iVar5 + 0x1c0)) ||
     (iVar5 = fn_82520780((double)lbl_821917C0,0xffffffff83265a28), iVar5 == 0)) {
    if (bVar3) {
      fn_822E1580(param_1,0xffffffff821adc74);
      uVar8 = 2;
    }
    else {
      fn_822E1580(param_1,0xffffffff821adc84);
      uVar8 = 3;
    }
  }
  else {
    lVar4 = (__int64)(int)lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    lbl_83265A28 = (unsigned int)lVar4;
    if (lVar4 < 1) {
      uVar6 = 0xffffffff821ad7a8;
    }
    else {
      uVar6 = 0xffffffff821ad794;
    }
    fn_822E1580(param_1,uVar6);
    uVar8 = 1;
  }
  *(unsigned int *)(param_1 + 0x54) = uVar8;
  fVar2 = lbl_821917C0;
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x54) != 0xb) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    fVar2 = ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_8218E8E8;
  }
  *(float *)(param_1 + 0x4c) = fVar2;
  return;
}

