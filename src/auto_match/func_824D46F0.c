extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_830B4CB0();


void fn_824D46F0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  unsigned __int64 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  *(int *)(param_1 + 0x170) = param_2;
  iVar1 = *(int *)(param_1 + 0x178);
  iVar2 = *(int *)(param_1 + 0x174);
  iVar5 = 0;
  iVar6 = 0;
  if (iVar1 != 0) {
    cVar3 = fn_8223AAC0(iVar1);
    if (cVar3 != '\0') {
      iVar5 = iVar1;
      iVar6 = iVar2;
    }
  }
  iVar1 = *(int *)(param_1 + 0x180);
  iVar2 = *(int *)(param_1 + 0x17c);
  iVar7 = 0;
  iVar8 = 0;
  if ((iVar1 != 0) && (cVar3 = fn_8223AAC0(iVar1), cVar3 != '\0')) {
    iVar7 = iVar1;
    iVar8 = iVar2;
  }
  if ((iVar6 != 0) && (iVar8 != 0)) {
    if ((param_2 == 2) || (param_2 == 3)) {
      fn_830B4CB0(iVar6,1);
      uVar4 = 1;
    }
    else {
      fn_830B4CB0(iVar6,0);
      uVar4 = 0;
    }
    fn_830B4CB0(iVar8,uVar4);
  }
  if (iVar7 != 0) {
    fn_822315A0(iVar7);
  }
  if (iVar5 != 0) {
    fn_822315A0(iVar5);
  }
  return;
}

