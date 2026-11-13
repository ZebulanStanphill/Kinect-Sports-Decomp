extern unsigned int *auStack_20;
extern int fn_8255F880();
extern int fn_8255F8D0();
extern int fn_827EF828();
extern int fn_827EFFE8();
extern int fn_827F0180();
extern int fn_827F2DD0();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_82507668(int param_1)

{
  __int64 lVar1;
  double dVar2;
  unsigned char auStack_20 [16];
  
  fn_8255F880(auStack_20);
  dVar2 = (double)ltcg_pool_0_0f;
  lVar1 = fn_8255F8D0(dVar2,(double)lbl_821CA460,auStack_20);
  *(int *)(param_1 + 0xff0) = (int)lVar1;
  if (lVar1 != 0) {
    fn_827F2DD0((double)lbl_8218E8E8,*(unsigned int *)(param_1 + 0xb68));
  }
  fn_827EF828(dVar2,*(unsigned int *)(param_1 + 0xb68));
  fn_827EFFE8(*(unsigned int *)(param_1 + 0xb68));
  if (*(int *)(param_1 + 0x8c0) != 0) {
    fn_827F0180(*(unsigned int *)(param_1 + 0xb68),
                      **(unsigned int **)
                        ((*(int *)(*(int *)(param_1 + 0x4c) + 0x44) + 0x20) * 4 +
                        *(int *)(param_1 + 0x8c0)),1,0,0);
  }
  return;
}

