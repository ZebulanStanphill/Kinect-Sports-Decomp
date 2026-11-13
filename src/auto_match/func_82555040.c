extern unsigned int *auStack_30;
extern int fn_825200A8();
extern int fn_82BFEB90();
extern int fn_82BFEC78();
extern int fn_82BFEE50();
extern unsigned int lbl_82195864;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_24;


unsigned int fn_82555040(unsigned int *param_1,unsigned __int64 param_2)

{
  int iVar1;
  __int64 lVar2;
  __int64 lVar3;
  double dVar4;
  double dVar5;
  unsigned char auStack_30 [12];
  unsigned int uStack_24;
  
  fn_82BFEB90(param_1[6],param_1 + 7);
  *param_1 = 1;
  if (param_1[6] != 0) {
    fn_82BFEE50(param_1[6],1,param_1[0xb],param_1[0xc]);
  }
  if (param_1[6] != 0) {
    fn_82BFEE50(param_1[6],2,param_1[0xd],param_1[0xe]);
  }
  fn_82BFEC78(param_1[6],auStack_30);
  dVar4 = (double)ltcg_pool_0_0f;
  if ((param_2 & 0xffffffff) != 0) {
    lVar2 = 5;
    lVar3 = -0x7cd692a0;
    dVar5 = dVar4;
    do {
      iVar1 = fn_825200A8(lVar3 + -4,param_2);
      if (iVar1 != 0) {
        dVar4 = (double)*(float *)lVar3;
      }
      lVar2 = lVar2 + -1;
      lVar3 = lVar3 + 8;
    } while (lVar2 != 0);
    if (dVar4 != dVar5) goto LAB_82555128;
  }
  dVar4 = (double)((float)uStack_24 * lbl_82195864);
LAB_82555128:
  param_1[4] = (float)dVar4;
  return param_1[6];
}

