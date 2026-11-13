extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_823FBED0();
extern int fn_8265C9E0();


int * fn_823F4D98(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                   int param_7,int param_8)

{
  unsigned __int64 uVar1;
  int iVar2;
  char cVar3;
  int in_stack_00000054;
  int in_stack_0000005c;
  
  uVar1 = fn_8265C9E0(0x80);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_823FBED0(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(unsigned int *)(iVar2 + 0x18) = 0x10;
  *(unsigned int *)(iVar2 + 0x1c) = 0x20;
  *(unsigned int *)(iVar2 + 0x20) = 0x30;
  *(unsigned int *)(iVar2 + 0x24) = 0x34;
  *(unsigned int *)(iVar2 + 0x14) = 0;
  *(unsigned int *)(iVar2 + 0x28) = 0x35;
  *(unsigned int *)(iVar2 + 0x2c) = 0x36;
  *(unsigned int *)(iVar2 + 0x30) = 0x38;
  *(unsigned int *)(iVar2 + 0x34) = 0x3c;
  if (iVar2 != 0) {
    cVar3 = fn_8223AAC0(iVar2);
    if (cVar3 != '\0') {
      if (param_1[1] != 0) {
        fn_822315A0();
      }
      param_1[1] = iVar2;
      *param_1 = iVar2 + 0xc;
    }
    fn_822315A0(iVar2);
  }
  if (*(int *)(param_2 + 4) != 0) {
    fn_822315A0();
  }
  if (*(int *)(param_3 + 4) != 0) {
    fn_822315A0();
  }
  if (*(int *)(param_4 + 4) != 0) {
    fn_822315A0();
  }
  if (*(int *)(param_5 + 4) != 0) {
    fn_822315A0();
  }
  if (*(int *)(param_6 + 4) != 0) {
    fn_822315A0();
  }
  if (*(int *)(param_7 + 4) != 0) {
    fn_822315A0();
  }
  if (*(int *)(param_8 + 4) != 0) {
    fn_822315A0();
  }
  if (*(int *)(in_stack_00000054 + 4) != 0) {
    fn_822315A0();
  }
  if (*(int *)(in_stack_0000005c + 4) != 0) {
    fn_822315A0();
  }
  return param_1;
}

