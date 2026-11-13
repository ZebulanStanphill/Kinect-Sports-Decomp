extern int fn_82250A18();
extern int fn_822ABA88();
extern int fn_82390DC0();
extern int fn_8288B760();
extern unsigned int lbl_832975B0;


void fn_82377388(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,int param_6,unsigned __int64 param_7)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  
  iVar2 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar2 = fn_82250A18();
  }
  if ((*(char *)(iVar2 + 4) != '\0') && (iVar2 = *(int *)(param_3 + 0x84), iVar2 != 0)) {
    piVar1 = *(int **)(**(int **)(param_3 + 8) + param_6 * 4);
    iVar3 = fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1),param_7);
    if (*(int *)(iVar3 + 0x168) == 0) {
      uVar4 = *(unsigned int *)(iVar3 + 0x16c);
    }
    else {
      uVar4 = fn_8288B760();
      uVar4 = uVar4 & 0xff;
    }
    if ((uVar4 != 0) && (iVar2 = *(int *)(iVar2 + 0x88), iVar2 != 0)) {
      fn_82390DC0(param_1,param_2,(unsigned __int64)*(unsigned int *)(iVar2 + 0x78) + 0xc0);
    }
  }
  return;
}

