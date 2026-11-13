typedef unsigned char bool;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_ce;
extern int fn_82295AD0();
extern int fn_82F64020();
extern unsigned int lbl_82195518;
extern unsigned int lbl_82195520;
extern unsigned int lbl_82195AF0;
extern unsigned int lbl_82195AF8;
extern unsigned int lbl_82195B00;
extern unsigned int lbl_82195B08;
extern unsigned int uStack_cf;
extern unsigned int uStack_d0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned __int64
fn_822955C8(double param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5,
             unsigned __int64 param_6)

{
  unsigned int uVar1;
  unsigned char uVar2;
  __int64 lVar3;
  int iVar4;
  unsigned char *puVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  bool bVar8;
  unsigned char uStack_d0;
  unsigned char uStack_cf;
  unsigned char auStack_ce [14];
  unsigned char auStack_c0 [192];
  
  lVar3 = *(__int64 *)(param_5 + 0x18);
  if ((lVar3 < 1) && ((*(unsigned int *)(param_5 + 0x14) & 0x2000) == 0)) {
    lVar3 = 6;
  }
  iVar4 = 0x24;
  if (lVar3 < 0x25) {
    iVar4 = (int)lVar3;
  }
  uVar1 = *(unsigned int *)(param_5 + 0x14);
  uVar6 = 0;
  lVar3 = lVar3 - iVar4;
  uVar7 = 0;
  if (((uVar1 & 0x3000) == 0x2000) && (param_1 * lbl_82195520 != param_1)) {
    bVar8 = param_1 < lbl_82195518;
    if (bVar8) {
      param_1 = -param_1;
    }
    for (; (lbl_82195AF0 <= param_1 && ((uVar6 & 0xffffffff) < 5000)); uVar6 = uVar6 + 10) {
      param_1 = param_1 * lbl_82195AF8;
    }
    if (lbl_82195518 < param_1) {
      for (; ((9 < lVar3 && (param_1 <= lbl_82195B00)) && ((uVar7 & 0xffffffff) < 5000));
          uVar7 = uVar7 + 10) {
        lVar3 = lVar3 + -10;
        param_1 = param_1 * lbl_82195B08;
      }
    }
    if (bVar8) {
      param_1 = -param_1;
    }
  }
  puVar5 = &uStack_cf;
  uStack_d0 = 0x25;
  if ((uVar1 & 0x20) != 0) {
    puVar5 = auStack_ce;
    uStack_cf = 0x2b;
  }
  if ((uVar1 & 0x10) != 0) {
    *puVar5 = 0x23;
    puVar5 = puVar5 + 1;
  }
  uVar1 = uVar1 & 0x3000;
  *puVar5 = 0x2e;
  puVar5[1] = 0x2a;
  if (uVar1 == 0x2000) {
    uVar2 = 0x66;
  }
  else if (uVar1 == 0x3000) {
    uVar2 = 0x61;
  }
  else {
    uVar2 = 0x65;
    if (uVar1 != 0x1000) {
      uVar2 = 0x67;
    }
  }
  puVar5[2] = uVar2;
  puVar5[3] = 0;
  fn_82F64020(auStack_c0,0x6c,&uStack_d0,iVar4,param_1);
  fn_82295AD0(param_2,param_3,param_4,param_5,param_6,auStack_c0,uVar6,uVar7);
  return param_2;
}

