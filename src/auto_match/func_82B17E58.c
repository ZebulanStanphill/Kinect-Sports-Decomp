extern unsigned int *auStack_4c;
extern unsigned int *auStack_50;
extern unsigned int *auStack_54;
extern int fn_82B17968();
extern int fn_82B82D28();
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


unsigned __int64
fn_82B17E58(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             int param_5,unsigned __int64 param_6,int param_7)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned char auStack_54 [4];
  unsigned char auStack_50 [4];
  unsigned char auStack_4c [76];
  
  if ((param_7 == 0) && (uVar1 = *(unsigned int *)(param_5 + 8) >> 7 & 0x7f, uVar1 != 1)) {
    if (uVar1 == 5) {
      uVar2 = 0x13;
    }
    else if (uVar1 == 6) {
      uVar2 = 0x10;
    }
    else if (uVar1 == 7) {
      uVar2 = 0x12;
    }
    else {
      if (uVar1 != 8) goto LAB_82b17f64;
      uVar2 = 0x14;
    }
    fn_82B82D28(*(unsigned int *)(param_5 + 0x2c),param_6,&uStack_58,&uStack_5c,&uStack_60,0,0,0
                     );
    fn_82B82D28(*(unsigned int *)(param_5 + 0x30),param_6,auStack_4c,auStack_50,auStack_54,0,0,0
                     );
    uVar2 = fn_82B17968(param_1,param_2,param_3,param_4,uStack_58,uStack_5c,uStack_60,uVar2);
  }
  else {
LAB_82b17f64:
    uVar2 = 0;
  }
  return uVar2;
}

