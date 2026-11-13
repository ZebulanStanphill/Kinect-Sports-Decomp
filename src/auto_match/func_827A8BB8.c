#define CONCAT14(h,l) ((unsigned __int64)((((unsigned char)(h)) << 32) | ((unsigned int)(l))))
#define CONCAT17(h,l) ((unsigned __int64)((((unsigned char)(h)) << 56) | ((unsigned __int64)(l))))
#define CONCAT25(h,l) ((unsigned __int64)((((unsigned short)(h)) << 40) | ((unsigned __int64)(l))))
#define _auStack_6d ((*(unsigned __int64*)&auStack_6d))
#define _uStack_70 ((*(unsigned __int64*)&uStack_70))
extern unsigned int *auStack_6d;
extern unsigned int *auStack_6f;
extern unsigned int fStack_54;
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern int fn_827A8A28();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_42;
extern unsigned int uStack_44;
extern unsigned int uStack_46;
extern unsigned int uStack_48;
extern unsigned int uStack_4a;
extern unsigned int uStack_4c;
extern unsigned int uStack_4e;
extern unsigned int uStack_50;
extern unsigned int uStack_68;
extern unsigned int uStack_6a;
extern unsigned int uStack_70;


unsigned __int64 fn_827A8BB8(int *param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int *piVar1;
  unsigned char uStack_70;
  unsigned char auStack_6f [2];
  unsigned char auStack_6d [3];
  unsigned short uStack_6a;
  unsigned __int64 uStack_68;
  struct { float first; float second; } stack_pair_60;

  float fStack_58;
  float fStack_54;
  unsigned short uStack_50;
  unsigned short uStack_4e;
  unsigned short uStack_4c;
  unsigned short uStack_4a;
  unsigned short uStack_48;
  unsigned short uStack_46;
  unsigned short uStack_44;
  unsigned short uStack_42;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  
  piVar1 = *(int **)(*param_1 + 0xc);
  (**(int (***)())(*piVar1 + 0x6c))(piVar1,param_4);
  uStack_3c = param_2[1];
  uStack_38 = param_2[2];
  uStack_34 = param_2[3];
  uStack_30 = param_2[4];
  uStack_2c = param_2[5];
  stack_pair_60.first = lbl_821AAD20;
  stack_pair_60.second = lbl_821AAD20;
  fStack_58 = lbl_821AAD20;
  fStack_54 = lbl_821AAD20;
  uStack_40 = *param_2;
  fn_827A8A28(&uStack_40,param_3,&stack_pair_60.first);
  (**(int (***)())(*piVar1 + 0x20))(piVar1,&uStack_40);
  uStack_6a = (unsigned short)(int)stack_pair_60.second;
  uStack_4e = uStack_6a;
  uStack_68 = ((((unsigned __int64)(uStack_68)) & (~(((unsigned __int64)0xFFFF) << 48))) | ((((unsigned __int64)((unsigned short)(int)fStack_58)) & ((unsigned __int64)0xFFFF)) << 48));
  uStack_4c = (((unsigned __int64)(uStack_68) >> 48) & 0xFFFF);
  uStack_6a = (unsigned short)(int)fStack_54;
  uStack_68 = ((((unsigned __int64)(uStack_68)) & (~(((unsigned __int64)0xFFFF) << 48))) | ((((unsigned __int64)((unsigned short)(int)stack_pair_60.first)) & ((unsigned __int64)0xFFFF)) << 48));
  uStack_50 = (((unsigned __int64)(uStack_68) >> 48) & 0xFFFF);
  uStack_4a = uStack_4e;
  uStack_48 = (((unsigned __int64)(uStack_68) >> 48) & 0xFFFF);
  uStack_46 = uStack_6a;
  uStack_44 = uStack_4c;
  uStack_42 = uStack_6a;
  _auStack_6d = CONCAT14(0xff,(int)fStack_54);
  _uStack_70 = CONCAT17(0xff,CONCAT25(0xffff,_auStack_6d));
  uStack_68 = (__int64)(int)stack_pair_60.first;
  (**(int (***)())(*piVar1 + 0x5c))(piVar1,&uStack_70);
  (**(int (***)())(*piVar1 + 0x3c))(piVar1,&uStack_50,4,1,0);
  (**(int (***)())(*piVar1 + 0x40))(piVar1,0xffffffff820116cc,6,1,0);
  (**(int (***)())(*piVar1 + 0x48))(piVar1,0,0,4,0,2);
  (**(int (***)())(*piVar1 + 0x3c))(piVar1,0,0,0,0);
  (**(int (***)())(*piVar1 + 0x40))(piVar1,0,0,0,0);
  (**(int (***)())(*piVar1 + 0x70))(piVar1);
  return 1;
}

