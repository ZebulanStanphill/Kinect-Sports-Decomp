extern unsigned int *auStack_30;
extern int fn_8255F880();
extern int fn_8255F8D0();
extern int fn_82560010();
extern int fn_827F22D0();
extern int fn_827F2D60();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_824FCD30(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  float fVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  char cVar4;
  unsigned char auStack_30 [48];
  
  lVar2 = fn_82560010(*(unsigned int *)(param_1 + 0x20),0xffffffff821c217c);
  fn_8255F880(auStack_30,lVar2 + 0x40);
  uVar3 = fn_8255F8D0((double)ltcg_pool_0_0f,(double)lbl_821CA460,auStack_30);
  cVar4 = fn_827F22D0(*(unsigned int *)(param_1 + 8));
  fVar1 = lbl_8218E8E8;
  if (cVar4 != '\0') {
    fVar1 = ltcg_pool_0_0f;
  }
  fn_827F2D60((double)fVar1,*(unsigned int *)(param_1 + 8),uVar3,param_3,0x12,0);
  *(unsigned int *)(param_1 + 0x28) = 1;
  return;
}

