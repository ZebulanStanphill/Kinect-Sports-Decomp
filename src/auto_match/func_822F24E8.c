extern int fn_822C16B8();
extern int fn_823B3908();
extern int fn_8265C9E0();
extern int fn_8265CA20();


void fn_822F24E8(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x1e4);
  uVar2 = fn_8265C9E0(0x30);
  if ((uVar2) != 0) {
    uVar2 = fn_823B3908(uVar2,uVar1);
  } else {
    uVar2 = 0;
  }
  uVar3 = *(unsigned int *)(param_1 + 0x24);
  if ((uVar2) != uVar3) {
    if (uVar3 != 0) {
      fn_822C16B8(uVar3 + 8);
      fn_8265CA20(uVar3);
    }
    *(int *)(param_1 + 0x24) = (int)uVar2;
  }
  return;
}

