extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_823FC870();
extern int fn_8265C9E0();


int * fn_823F6760(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  unsigned __int64 uVar1;
  int iVar2;
  char cVar3;
  
  uVar1 = fn_8265C9E0(0x44);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_823FC870(uVar1,param_2,param_3,param_4,param_5);
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(unsigned int *)(iVar2 + 0x14) = 0;
  *(unsigned int *)(iVar2 + 0x18) = 0x30;
  *(unsigned int *)(iVar2 + 0x1c) = 0x38;
  *(unsigned int *)(iVar2 + 0x20) = 0x58;
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
  return param_1;
}

