#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_40;
extern int fn_8288B918();
extern int fn_8288FCA8();
extern int fn_82891250();
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_828922B0(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned char auStack_40 [64];
  
  uVar1 = *param_1;
  uStack_4c = 0;
  uStack_50 = uVar1;
  if (param_1[4] != 0) {
    fn_8288B918(&uStack_50);
  }
  uStack_44 = 0;
  uStack_48 = uVar1;
  fn_8288FCA8(auStack_40,param_1,(unsigned __int64)uVar1 << 0x20,CONCAT44(uStack_50,uStack_4c));
  uStack_48 = *param_1;
  uStack_44 = 0;
  fn_82891250(param_1,(unsigned __int64)uStack_48 << 0x20,param_2,param_3);
  return;
}

