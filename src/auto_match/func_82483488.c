extern int fn_82270180();
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_82192544;
extern unsigned int lbl_821955B8;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D4F34;
extern unsigned int lbl_831E5BF0;
extern unsigned int lbl_8327F844;


void fn_82483488(unsigned __int64 param_1,unsigned __int64 param_2,char param_3)

{
  float fVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  iVar5 = fn_82270180(param_2);
  if (iVar5 != 0) {
    iVar5 = *(int *)(iVar5 + 0x550);
    if (param_3 == '\0') {
      *(unsigned int *)(iVar5 + 0x1bc) = 0;
    }
    else if (*(int *)(iVar5 + 0x1bc) == 0) {
      *(unsigned int *)(iVar5 + 0x1bc) = 1;
      iVar5 = lbl_8327F844;
      if (lbl_8327F844 != 0) {
        *(unsigned int *)(lbl_8327F844 + 0xf0) = 1;
        uVar3 = ltcg_pool_0_0f;
        uVar2 = lbl_82192544;
        fVar1 = lbl_8218E8FC;
        dVar6 = (double)lbl_8218E8FC;
        *(unsigned int *)(iVar5 + 0xf4) = 0;
        uVar4 = lbl_831E5BF0;
        *(float *)(iVar5 + 0xf8) = fVar1;
        *(unsigned int *)(iVar5 + 0x108) = uVar2;
        *(unsigned int *)(iVar5 + 0xfc) = uVar3;
        *(unsigned int *)(iVar5 + 0x104) = uVar4;
        dVar7 = lbl_821955B8;
        dVar8 = (double)lbl_831D4F34;
        *(unsigned int *)(iVar5 + 0xf4) = 1;
        if ((float)(dVar8 - dVar6) < 0.0) {
          dVar7 = dVar8;
        }
        *(unsigned int *)(iVar5 + 0x100) = uVar3;
        *(float *)(iVar5 + 0x114) = (float)dVar7;
      }
    }
  }
  return;
}

