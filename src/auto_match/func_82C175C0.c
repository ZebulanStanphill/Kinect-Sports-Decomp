#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define _iStack_38 ((*(unsigned __int64*)&iStack_38))
extern unsigned int *auStack_40;
extern unsigned int iStack_38;
extern unsigned int uStack_20;
extern unsigned int uStack_28;
extern unsigned int uStack_34;


unsigned __int64
fn_82C175C0(int *param_1,int param_2,int param_3,int param_4,unsigned int param_5,unsigned int param_6,
             unsigned __int64 param_7,int *param_8)

{
  unsigned __int64 uVar1;
  unsigned __int64 *in_stack_00000054;
  unsigned char auStack_40 [8];
  int iStack_38;
  unsigned int uStack_34;
  __int64 lStack_30;
  unsigned __int64 uStack_28;
  unsigned __int64 uStack_20;
  
  uVar1 = 0;
  if ((((param_1 == (int *)0x0) || (*param_1 == 0)) || ((param_2 == 0 && (param_3 != 0)))) ||
     (param_8 == (int *)0x0)) {
    uVar1 = 0xffffffff80070057;
  }
  else if (((param_1[0xb0] == 0) || (param_1[0xae] == 0)) || (param_4 != 0)) {
    param_1[0xad] = 0;
    uStack_20 = 0;
    lStack_30 = (unsigned __int64)param_6 << 0x20;
    _iStack_38 = CONCAT44(param_4,param_5);
    if (in_stack_00000054 != (unsigned __int64 *)0x0) {
      uStack_20 = *in_stack_00000054;
    }
    uStack_28 = param_7;
    uVar1 = (*(int (**)())param_1[0xb2])(param_1,auStack_40);
    if ((-1 < (int)uVar1) && (*(int *)(*param_1 + 0x334) == 0)) {
      param_1[0xad] = 2;
    }
  }
  else if (param_1[0x38] == 0) {
    param_1[0xad] = 1;
  }
  if ((param_8 != (int *)0x0) && (param_1 != (int *)0x0)) {
    *param_8 = param_1[0xad];
  }
  return uVar1;
}

