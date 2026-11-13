extern int fn_822ABA88();
extern int fn_823693A0();
extern int fn_82369A00();
extern int fn_8236BA88();
extern int fn_823C2148();
extern int fn_823C4850();
extern int fn_823CC298();
extern int fn_823D9D60();
extern int fn_823E6E98();
extern int fn_823E88F0();
extern int fn_825275B0();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_823C3BA0(int param_1)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar5;
  unsigned __int64 uVar4;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned char uStack_3c;
  
  fn_8236BA88(*(unsigned int *)**(unsigned int **)(param_1 + 8));
  fn_8236BA88(*(unsigned int *)(**(int **)(param_1 + 8) + 4));
  iVar5 = *(int *)(param_1 + 0xd80);
  if (iVar5 == -1) {
    iVar5 = *(int *)(param_1 + 0xe24);
  }
  uVar8 = 0;
  piVar1 = *(int **)(iVar5 * 4 + **(int **)(param_1 + 8));
  uVar2 = *(unsigned int *)(((unsigned int)LZCOUNT(iVar5) >> 3 & 4) + **(int **)(param_1 + 8));
  uVar3 = *(unsigned int *)(piVar1[4] * 4 + *piVar1);
  uVar7 = (unsigned __int64)uVar3;
  uVar6 = (unsigned __int64)*(unsigned int *)(uVar3 + 8);
  if (uVar6 != 0) {
    do {
      iVar5 = fn_822ABA88(uVar7,uVar8);
      if (*(int *)(iVar5 + 0x1ec) != 0) {
        fn_823693A0(param_1,iVar5);
        break;
      }
      uVar8 = uVar8 + 1;
    } while ((uVar8 & 0xffffffff) < (uVar6 & 0xffffffff));
  }
  uStack_4c = 0;
  iVar5 = *(int *)(param_1 + 0x9a0);
  uStack_50 = 0xffffffff;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  fn_823E6E98(param_1,*(unsigned int *)(iVar5 + 0x2c),&uStack_50);
  uVar4 = fn_823D9D60(param_1,0);
  fn_823D9D60(uVar4,1);
  fn_823E88F0(&uStack_50,*(unsigned int *)(param_1 + 8),param_1 + 0xc,param_1 + 0x1090);
  fn_823C4850(param_1,piVar1);
  fn_823C4850(param_1,uVar2);
  fn_82369A00(param_1,*(unsigned int *)(param_1 + 0xe10),iVar5,2);
  if (*(int *)(param_1 + 0x42c) != 2) {
    fn_825275B0(*(unsigned int *)(param_1 + 0xe10));
  }
  *(unsigned int *)(param_1 + 0x42c) = 2;
  fn_823C2148(param_1,1,1);
  *(unsigned int *)(param_1 + 0xef4) = ltcg_pool_0_0f;
  fn_823CC298(*(unsigned int *)(param_1 + 0x4b8),0x20);
  return;
}

