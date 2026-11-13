#define NAN(x) ((x) != (x))
extern int fn_82278030();
extern int fn_82540078();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_821917B4;
extern unsigned int lbl_821917D4;
extern unsigned int lbl_82193D10;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_82195840;
extern unsigned int lbl_821958EC;
extern unsigned int lbl_82195D40;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_58;


/* WARNING: Removing unreachable block (ram,0x82277ed8) */

void fn_82277E48(unsigned __int64 param_1,unsigned __int64 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  unsigned int *puVar7;
  double extraout_f1;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  unsigned __int64 uStack_58;
  
  iVar4 = fn_82F6A548();
  uStack_58 = *(unsigned __int64 *)(iVar4 + 0x14);
  bVar6 = 0;
  *(unsigned int *)(iVar4 + 0x48) = 0;
  dVar9 = extraout_f1;
  if ((param_2 & 0xff) != 0) {
    for (puVar7 = *(unsigned int **)(iVar4 + 0x4c); puVar7 != *(unsigned int **)(iVar4 + 0x50);
        puVar7 = puVar7 + 1) {
      bVar5 = fn_82278030(dVar9,*puVar7,&uStack_58);
      bVar6 = bVar6 | bVar5;
      if (bVar5 != 0) {
        *(unsigned int *)(iVar4 + 0x48) = *puVar7;
      }
    }
  }
  dVar10 = (double)(float)(dVar9 * (double)lbl_82195D40);
  if (bVar6 == 0) {
    dVar11 = (double)(float)(dVar9 * (double)lbl_821958EC);
    dVar8 = (double)fn_82540078((double)lbl_821917B4,dVar9);
    fVar1 = lbl_82193D10;
  }
  else {
    dVar11 = (double)(float)(dVar9 * (double)lbl_82195840);
    dVar8 = (double)fn_82540078((double)lbl_821917D4,dVar9);
    fVar1 = lbl_821917D4;
  }
  dVar9 = (double)fn_82540078((double)fVar1,dVar9);
  fVar3 = ltcg_pool_0_0f;
  dVar8 = (double)(float)((double)(float)((double)(((unsigned __int64)(uStack_58) >> 0) & 0xFFFFFFFF) - (double)*(float *)(iVar4 + 0x1c)
                                         ) * dVar8);
  dVar9 = (double)(float)((double)((((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF) - *(float *)(iVar4 + 0x20)) * dVar9);
  fVar1 = (float)(dVar8 - -dVar11);
  fVar2 = (float)(dVar9 - -dVar10);
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar1 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar1) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    dVar8 = -dVar11;
  }
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar2 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar2) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    dVar9 = -dVar10;
  }
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)(((float)(dVar8 - dVar11) < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN((float)(dVar8 - dVar11)) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    dVar11 = dVar8;
  }
  *(float *)(iVar4 + 0x1c) = (float)((double)*(float *)(iVar4 + 0x1c) + dVar11);
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)(((float)(dVar9 - dVar10) < fVar3) << 2) |
                (unsigned int)(NAN((float)(dVar9 - dVar10)) || NAN(fVar3)) << 2)) < 0.0) {
    dVar10 = dVar9;
  }
  *(float *)(iVar4 + 0x20) = (float)((double)*(float *)(iVar4 + 0x20) + dVar10);
  fn_82F6A594(bVar6);
  return;
}

