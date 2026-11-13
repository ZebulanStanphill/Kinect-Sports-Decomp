typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_822315A0();
extern int fn_822E2E30();
extern int fn_82370F38();
extern int fn_824D2AE8();
extern int fn_825275B0();
extern unsigned int iStack_5c;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821925C0;
extern unsigned int ltcg_pool_0_0f;


void fn_822E2BE8(double param_1,unsigned __int64 param_2,int param_3,int param_4,unsigned __int64 param_5)

{
  float fVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  unsigned int *puStack_60;
  int iStack_5c;
  
  iVar3 = param_3 + 0x58;
  fn_824D2AE8(&puStack_60,iVar3);
  fn_825275B0(*puStack_60);
  puStack_60[0x27] = 0;
  if (iStack_5c != 0) {
    fn_822315A0();
  }
  iVar2 = *(int *)(param_3 + 0x14);
  if ((*(int *)(iVar2 + 0x2c) == *(int *)(param_4 + 0x2c)) || (*(int *)(iVar2 + 0x310) != 0)) {
    if (param_1 < (double)ltcg_pool_0_0f) {
LAB_822e2d10:
      bVar4 = false;
      goto LAB_822e2ca4;
    }
  }
  else {
    if (param_1 == (double)ltcg_pool_0_0f) {
      bVar4 = *(int *)(param_4 + 0x2a4) != 0;
      goto LAB_822e2ca4;
    }
    fVar1 = lbl_8218E8E8;
    if (param_1 < (double)ltcg_pool_0_0f) {
      fVar1 = lbl_821925C0;
    }
    if ((double)fVar1 < param_1) goto LAB_822e2d10;
  }
  bVar4 = true;
LAB_822e2ca4:
  fn_824D2AE8(&puStack_60,iVar3);
  fn_82370F38(param_2,param_1,*(unsigned int *)(param_3 + 0x10),&puStack_60,iVar2,param_4,
                    param_5,bVar4);
  fn_822E2E30(iVar3);
  return;
}

