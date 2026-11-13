typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_30;
extern float fRam831cccf8;
extern float fRam831cccfc;
extern int fn_822315A0();
extern int fn_822E5FA8();
extern unsigned int iStack_2c;
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;


double fn_822F9450(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  int *piVar7;
  unsigned __int64 uVar8;
  double dVar9;
  struct { int first; int second; } stack_pair_38;

  unsigned char auStack_30 [4];
  int iStack_2c;
  
  bVar5 = false;
  fn_822E5FA8(&stack_pair_38.first,*(unsigned int *)(param_1 + 8));
  if (stack_pair_38.first != 0) {
    bVar5 = true;
    piVar7 = (int *)fn_822E5FA8(auStack_30,*(unsigned int *)(param_1 + 8));
    bVar6 = false;
    if (*(float *)(*piVar7 + 0x24) <= ltcg_pool_0_0f) goto LAB_822f94b4;
  }
  bVar6 = true;
LAB_822f94b4:
  if ((bVar5) && (iStack_2c != 0)) {
    fn_822315A0();
  }
  uVar8 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 4) + 0x844);
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x83c);
  fVar1 = *(float *)((int)((uVar8 + 0x23 & 0xffffffff) << 2) + iVar3);
  fVar2 = *(float *)((int)((uVar8 + 0x28 & 0xffffffff) << 2) + iVar3);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  fVar4 = fRam831cccf8;
  if (fRam831cccf8 - fVar1 < 0.0) {
    fVar4 = fVar1;
  }
  fVar1 = fRam831cccfc;
  if (fRam831cccfc - fVar2 < 0.0) {
    fVar1 = fVar2;
  }
  fVar2 = lbl_821CA460;
  if (bVar6) {
    fVar2 = lbl_82192734;
  }
  dVar9 = (double)(fVar2 * ((fVar1 - fVar4) *
                            ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) + fVar4))
  ;
  if (stack_pair_38.second != 0) {
    fn_822315A0();
  }
  return dVar9;
}

