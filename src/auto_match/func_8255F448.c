typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8255F7E8();
extern int fn_827F2220();
extern int fn_827F22D0();
extern int fn_827F2D60();
extern int fn_827F3DA8();
extern int fn_827F6450();
extern int fn_827F6458();
extern int fn_827F6480();
extern int fn_82F65B18();
extern unsigned int ltcg_pool_0_0f;


void fn_8255F448(int param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int param_4)

{
  float fVar1;
  bool bVar2;
  char cVar6;
  __int64 lVar3;
  __int64 lVar4;
  unsigned int uVar5;
  unsigned int *puVar7;
  __int64 lVar8;
  double dVar9;
  
  bVar2 = false;
  if ((*(int *)(param_1 + 0x110) != 0) && (cVar6 = fn_827F3DA8(), cVar6 != '\0')) {
    bVar2 = true;
  }
  cVar6 = fn_827F3DA8(param_2);
  if (cVar6 != '\0') {
    bVar2 = true;
  }
  fn_8255F7E8(param_1);
  cVar6 = fn_827F22D0(param_1);
  fVar1 = ltcg_pool_0_0f;
  if (cVar6 == '\0') {
    fVar1 = *(float *)(param_1 + 0x184);
  }
  dVar9 = (double)fVar1;
  *(float *)(param_1 + 0x188) = ltcg_pool_0_0f;
  *(int *)(param_1 + 0x110) = (int)param_2;
  *(int *)(param_1 + 0x114) = (int)param_2;
  *(unsigned int *)(param_1 + 0x180) = 0;
  *(unsigned int *)(param_1 + 0x18c) = param_4;
  if (*(int *)(param_1 + 0x1a8) == 0) {
    fn_827F6450(param_2);
  }
  fn_827F2D60(dVar9,param_1,param_2);
  *(unsigned int *)(param_1 + 0x164) = param_3;
  *(unsigned int *)(param_1 + 0x168) = 1;
  lVar3 = fn_827F6458(param_2);
  if (lVar3 != 0) {
    lVar8 = 0;
    if (0 < (int)lVar3) {
      puVar7 = (unsigned int *)(param_1 + 0x118);
      do {
        lVar4 = fn_827F6480(param_2,lVar8);
        uVar5 = fn_82F65B18(lVar4 + 10);
        lVar8 = lVar8 + 1;
        puVar7 = puVar7 + 1;
        *puVar7 = uVar5;
      } while ((int)lVar8 < (int)lVar3);
    }
  }
  *(unsigned int *)(param_1 + 0x15c) = 1;
  if (bVar2) {
    fn_827F2220(param_1);
  }
  return;
}

