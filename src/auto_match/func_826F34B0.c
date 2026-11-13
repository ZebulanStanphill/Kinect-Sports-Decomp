typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_82683F88();
extern unsigned int iStack_40;


unsigned __int64 fn_826F34B0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  unsigned __int64 uVar6;
  int iVar7;
  int iStack_40;
  
  iVar1 = iStack_40;
  if (*(int *)(*(int *)(param_1 + 8) + 8) == 0) {
    if ((*(unsigned int *)(param_1 + 0xc) != 0) && ((param_3 & 0x200000) == 0)) {
      fn_82683F88((unsigned __int64)*(unsigned int *)(param_1 + 0xc) + 0xc,0xffffffff820059f0,param_2);
    }
    uVar6 = 0;
  }
  else {
    if ((param_3 & 0x200000) == 0) {
      bVar4 = true;
      bVar3 = false;
      if (*(int *)(param_1 + 0xc) != 0) {
        fn_8267C4C8();
      }
      iVar1 = *(int *)(param_1 + 0xc);
      iVar5 = iVar1;
      iVar7 = iStack_40;
    }
    else {
      bVar4 = false;
      bVar3 = true;
      iStack_40 = 0;
      iVar5 = iStack_40;
      iVar7 = 0;
    }
    iStack_40 = iVar5;
    piVar2 = *(int **)(*(int *)(param_1 + 8) + 8);
    uVar6 = (**(int (***)())(*piVar2 + 0xc))(piVar2,param_2,iStack_40,0x21,0x1b6);
    if ((bVar4) && (iVar1 != 0)) {
      fn_8267C4F0(iVar1);
    }
    if ((bVar3) && (iVar7 != 0)) {
      fn_8267C4F0(iVar7);
    }
  }
  return uVar6;
}

