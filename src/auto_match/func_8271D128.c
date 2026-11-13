extern void *fn_82695598();
extern int fn_82696330();
extern int fn_826A1CC8();
extern int fn_826BF638();
extern int fn_8271CDB0();
extern void fn_8271CF50(void);
extern unsigned int lbl_8200FC70;
extern unsigned int lbl_8200FC78;
extern unsigned int lbl_8200FCCC;
extern unsigned int lbl_8200FC28;

unsigned int * fn_8271D128(unsigned int *param_1,int param_2)
{
  void *uVar1;
  unsigned char uStack_50;
  unsigned char auStack_4f;
  char auStack_40 [16];

  fn_8271CDB0();
  *param_1 = (unsigned int)&lbl_8200FCCC;
  param_1[4] = (unsigned int)&lbl_8200FC78;
  param_1[0x10] = (unsigned int)&lbl_8200FC70;
  uStack_50 = 1;
  fn_826BF638(param_1 + 0x10,param_1,param_2,&lbl_8200FC28,&uStack_50);
  auStack_4f = 1;
  fn_826A1CC8(param_1 + 4,param_2,"onData",fn_82695598(auStack_40,param_2,fn_8271CF50),&auStack_4f);
  fn_82696330(auStack_40);
  return param_1;
}
