typedef unsigned char bool;
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82250A18();
extern int fn_822B17A8();
extern int fn_822C18B8();
extern int fn_82417F58();
extern int fn_82417FC0();
extern int fn_8241CE30();
extern int fn_82508078();
extern int fn_825354B8();
extern int fn_82536288();
extern int fn_82536590();
extern int fn_82560100();
extern float lbl_82192604;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;
extern unsigned int lbl_832975B0;
extern unsigned int stack0x00000020;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82412588(int param_1)

{
  bool bVar1;
  unsigned int uVar2;
  int *piVar3;
  unsigned int *puVar4;
  int in_r0;
  int iVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  __int64 alStack_50 [2];
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  unsigned int uStack_38;
  
  uVar6 = *(unsigned int *)(param_1 + 0x24);
  puVar4 = (unsigned int *)((unsigned int)(&stack0x00000020 + in_r0) & 0xfffffff0);
  *puVar4 = in_register_00010010;
  puVar4[1] = in_register_00010014;
  puVar4[2] = in_register_00010018;
  puVar4[3] = in_vr1;
  iVar5 = fn_82417F58(uVar6);
  if (((iVar5 != 0) && (*(int *)(iVar5 + 0x24) != 0)) &&
     (iVar5 = *(int *)(*(int *)(iVar5 + 0x24) + 0x34), iVar5 != 0)) {
    fn_822B17A8(iVar5,0xd,0);
  }
  iVar5 = **(int **)(param_1 + 0x24);
  if (((*(int **)(param_1 + 0x24) == *(int **)(iVar5 + 0x2b20)) && (*(int *)(iVar5 + 0xc0c) != 0))
     && ((*(int *)(iVar5 + 0x2b90) == 0 || (*(int *)(iVar5 + 0xcb8) == 0)))) {
    fn_82536590(iVar5 + 0xd80,0);
    *(unsigned int *)(iVar5 + 0x2b90) = 1;
  }
  piVar3 = *(int **)(param_1 + 0x24);
  if (piVar3[0x91] != 0) goto LAB_82412704;
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  uVar2 = (unsigned int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_82192604);
  alStack_50[0] = (__int64)(int)uVar2;
  if (uVar2 == 0) {
    iVar5 = *piVar3;
    if (piVar3 != *(int **)(iVar5 + 0x2b20)) goto LAB_82412704;
    uVar7 = 0xffffffff821b84c8;
  }
  else if (uVar2 == 1) {
    iVar5 = *piVar3;
    if (piVar3 != *(int **)(iVar5 + 0x2b20)) goto LAB_82412704;
    uVar7 = 0xffffffff821b84dc;
  }
  else {
    if (2 < uVar2) goto LAB_82412704;
    iVar5 = *piVar3;
    if (piVar3 != *(int **)(iVar5 + 0x2b20)) goto LAB_82412704;
    uVar7 = 0xffffffff821b82ec;
  }
  fn_82508078(*(unsigned int *)(iVar5 + 0xa4),uVar7,0);
LAB_82412704:
  piVar3 = *(int **)(param_1 + 0x24);
  stack_pair_40.first = 0;
  stack_pair_40.second = 0;
  uStack_38 = 0;
  iVar5 = *piVar3;
  fn_82417FC0(piVar3,&stack_pair_40.first);
  alStack_50[0] = CONCAT44(*(unsigned int *)(iVar5 + 0x1594),((unsigned int)(alStack_50[0])));
  uVar6 = fn_825354B8(alStack_50,&stack0x00000020,0,**(unsigned int **)(*piVar3 + 0x2b58),
                            0xffffffff83296bc0,0xffffffff83296bd0);
  alStack_50[0] = CONCAT44(uVar6,((unsigned int)(alStack_50[0])));
  fn_82536288(alStack_50);
  fn_822C18B8(&stack_pair_40.first);
  fn_82560100((double)*(float *)(**(int **)(param_1 + 0x24) + 0x159c),
                    *(unsigned int *)(*(int *)(param_1 + 0x28) + 0x4c),
                    **(int **)(param_1 + 0x24) + 0x1598,&stack0x00000020,*(int *)(param_1 + 0x28),0,
                    0,0,0);
  puVar4 = (unsigned int *)(param_1 + 0xc0U & 0xfffffff0);
  *puVar4 = in_register_00010010;
  puVar4[1] = in_register_00010014;
  puVar4[2] = in_register_00010018;
  puVar4[3] = in_vr1;
  iVar5 = lbl_832975B0;
  bVar1 = lbl_832975B0 == 0;
  *(unsigned int *)(param_1 + 0xd0) = *(unsigned int *)(**(int **)(param_1 + 0x24) + 0x15c8);
  if (bVar1) {
    iVar5 = fn_82250A18();
  }
  if (*(char *)(iVar5 + 4) != '\0') {
    fn_8241CE30((double)ltcg_pool_0_0f,*(unsigned int *)(param_1 + 0x24),param_1,3);
  }
  return;
}

