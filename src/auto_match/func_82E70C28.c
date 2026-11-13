extern int fn_82E6F498();
extern int fn_82E70AB8();
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


unsigned __int64
fn_82E70C28(int *param_1,unsigned __int64 param_2,int param_3,__int64 *param_4,unsigned __int64 *param_5,
             unsigned __int64 param_6,unsigned __int64 param_7)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  __int64 alStack_50 [10];
  
  if (param_4 == (__int64 *)0x0) {
    return 0xffffffff80004003;
  }
  *param_4 = 0;
  if (param_5 != (unsigned __int64 *)0x0) {
    *param_5 = 0xffffffffffffffff;
  }
  if ((param_1[0x16] != 0) && (param_1[0xb] != 0)) {
    uStack_58 = 0;
    uVar1 = (**(int (***)())(*param_1 + 8))(param_1,&uStack_58);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    if (uStack_58 != 0) {
      param_2 = param_2 / uStack_58;
      trapDoubleWordImmediate(6,(unsigned __int64)uStack_58,0);
      if (0xffffffff < param_2) {
        return 0xffffffffc00d3a9d;
      }
      alStack_50[0] = 0;
      uVar1 = (**(int (***)())(*param_1 + 0x24))(param_1,param_2,alStack_50,0);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uStack_60 = 0;
      uVar1 = fn_82E6F498(param_1,alStack_50[0],&uStack_60);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      if (param_3 == 0) {
        uVar2 = (unsigned __int64)uStack_60;
        *param_4 = (unsigned int)param_1[0x17] * uVar2;
        if (param_5 == (unsigned __int64 *)0x0) {
          return uVar1;
        }
        uVar1 = fn_82E70AB8(param_1,param_2,uVar2,uStack_58 * 10000,param_5,param_6,param_7,uVar2)
        ;
        return uVar1;
      }
      uStack_5c = 0;
      uVar1 = (**(int (***)())(*(int *)param_1[0x16] + 0x38))((int *)param_1[0x16],&uStack_5c);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      do {
        param_2 = param_2 + 1;
        if (uStack_5c <= param_2) goto LAB_82e70de4;
        uStack_54 = 0;
        alStack_50[0] = alStack_50[0] + 6;
        uVar1 = fn_82E6F498(param_1,alStack_50[0],&uStack_54);
        if ((int)uVar1 < 0) goto LAB_82e70de4;
      } while (uStack_54 == uStack_60);
      uStack_60 = uStack_54;
LAB_82e70de4:
      if (uStack_5c <= param_2) {
        *param_4 = -1;
        return uVar1;
      }
      *param_4 = (unsigned __int64)(unsigned int)param_1[0x17] * (unsigned __int64)uStack_60;
      return uVar1;
    }
  }
  return 0xffffffffc00d36bb;
}

