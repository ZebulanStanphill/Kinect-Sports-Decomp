extern int fn_827912D8();
extern int fn_827A3A50();


void fn_827A4F70(int param_1,unsigned __int64 param_2)

{
  unsigned short uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  
  if ((param_2 & 0x102) == 0) {
    uVar2 = fn_827912D8(*(unsigned int *)(*(int *)(param_1 + 8) + 8));
    if (*(unsigned int *)(param_1 + 0x18) <= uVar2) {
      return;
    }
    uVar3 = fn_827912D8(*(unsigned int *)(*(int *)(param_1 + 8) + 8));
    uVar1 = *(unsigned short *)(param_1 + 0x68);
  }
  else {
    uVar1 = *(unsigned short *)(param_1 + 0x68);
    if (((uVar1 & 1) != 0) && ((uVar1 >> 1 & 1) == 0)) {
      return;
    }
    uVar3 = 0;
  }
  fn_827A3A50(param_1,uVar3,uVar1 >> 1 & 1);
  return;
}

