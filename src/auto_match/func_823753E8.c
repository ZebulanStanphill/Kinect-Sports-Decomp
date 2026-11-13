extern int fn_822315A0();
extern int fn_822AA770();
extern int fn_822B17A8();
extern int fn_8236FDE0();
extern int fn_823807F0();


void fn_823753E8(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(unsigned int *)(param_1 + 0x664);
  *(int *)(param_1 + 0xa10) = *(int *)(param_1 + 0xa10) + 1;
  iVar3 = *(int *)(param_3 + 0x24);
  iVar2 = fn_8236FDE0(param_3);
  if ((unsigned char)((iVar2 == 0) + 0xdU) < 0x1e) {
    fn_823807F0(uVar1);
  }
  if ((param_5 != 0x10) && (param_5 == 0xf)) {
    fn_822AA770(*(unsigned int *)(param_4 + 0x1c));
  }
  if (iVar3 != 0) {
    *(unsigned int *)(*(int *)(param_1 + 0x7dc) + 0x24) = 1;
    iVar3 = *(int *)(iVar3 + 0x34);
    if (iVar3 != 0) {
      fn_822B17A8(iVar3,0x33,0);
    }
  }
  if (*(int *)(param_1 + 0x204) == 0) {
    iVar3 = (*(int *)(param_3 + 0x2c) * 2 + *(int *)(param_3 + 0x28)) * 0x88 + param_1 + 0xa14;
    *(int *)(iVar3 + 0x24) = *(int *)(iVar3 + 0x24) + 1;
  }
  if (*(int *)(param_2 + 4) != 0) {
    fn_822315A0();
  }
  return;
}

