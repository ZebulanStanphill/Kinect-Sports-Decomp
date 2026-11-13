typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8268B330();
extern int fn_8268B508();
extern int fn_8278FD18();


unsigned __int64 fn_82791378(unsigned __int64 param_1,int param_2)

{
  unsigned int *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  fn_8268B330();
  iVar4 = 0;
  iVar3 = 0;
  while( true ) {
    if ((((int *)(param_2 + 0xc) == (int *)0x0) || (iVar4 < 0)) ||
       (bVar2 = false, *(int *)(param_2 + 0x10) <= iVar4)) {
      bVar2 = true;
    }
    if (bVar2) break;
    puVar1 = *(unsigned int **)(*(int *)(param_2 + 0xc) + iVar3);
    if (puVar1[1] != 0) {
      fn_8278FD18(puVar1,*puVar1);
    }
    fn_8268B508(param_1);
    if (iVar4 < *(int *)(param_2 + 0x10)) {
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    }
  }
  return param_1;
}

