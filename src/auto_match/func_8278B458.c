typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8267C498();
extern unsigned int uStack_30;


int fn_8278B458(int param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  unsigned int uStack_30;
  
  iVar1 = uStack_30;
  if ((*(unsigned short *)(param_1 + 0x2a) >> 9 & 1) == 0) {
    iVar5 = 0;
    bVar3 = true;
    bVar2 = false;
    uStack_30 = 0;
    iVar4 = uStack_30;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x18);
    bVar3 = false;
    bVar2 = true;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    }
    iVar1 = *(int *)(param_1 + 0x18);
    iVar4 = iVar1;
    iVar5 = uStack_30;
  }
  uStack_30 = iVar4;
  if ((bVar3) && (iVar5 != 0)) {
    fn_8267C498();
  }
  if ((bVar2) && (iVar1 != 0)) {
    fn_8267C498(iVar1);
  }
  return uStack_30;
}

