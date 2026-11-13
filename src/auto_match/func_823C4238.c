extern unsigned int *auStack_50;
extern int fn_822ABA88();
extern int fn_822ACAD8();
extern int fn_822AF138();
extern int fn_823690C8();
extern int fn_823693A0();
extern int fn_82369A00();
extern int fn_8236BA88();
extern int fn_823C2148();
extern int fn_823C4850();
extern int fn_823CC298();
extern int fn_823E8D38();
extern int fn_824FE498();
extern int fn_825275B0();
extern unsigned int ltcg_pool_0_0f;


void fn_823C4238(int param_1)

{
  int iVar1;
  int *piVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char auStack_50 [80];
  
  fn_8236BA88(*(unsigned int *)**(unsigned int **)(param_1 + 8));
  fn_8236BA88(*(unsigned int *)(**(int **)(param_1 + 8) + 4));
  iVar1 = *(int *)(param_1 + 0xee0);
  uVar4 = (unsigned int)((unsigned __int64)LZCOUNT(iVar1) >> 3) & 4;
  piVar2 = *(int **)(iVar1 * 4 + **(int **)(param_1 + 8));
  uVar3 = *(unsigned int *)(uVar4 + **(int **)(param_1 + 8));
  fn_822ACAD8(*(unsigned int *)(*(int *)(piVar2[4] * 4 + *piVar2) + 0x48),0xffffffff821ac494,
                    0xffffffff821af8ec);
  fn_822AF138(*(unsigned int *)(*(int *)(param_1 + 0xc) + iVar1 * 4),9);
  fn_822AF138(*(unsigned int *)(*(int *)(param_1 + 0xc) + uVar4),10);
  fn_823E8D38(param_1,piVar2,uVar3,(unsigned int *)(param_1 + 0xee4));
  uVar6 = fn_822ABA88(*(unsigned int *)(piVar2[4] * 4 + *piVar2),*(unsigned int *)(param_1 + 0xee4));
  fn_823693A0(param_1,uVar6);
  if (*(int *)(param_1 + 0x42c) != 0) {
    fn_825275B0(*(unsigned int *)(param_1 + 0xe10));
  }
  *(unsigned int *)(param_1 + 0x42c) = 0;
  fn_823C4850(param_1,piVar2);
  fn_823C4850(param_1,uVar3);
  if (*(int *)(param_1 + 0x4c0) == 0) {
    fn_823690C8(auStack_50,param_1,iVar1);
    fn_824FE498(*(unsigned int *)(param_1 + 0xe10));
    iVar1 = *(int *)(param_1 + 0xe10);
    puVar5 = (unsigned int *)(iVar1 + 0xbd0U & 0xfffffff0);
    *puVar5 = in_register_000104d0;
    puVar5[1] = in_register_000104d4;
    puVar5[2] = in_register_000104d8;
    puVar5[3] = in_vr77;
    puVar5 = (unsigned int *)(iVar1 + 0xc30U & 0xfffffff0);
    *puVar5 = in_register_000104d0;
    puVar5[1] = in_register_000104d4;
    puVar5[2] = in_register_000104d8;
    puVar5[3] = in_vr77;
  }
  else {
    uVar6 = fn_822ABA88(*(unsigned int *)(piVar2[4] * 4 + *piVar2),*(unsigned int *)(param_1 + 0xee4));
    fn_82369A00(param_1,*(unsigned int *)(param_1 + 0xe10),uVar6,2);
  }
  fn_823C2148(param_1,1,1);
  *(unsigned int *)(param_1 + 0xef4) = ltcg_pool_0_0f;
  fn_823CC298(*(unsigned int *)(param_1 + 0x4b8),0x20);
  return;
}

