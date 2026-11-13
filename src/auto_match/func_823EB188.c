#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_38;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b8;
extern int fn_8227CB30();
extern int fn_82359C18();
extern int fn_823831D8();
extern int fn_823CF178();
extern int fn_823D2008();
extern int fn_82F68CC0();
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_70;
extern unsigned int uStack_9c;


void fn_823EB188(unsigned int *param_1,unsigned int param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  int in_r0;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned char auStack_b8 [24];
  int (**pcStack_a0)();
  unsigned int uStack_9c;
  unsigned char auStack_90 [32];
  unsigned __int64 uStack_70;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned __int64 uStack_58;
  unsigned __int64 uStack_50;
  unsigned __int64 uStack_48;
  unsigned __int64 uStack_40;
  unsigned char auStack_38 [56];
  
  uStack_68 = param_1[1];
  uVar3 = (unsigned __int64)uStack_68;
  pcStack_a0 = fn_823CF178;
  uStack_9c = 0;
  uStack_70 = 0x823cf17800000000;
  puVar1 = (unsigned int *)((int)&uStack_50 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  uStack_60 = param_2;
  fn_82F68CC0(&uStack_40,param_3,0x18);
  fn_82F68CC0(auStack_b8,auStack_38,0x18);
  uVar2 = fn_823D2008(auStack_90,uStack_70,CONCAT44(uStack_68,uStack_64),
                            CONCAT44(uStack_60,uStack_5c),uStack_58,uStack_50,uStack_48,uStack_40);
  fn_8227CB30(uVar3 + 0xb30,uVar2);
  fn_82359C18(uVar2);
  fn_823831D8((unsigned __int64)*param_1 + 0x710);
  return;
}

