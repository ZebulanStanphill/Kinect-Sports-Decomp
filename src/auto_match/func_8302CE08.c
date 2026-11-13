extern int fn_82FA5060();
extern int fn_8300CE88();
extern int fn_8302B6E0();
extern int fn_83034DB0();
extern unsigned int lbl_831BC768;


int * fn_8302CE08(int param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned int uVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = (int *)0x0;
  if ((*(unsigned char *)(param_1 + 0x11f) & 1) == 0) {
    iVar2 = param_1 + 0x8c;
    piVar4 = (int *)fn_8302B6E0(iVar2,param_2);
    if (piVar4 == (int *)0x0) {
      iVar5 = fn_82FA5060(lbl_831BC768,0x10);
      if ((iVar5 != 0) && (piVar4 = (int *)fn_8300CE88(), piVar4 != (int *)0x0)) {
        iVar5 = fn_83034DB0(param_2,param_1);
        if (iVar5 == 1) {
          piVar4[1] = (int)param_2;
          uVar1 = (param_2 & 0xffffffff) * 0x8421085 >> 0x20;
          uVar1 = ((param_2 - uVar1 & 0xffffffff) >> 1) + uVar1 >> 4;
          iVar5 = (int)((param_2 - ((uVar1 & 0x7ffffff) * 0x20 - uVar1) & 0xffffffff) << 2);
          piVar4[2] = *(int *)(iVar5 + iVar2);
          *(int **)(iVar5 + iVar2) = piVar4;
          *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
          return piVar4;
        }
        (**(int (***)())(*piVar4 + 4))(piVar4);
      }
      return (int *)0x0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x10c) == 0) {
      iVar2 = fn_82FA5060(lbl_831BC768,0x10);
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = fn_8300CE88();
      }
      *(unsigned int *)(param_1 + 0x10c) = uVar3;
    }
    if (*(int **)(param_1 + 0x10c) != (int *)0x0) {
      return *(int **)(param_1 + 0x10c);
    }
  }
  return piVar4;
}

