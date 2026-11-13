extern int fn_822C72E0();
extern int fn_822D6AB8();
extern int fn_8288B760();


unsigned __int64 fn_822CE1C0(int param_1,unsigned __int64 param_2)

{
  int *piVar1;
  unsigned int uVar3;
  __int64 lVar2;
  int iVar5;
  unsigned __int64 uVar4;
  
  iVar5 = (int)param_2;
  if (iVar5 != 1) {
    if (iVar5 == 2) {
      uVar4 = 0xffffffff821ad26c;
      goto LAB_822ce214;
    }
    if ((iVar5 < 0x13) || (0x17 < iVar5)) {
      uVar4 = 0xffffffff821ad278;
      goto LAB_822ce214;
    }
  }
  uVar4 = 0xffffffff821ad25c;
LAB_822ce214:
  uVar4 = fn_822C72E0(*(unsigned int *)(*(int *)(param_1 + 0x114) + 0x20),uVar4);
  if ((int)uVar4 != 0) {
    if (*(int *)(param_1 + 0x168) == 0) {
      uVar3 = *(unsigned int *)(param_1 + 0x16c);
    }
    else {
      uVar3 = fn_8288B760();
      uVar3 = uVar3 & 0xff;
    }
    if (uVar3 != 0) {
      piVar1 = *(int **)(param_1 + 0x168);
      if ((piVar1 != (int *)0x0) && (piVar1[0x2f] != 0)) {
        lVar2 = (**(int (***)())(*piVar1 + 0x50))();
        fn_822D6AB8(lVar2 + 0xb0,param_2);
      }
    }
  }
  return uVar4;
}

