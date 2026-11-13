typedef unsigned char bool;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern int fn_8223E2E8();
extern int fn_8223E810();
extern int fn_82F64020();
extern unsigned int lbl_82195518;
extern unsigned int lbl_82195AF0;
extern unsigned int lbl_82195AF8;
extern unsigned int lbl_82195B00;
extern unsigned int lbl_82195B08;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned __int64
fn_8223DD80(double param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5,
             unsigned __int64 param_6)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  bool bVar6;
  unsigned char auStack_e0 [16];
  unsigned char auStack_d0 [208];
  
  lVar2 = *(__int64 *)(param_5 + 0x18);
  if ((lVar2 < 1) && ((*(unsigned int *)(param_5 + 0x14) & 0x2000) == 0)) {
    lVar2 = 6;
  }
  iVar3 = 0x24;
  if (lVar2 < 0x25) {
    iVar3 = (int)lVar2;
  }
  uVar4 = 0;
  lVar2 = lVar2 - iVar3;
  uVar5 = 0;
  if ((*(unsigned int *)(param_5 + 0x14) & 0x3000) == 0x2000) {
    bVar6 = param_1 < lbl_82195518;
    if (bVar6) {
      param_1 = -param_1;
    }
    for (; (lbl_82195AF0 <= param_1 && ((uVar4 & 0xffffffff) < 5000)); uVar4 = uVar4 + 10) {
      param_1 = param_1 * lbl_82195AF8;
    }
    if (lbl_82195518 < param_1) {
      for (; ((9 < lVar2 && (param_1 <= lbl_82195B00)) && ((uVar5 & 0xffffffff) < 5000));
          uVar5 = uVar5 + 10) {
        lVar2 = lVar2 + -10;
        param_1 = param_1 * lbl_82195B08;
      }
    }
    if (bVar6) {
      param_1 = -param_1;
    }
  }
  uVar1 = fn_8223E810(param_3,auStack_e0,0x4c);
  fn_82F64020(param_1,auStack_d0,0x6c,uVar1,iVar3,param_1);
  fn_8223E2E8(param_2,param_3,param_4,param_5,param_6,auStack_d0,uVar4,uVar5);
  return param_2;
}

