extern int fn_82547C80();
extern unsigned int lbl_82191D8C;
extern unsigned int lbl_82191D9C;
extern unsigned int lbl_82191DA0;
extern unsigned int ltcg_pool_0_0f;


void fn_8241FA30(int *param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  unsigned int uVar5;
  float in_register_00010010;
  
  fVar1 = (in_register_00010010 - (float)param_1[0x74]) - (float)param_1[0x84];
  iVar4 = 0;
  if (ltcg_pool_0_0f < fVar1) {
    uVar5 = 0;
    pfVar3 = (float *)&lbl_82191D8C;
    fVar2 = ltcg_pool_0_0f;
    do {
      if (0xfb < uVar5) break;
      pfVar3 = pfVar3 + 3;
      iVar4 = iVar4 + 1;
      fVar2 = *pfVar3 + fVar2;
      uVar5 = uVar5 + 0xc;
    } while (fVar2 < fVar1);
  }
  uVar5 = 0xffffffffU - ((int)(iVar4 - 1U) >> 0x1f) & iVar4 - 1U;
  if (0x14 < (int)uVar5) {
    uVar5 = 0x15;
  }
  if (*(unsigned int *)(&lbl_82191D9C + uVar5 * 0xc) != 0xffffffff) {
    if (param_1 == *(int **)(*param_1 + 0x2b20)) {
      fn_82547C80((unsigned __int64)**(unsigned int **)(*param_1 + 0x2bfc) + 0xd0,
                   *(unsigned int *)(&lbl_82191D9C + uVar5 * 0xc) & 0xff,1);
    }
  }
  if (*(unsigned int *)(&lbl_82191DA0 + uVar5 * 0xc) != 0xffffffff) {
    if (param_1 == *(int **)(*param_1 + 0x2b20)) {
      fn_82547C80((unsigned __int64)**(unsigned int **)(*param_1 + 0x2bfc) + 0xd0,
                   *(unsigned int *)(&lbl_82191DA0 + uVar5 * 0xc) & 0xff,1);
    }
  }
  return;
}

