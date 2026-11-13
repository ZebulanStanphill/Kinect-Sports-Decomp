extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_5f;
extern int fn_82681728();
extern int fn_826829A0();
extern int fn_826944C8();
extern int fn_82696330();
extern int fn_826B14D8();
extern int fn_826C0B08();
extern int fn_826C1FF8();
extern int fn_8271FDB0();
extern int fn_82720700();
extern unsigned int iStack_4c;
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern unsigned int iStack_5c;
extern unsigned int lbl_8200E890;
extern unsigned int lbl_8200FDC8;
extern unsigned int lbl_82012A64;
extern unsigned int uStack_60;


unsigned int * fn_8271CBC0(unsigned int *param_1,int param_2)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned char uStack_60;
  unsigned char auStack_5f;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  unsigned char auStack_50 [4];
  int iStack_4c;
  unsigned char auStack_40 [16];
  
  fn_826C0B08();
  *param_1 = &lbl_82012A64;
  param_1[4] = &lbl_8200FDC8;
  puVar3 = param_1 + 4;
  puVar4 = (unsigned int *)(param_2 + 0x78);
  uVar1 = fn_826B14D8(*(unsigned int *)(param_2 + 0x78),0x1f);
  fn_826829A0(puVar3,puVar4,uVar1);
  fn_82720700(puVar4,puVar3);
  uVar1 = lbl_8200E890;
  *(unsigned __int64 *)(param_1 + 0xc) = lbl_8200E890;
  *(unsigned __int64 *)(param_1 + 0xe) = uVar1;
  fn_8271FDB0(param_2,puVar3,puVar3);
  uStack_60 = 1;
  fn_82681728(&iStack_54,(unsigned __int64)*(unsigned int *)(param_2 + 0x78) + 0x254,0xffffffff8200fe30);
  auStack_50[0] = 5;
  iStack_4c = iStack_54;
  *(int *)(iStack_54 + 8) = *(int *)(iStack_54 + 8) + 1;
  fn_82681728(&iStack_5c,(unsigned __int64)*puVar4 + 0x254,0xffffffff8200fe24);
  fn_826C1FF8(puVar3,puVar4,&iStack_5c,auStack_50,&uStack_60);
  lVar2 = (unsigned __int64)*(unsigned int *)(iStack_5c + 8) - 1;
  *(int *)(iStack_5c + 8) = (int)lVar2;
  if (lVar2 == 0) {
    fn_826944C8(iStack_5c);
  }
  fn_82696330(auStack_50);
  lVar2 = (unsigned __int64)*(unsigned int *)(iStack_54 + 8) - 1;
  *(int *)(iStack_54 + 8) = (int)lVar2;
  if (lVar2 == 0) {
    fn_826944C8(iStack_54);
  }
  auStack_5f = 1;
  auStack_40[0] = 0;
  fn_82681728(&iStack_58,(unsigned __int64)*puVar4 + 0x254,0xffffffff8200fe1c);
  fn_826C1FF8(puVar3,puVar4,&iStack_58,auStack_40,&auStack_5f);
  lVar2 = (unsigned __int64)*(unsigned int *)(iStack_58 + 8) - 1;
  *(int *)(iStack_58 + 8) = (int)lVar2;
  if (lVar2 == 0) {
    fn_826944C8(iStack_58);
  }
  fn_82696330(auStack_40);
  return param_1;
}

