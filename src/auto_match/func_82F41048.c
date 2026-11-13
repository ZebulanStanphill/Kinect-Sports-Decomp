extern int fn_82F69F30();
extern int fn_82F6ADA8();


unsigned __int64
fn_82F41048(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,unsigned int *param_5)

{
  int iVar1;
  unsigned int uVar2;
  
  iVar1 = fn_82F6ADA8(param_2,0xffffffff82163024);
  if (iVar1 != 0) {
    return 0;
  }
  if (param_4 == 0) {
    uVar2 = *param_5;
  }
  else if (param_4 == 1) {
    uVar2 = fn_82F69F30(param_5,0,10);
  }
  else if (param_4 == 4) {
    uVar2 = (unsigned int)*(unsigned __int64 *)param_5;
  }
  else {
    if (param_4 != 5) {
      return 0xffffffff80070057;
    }
    uVar2 = (unsigned int)*(unsigned short *)param_5;
  }
  if ((int)uVar2 < 1) {
    return 0xffffffff80070057;
  }
  return 0;
}

