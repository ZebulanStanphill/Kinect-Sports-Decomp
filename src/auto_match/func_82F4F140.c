extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82F4F0D0();
extern int fn_82F534B8();
extern int fn_82F538A0();
extern int fn_82F53900();
extern int fn_82F53968();
extern int fn_82F53970();
extern unsigned int lbl_82002C28;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_6c;


void fn_82F4F140(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  int param_5)

{
  unsigned char auStack_70 [4];
  unsigned int uStack_6c;
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [80];
  
  fn_82F4F0D0();
  fn_82F4F0D0(param_1,param_2,param_3,1,0);
  fn_82F4F0D0(param_1,param_2,param_3,2,1);
  fn_82F4F0D0(param_1,param_2,param_3,3,1);
  fn_82F4F0D0(param_1,param_2,param_3,4,2);
  fn_82F4F0D0(param_1,param_2,param_3,6,3);
  fn_82F4F0D0(param_1,param_2,param_3,5,2);
  fn_82F538A0(auStack_60,param_1,6);
  fn_82F538A0(auStack_50,param_1,4);
  fn_82F534B8((double)lbl_82002C28);
  fn_82F53900(param_1,4);
  fn_82F4F0D0(param_1,param_2,param_3,7,2);
  fn_82F4F0D0(param_1,param_2,param_3,8,8);
  fn_82F4F0D0(param_1,param_2,param_3,9,9);
  fn_82F4F0D0(param_1,param_2,param_3,10,10);
  fn_82F4F0D0(param_1,param_2,param_3,0xb,0xb);
  fn_82F4F0D0(param_1,param_2,param_3,0xc,2);
  fn_82F4F0D0(param_1,param_2,param_3,0xd,4);
  fn_82F4F0D0(param_1,param_2,param_3,0xe,5);
  fn_82F4F0D0(param_1,param_2,param_3,0xf,6);
  fn_82F4F0D0(param_1,param_2,param_3,0x10,7);
  fn_82F4F0D0(param_1,param_2,param_3,0x11,0x10);
  fn_82F4F0D0(param_1,param_2,param_3,0x12,0x11);
  fn_82F4F0D0(param_1,param_2,param_3,0x13,0x12);
  fn_82F4F0D0(param_1,param_2,param_3,0x14,0x13);
  fn_82F4F0D0(param_1,param_2,param_3,0x15,0xc);
  fn_82F4F0D0(param_1,param_2,param_3,0x16,0xd);
  fn_82F4F0D0(param_1,param_2,param_3,0x17,0xe);
  fn_82F4F0D0(param_1,param_2,param_3,0x18,0xf);
  fn_82F53968(param_1,param_4);
  fn_82F53970(param_1,param_5 == 1);
  fn_82F538A0(auStack_70,param_1,0);
  uStack_6c = lbl_821AAD20;
  fn_82F53900(param_1,0);
  return;
}

