extern int fn_822315A0();
extern int fn_822C16B8();
extern int fn_82397F88();
extern int fn_823B3908();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern unsigned int lbl_82193E50;
extern unsigned int lbl_82196582;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;


void fn_822F3628(int param_1)

{
  float fVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar5;
  unsigned __int64 uVar4;
  unsigned __int64 uVar6;
  
  uVar6 = 0;
  if ((*(int *)(*(int *)(param_1 + 0xc) + 0x24) == 0) ||
     (iVar5 = fn_82397F88(*(unsigned int *)(param_1 + 0x10)), iVar5 != 0)) {
    *(unsigned int *)(param_1 + 0xb8) = 0;
    *(unsigned int *)(param_1 + 0xc4) = 0;
    *(unsigned int *)(param_1 + 0x24) = 0;
    uVar3 = ltcg_pool_0_0f;
    *(unsigned char **)(param_1 + 0xc0) = &lbl_82196582;
    *(unsigned int *)(param_1 + 0xbc) = uVar3;
    iVar5 = *(int *)(param_1 + 0x2c);
    *(unsigned int *)(param_1 + 0x2c) = 0;
    *(unsigned int *)(param_1 + 0x28) = 0;
    if (iVar5 != 0) {
      fn_822315A0();
    }
  }
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x178) != 2) {
    iVar5 = *(int *)(*(int *)(param_1 + 0x10) + 0x1e4);
    uVar4 = fn_8265C9E0(0x30);
    if ((uVar4 & 0xffffffff) != 0) {
      uVar6 = fn_823B3908(uVar4,iVar5);
    }
    uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x30);
    if ((uVar6 & 0xffffffff) != uVar4) {
      if (uVar4 != 0) {
        fn_822C16B8(uVar4 + 8);
        fn_8265CA20(uVar4);
      }
      *(int *)(param_1 + 0x30) = (int)uVar6;
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x24);
    if ((iVar2 != 0) && (*(int *)(iVar5 + 0x184) != 0)) {
      if (*(int *)(iVar2 + 0xf8) != 0) {
        *(unsigned int *)(*(int *)(iVar2 + 0xf8) + 0x48) = 1;
      }
      if (*(int *)(iVar2 + 0xfc) != 0) {
        *(unsigned int *)(*(int *)(iVar2 + 0xfc) + 0x48) = 1;
      }
      *(unsigned int *)(*(int *)(iVar2 + 0x20) + 0x10) = lbl_82193E50;
    }
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x10) + 0x844);
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0x83c);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  fVar1 = *(float *)((iVar5 + 0x37) * 4 + iVar2);
  *(float *)(param_1 + 200) =
       (*(float *)((iVar5 + 0x3c) * 4 + iVar2) - fVar1) *
       ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) + fVar1;
  return;
}

