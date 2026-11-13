extern int fn_825881D8();
extern int fn_82588280();
extern int fn_82F64CE0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int ltcg_pool_0_0f;


void fn_82588058(unsigned __int64 param_1,unsigned __int64 param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  short sVar4;
  unsigned __int64 extraout_f1;
  double dVar5;
  unsigned __int64 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  psVar2 = (short *)fn_82F6A548();
  sVar4 = 0;
  dVar7 = (double)ltcg_pool_0_0f;
  uVar6 = extraout_f1;
  dVar8 = dVar7;
  dVar9 = dVar7;
  iVar3 = fn_82F64CE0();
  if (iVar3 != 0) {
    do {
      sVar1 = *psVar2;
      if (sVar1 == 10) {
        dVar5 = dVar8;
        if (dVar7 < dVar9) {
          dVar7 = dVar9;
        }
      }
      else {
        if (sVar1 == 0x20) {
          dVar5 = dVar9;
          if (dVar9 == dVar8) goto LAB_825880f0;
          dVar5 = (double)fn_825881D8(uVar6,param_2);
        }
        else {
          dVar5 = (double)fn_82588280(uVar6,param_2,sVar1,sVar4);
        }
        dVar5 = (double)(float)(dVar5 + dVar9);
      }
LAB_825880f0:
      sVar4 = *psVar2;
      psVar2 = psVar2 + 1;
      iVar3 = fn_82F64CE0(psVar2);
      dVar9 = dVar5;
    } while (iVar3 != 0);
    if (dVar7 < dVar5) goto LAB_8258811c;
  }
  dVar5 = dVar7;
LAB_8258811c:
  fn_82F6A594(dVar5);
  return;
}

