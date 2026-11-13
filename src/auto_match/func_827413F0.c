extern unsigned int *auStack_40;
extern unsigned int *auStack_5b;
extern int fn_82681728();
extern int fn_826944C8();
extern int fn_82696330();
extern int fn_826BF638();
extern int fn_826C1FF8();
extern int fn_82740EA8();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern unsigned int lbl_82012410;
extern unsigned int lbl_82012464;
extern unsigned int lbl_820124CC;
extern unsigned int uStack_5c;
extern unsigned int uStack_5d;
extern unsigned int uStack_5e;
extern unsigned int uStack_5f;
extern unsigned int uStack_60;


unsigned int * fn_827413F0(unsigned int *param_1,unsigned int *param_2)

{
  __int64 lVar1;
  unsigned int *puVar2;
  unsigned char uStack_60;
  unsigned char uStack_5f;
  unsigned char uStack_5e;
  unsigned char uStack_5d;
  unsigned char uStack_5c;
  unsigned char auStack_5b;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int aiStack_48 [2];
  unsigned char auStack_40 [16];
  
  fn_82740EA8();
  *param_1 = &lbl_82012464;
  param_1[4] = &lbl_82012410;
  param_1[0x11] = &lbl_820124CC;
  uStack_60 = 6;
  puVar2 = param_1 + 4;
  fn_826BF638(param_1 + 0x11,param_1,param_2,0xffffffff82012330,&uStack_60);
  auStack_40[0] = 0;
  uStack_5f = 2;
  fn_82681728(&iStack_58,(unsigned __int64)*param_2 + 0x254,0xffffffff820123e0);
  fn_826C1FF8(puVar2,param_2,&iStack_58,auStack_40,&uStack_5f);
  lVar1 = (unsigned __int64)*(unsigned int *)(iStack_58 + 8) - 1;
  *(int *)(iStack_58 + 8) = (int)lVar1;
  if (lVar1 == 0) {
    fn_826944C8(iStack_58);
  }
  uStack_5e = 6;
  fn_82681728(&iStack_54,(unsigned __int64)*param_2 + 0x254,0xffffffff820123b0);
  fn_826C1FF8(puVar2,param_2,&iStack_54,auStack_40,&uStack_5e);
  lVar1 = (unsigned __int64)*(unsigned int *)(iStack_54 + 8) - 1;
  *(int *)(iStack_54 + 8) = (int)lVar1;
  if (lVar1 == 0) {
    fn_826944C8(iStack_54);
  }
  uStack_5d = 2;
  fn_82681728(&iStack_50,(unsigned __int64)*param_2 + 0x254,0xffffffff820123e8);
  fn_826C1FF8(puVar2,param_2,&iStack_50,auStack_40,&uStack_5d);
  lVar1 = (unsigned __int64)*(unsigned int *)(iStack_50 + 8) - 1;
  *(int *)(iStack_50 + 8) = (int)lVar1;
  if (lVar1 == 0) {
    fn_826944C8(iStack_50);
  }
  uStack_5c = 6;
  fn_82681728(&iStack_4c,(unsigned __int64)*param_2 + 0x254,0xffffffff820123c4);
  fn_826C1FF8(puVar2,param_2,&iStack_4c,auStack_40,&uStack_5c);
  lVar1 = (unsigned __int64)*(unsigned int *)(iStack_4c + 8) - 1;
  *(int *)(iStack_4c + 8) = (int)lVar1;
  if (lVar1 == 0) {
    fn_826944C8(iStack_4c);
  }
  auStack_5b = 2;
  fn_82681728(aiStack_48,(unsigned __int64)*param_2 + 0x254,0xffffffff820123f8);
  fn_826C1FF8(puVar2,param_2,aiStack_48,auStack_40,&auStack_5b);
  lVar1 = (unsigned __int64)*(unsigned int *)(aiStack_48[0] + 8) - 1;
  *(int *)(aiStack_48[0] + 8) = (int)lVar1;
  if (lVar1 == 0) {
    fn_826944C8(aiStack_48[0]);
  }
  fn_82696330(auStack_40);
  return param_1;
}

