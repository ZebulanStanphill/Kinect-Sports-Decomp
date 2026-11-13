#define _uStack00000030 ((*(unsigned __int64*)&uStack00000030))
#define _uStack00000038 ((*(unsigned __int64*)&uStack00000038))
extern int fn_830273D8();
extern unsigned int uStack00000030;
extern unsigned int uStack00000034;
extern unsigned int uStack00000038;


unsigned __int64
fn_83027658(int param_1,unsigned int param_2,unsigned int param_3,unsigned __int64 param_4,unsigned __int64 param_5,
             unsigned int param_6)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int uStack00000030;
  unsigned int uStack00000034;
  unsigned int uStack00000038;
  
  if (((*(int *)(param_1 + 0x3c) != 0) && (*(int *)(param_1 + 0x44) != 0)) &&
     (param_2 < *(unsigned int *)(param_1 + 0x48))) {
    piVar2 = (int *)(param_2 * 0x10 + *(int *)(param_1 + 0x44));
    uVar1 = piVar2[1];
    if ((0 < (int)uVar1) && (param_3 < uVar1)) {
      uStack00000030 = (unsigned int)((unsigned __int64)param_4 >> 0x20);
      uStack00000034 = (unsigned int)param_4;
      puVar3 = (unsigned int *)(param_3 * 0x10 + *piVar2);
      uStack00000038 = (unsigned int)((unsigned __int64)param_5 >> 0x20);
      puVar3[3] = param_6;
      *puVar3 = uStack00000030;
      puVar3[1] = uStack00000034;
      puVar3[2] = uStack00000038;
      _uStack00000030 = param_4;
      _uStack00000038 = param_5;
      fn_830273D8();
      return 1;
    }
  }
  return 0x1f;
}

