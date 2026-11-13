extern int fn_822315A0();
extern int fn_82266D28();
extern int fn_8266C678();
extern int fn_8266ECF0();
extern unsigned int iStack_7c;
extern unsigned int lbl_82002AE0;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_80;


unsigned int *
fn_8266EE08(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uStack_80;
  int iStack_7c;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  
  uStack_70 = 0;
  uStack_44 = lbl_82002AE0;
  uStack_48 = lbl_82002AE0;
  uStack_6c = 0;
  uStack_64 = 0;
  uStack_68 = 0;
  uStack_5c = 1;
  uStack_60 = 1;
  uStack_4c = 0;
  uStack_50 = 0;
  uStack_54 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  iVar2 = fn_8266C678(param_2,param_4,&uStack_70);
  if (iVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    fn_82266D28(param_1,0);
  }
  else {
    fn_8266ECF0(&uStack_80,param_2,param_3,param_5,param_6,0xffffffffffffffff,&uStack_70,
                  0x18280143);
    iVar2 = iStack_7c;
    *param_1 = 0;
    param_1[1] = 0;
    if (param_1 != &uStack_80) {
      iStack_7c = 0;
      param_1[1] = iVar2;
      uVar1 = *param_1;
      *param_1 = uStack_80;
      uStack_80 = uVar1;
    }
    if (iStack_7c != 0) {
      fn_822315A0(iStack_7c);
    }
  }
  return param_1;
}

