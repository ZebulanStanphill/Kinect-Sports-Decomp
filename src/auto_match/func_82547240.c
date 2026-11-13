extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821954E8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8326B350;
extern unsigned int lbl_8326B430;
extern unsigned int lbl_8326B434;


void fn_82547240(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  iVar3 = fn_82F6A548();
  puVar5 = (unsigned int *)(&lbl_8326B350 + iVar3 * 8);
  lVar4 = 2;
  fVar1 = (float)((__int64)*(float *)(lbl_8320A898 + 0x321c) & 0xffffffff) / (float)lbl_8326B434;
  fVar2 = (float)((__int64)*(float *)(lbl_8320A898 + 0x3218) & 0xffffffff) / (float)lbl_8326B430;
  dVar8 = (double)(fVar1 * lbl_821954E8 + lbl_821CA460);
  dVar9 = (double)(fVar2 * lbl_821916FC - lbl_821CA460);
  dVar6 = (double)(((float)((__int64)*(float *)(lbl_8320A898 + 0x3224) & 0xffffffff) /
                    (float)lbl_8326B434 + fVar1) * lbl_821954E8 + lbl_821CA460);
  dVar7 = (double)(((float)((__int64)*(float *)(lbl_8320A898 + 0x3220) & 0xffffffff) /
                    (float)lbl_8326B430 + fVar2) * lbl_821916FC - lbl_821CA460);
  do {
    if ((int (**)())*puVar5 != (int (**)())0x0) {
      (*(int (**)())*puVar5)(dVar9,dVar7,dVar8,dVar6,puVar5[1]);
    }
    lVar4 = lVar4 + -1;
    puVar5 = puVar5 + 4;
  } while (lVar4 != 0);
  fn_82F6A594();
  return;
}

