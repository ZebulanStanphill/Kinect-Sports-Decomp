extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_88;
extern unsigned int *auStack_8c;
extern unsigned int *auStack_8f;
extern int fn_827D8830();
extern int fn_827D8910();
extern int fn_827D9670();
extern int fn_827DC918();
extern int fn_827DE048();
extern int fn_827DF630();
extern int fn_827E0DD8();
extern unsigned int lbl_8201AC88;
extern unsigned int uStack_90;


unsigned int * fn_827D7F40(unsigned int *param_1,int *param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int uVar2;
  unsigned __int64 uVar1;
  unsigned int *puStack00000014;
  unsigned char uStack_90;
  unsigned char auStack_8f [3];
  unsigned char auStack_8c [4];
  unsigned char auStack_88 [8];
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [32];
  unsigned char auStack_50 [80];
  
  puStack00000014 = param_1;
  uVar2 = (**(int (***)())(*param_2 + 0x10))(param_2);
  *param_1 = uVar2;
  uVar1 = fn_827DE048(auStack_70);
  fn_827D8910(param_1 + 1,uVar1);
  uVar1 = fn_827DE048(auStack_50);
  fn_827DC918(param_1 + 0x11,uVar1);
  fn_827D8830(param_1 + 0x29);
  uVar1 = fn_827DE048(auStack_50);
  fn_827DC918(param_1 + 0x33,uVar1);
  fn_827DF630(param_1 + 0x44);
  param_1[0xb1] = param_4;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  uVar1 = fn_827DE048(auStack_50);
  fn_827E0DD8(param_1 + 0xb4,&uStack_90,uVar1);
  param_1[0xd3] = param_3;
  param_1[0xd2] = 0;
  uVar1 = fn_827DE048(auStack_70);
  fn_827E0DD8(param_1 + 0xd4,auStack_8f,uVar1);
  fn_827D9670(param_1 + 0xfa,auStack_88,auStack_80,auStack_8c);
  param_1[0x100] = &lbl_8201AC88;
  RtlInitializeCriticalSection(param_1 + 0xf2);
  RtlInitializeCriticalSection(param_1 + 0x1b);
  RtlInitializeCriticalSection(param_1 + 0x22);
  RtlInitializeCriticalSection(param_1 + 0x3d);
  return param_1;
}

