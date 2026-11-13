extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_9a;
extern int fn_82696330();
extern int fn_826A1CC8();
extern int fn_826BF638();
extern int fn_826C1FF8();
extern int fn_826CFFF0();
extern int fn_826D2390();
extern unsigned int lbl_8200BF44;
extern unsigned int lbl_8200BF48;
extern unsigned int lbl_8200C0D0;
extern unsigned int uStack_8c;
extern unsigned int uStack_9b;
extern unsigned int uStack_9c;
extern unsigned int uStack_9d;
extern unsigned int uStack_9e;
extern unsigned int uStack_9f;
extern unsigned int uStack_a0;


unsigned int * fn_826D2648(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned char uStack_a0;
  unsigned char uStack_9f;
  unsigned char uStack_9e;
  unsigned char uStack_9d;
  unsigned char uStack_9c;
  unsigned char uStack_9b;
  unsigned char auStack_9a [10];
  unsigned char auStack_90 [4];
  unsigned char uStack_8c;
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [64];
  
  fn_826D2390();
  *param_1 = &lbl_8200BF48;
  param_1[4] = &lbl_8200C0D0;
  param_1[0xe] = &lbl_8200BF44;
  uStack_a0 = 1;
  puVar2 = param_1 + 4;
  fn_826BF638(param_1 + 0xe,param_1,param_2,0xffffffff8200bc28,&uStack_a0);
  uStack_8c = 1;
  auStack_90[0] = 2;
  uStack_9f = 3;
  uVar1 = *param_2;
  fn_826CFFF0(param_1,param_2,(unsigned __int64)uVar1 + 0x1e8,auStack_90);
  fn_826C1FF8(puVar2,param_2,(unsigned __int64)uVar1 + 0x1e8,auStack_90,&uStack_9f);
  fn_82696330(auStack_90);
  uStack_9e = 3;
  auStack_80[0] = 10;
  fn_826A1CC8(puVar2,param_2,0xffffffff82006730,auStack_80,&uStack_9e);
  fn_82696330(auStack_80);
  uStack_9d = 3;
  auStack_70[0] = 10;
  fn_826A1CC8(puVar2,param_2,0xffffffff820066b4,auStack_70,&uStack_9d);
  fn_82696330(auStack_70);
  uStack_9c = 3;
  auStack_60[0] = 10;
  fn_826A1CC8(puVar2,param_2,0xffffffff82006700,auStack_60,&uStack_9c);
  fn_82696330(auStack_60);
  uStack_9b = 3;
  auStack_50[0] = 10;
  fn_826A1CC8(puVar2,param_2,0xffffffff82006724,auStack_50,&uStack_9b);
  fn_82696330(auStack_50);
  auStack_9a[0] = 3;
  auStack_40[0] = 10;
  fn_826A1CC8(puVar2,param_2,0xffffffff820066c0,auStack_40,auStack_9a);
  fn_82696330(auStack_40);
  return param_1;
}

