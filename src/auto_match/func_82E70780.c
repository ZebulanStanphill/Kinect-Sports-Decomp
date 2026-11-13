extern unsigned int *auStack_38;
extern int fn_82E6F498();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


unsigned __int64
fn_82E70780(unsigned __int64 param_1,unsigned int param_2,int *param_3,__int64 param_4,unsigned int *param_5)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int auStack_38;
  
  if ((param_3 == (int *)0x0) || (param_5 == (unsigned int *)0x0)) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    *param_5 = 0xffffffff;
    uVar1 = (**(int (***)())(*param_3 + 0x24))(param_3,&uStack_40);
    if ((-1 < (int)uVar1) &&
       (uVar1 = (**(int (***)())(*param_3 + 0x1c))(param_3,&auStack_38), -1 < (int)uVar1)) {
      uVar3 = 0;
      uVar2 = 0;
      if (uStack_40 != 0) {
        do {
          uVar1 = fn_82E6F498(param_1,param_4,&uStack_3c);
          if ((int)uVar1 < 0) {
            return uVar1;
          }
          if (param_2 == uStack_3c) {
            *param_5 = uVar3;
            return uVar1;
          }
          uVar2 = uStack_40;
          if (param_2 < uStack_3c) break;
          uVar3 = uVar3 + 1;
          param_4 = (unsigned __int64)auStack_38 + param_4;
        } while (uVar3 < uStack_40);
      }
      if (uVar3 == uVar2) {
        *param_5 = uVar2;
      }
      uVar1 = 0xffffffffc00d36d5;
    }
  }
  return uVar1;
}

