typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AB15D0();
extern int fn_82B9A6C0();
extern int fn_82BA1980();
extern int fn_82BC0088();


void fn_82BA47F0(int param_1)

{
  bool bVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  unsigned __int64 uVar6;
  
  iVar3 = *(int *)(param_1 + 0xc);
  uVar2 = (**(int (***)())(**(int **)(iVar3 + 0x5d0) + 0x1c))();
  iVar3 = fn_82B9A6C0(*(unsigned int *)(param_1 + 0x10),0,uVar2,0xffffffff82b7c800,iVar3);
  if (iVar3 == 1) {
    iVar3 = *(int *)(param_1 + 0x60);
    bVar1 = false;
    uVar6 = 0;
    if (0 < *(int *)(iVar3 + 4)) {
      iVar5 = 0;
      do {
        if ((uVar6 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar3 + 4)) {
          piVar4 = (int *)(*(int *)(iVar3 + 8) + iVar5);
        }
        else {
          piVar4 = (int *)fn_82BC0088(iVar3,uVar6);
        }
        if (*(int *)(*piVar4 + 0x50) == 0x17) {
          bVar1 = true;
          break;
        }
        iVar3 = *(int *)(param_1 + 0x60);
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + 4;
      } while ((int)uVar6 < *(int *)(iVar3 + 4));
    }
    if (!bVar1) {
      fn_82BA1980(param_1);
    }
  }
  else if (iVar3 == 3) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff82196f10,0xffffffff820deb50,0x502);
  }
  return;
}

