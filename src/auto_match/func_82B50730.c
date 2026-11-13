typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AA66A8();
extern int fn_82B50498();
extern int fn_82B50558();
extern unsigned int iStack_30;


unsigned char fn_82B50730(unsigned __int64 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  unsigned char bVar3;
  int iStack_30;
  unsigned int *puStack_2c;
  
  bVar3 = 0;
  if (*(int *)(param_2 + 0x18) == 0) {
    bVar3 = 1;
  }
  else {
    bVar1 = false;
    fn_82B50498(&iStack_30,*(int *)(param_2 + 0x18),param_1);
    do {
      iVar2 = fn_82B50558(&iStack_30);
      if (iVar2 == 0) goto LAB_82b507ac;
      if (*(int *)(iVar2 + 4) != 0x14) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c1);
      }
      bVar1 = true;
    } while (*(int *)(iVar2 + 0x10) != 0);
    bVar3 = 1;
LAB_82b507ac:
    bVar3 = !bVar1 | bVar3;
    *puStack_2c = *(unsigned int *)(iStack_30 + 0x3d0);
    *(unsigned int **)(iStack_30 + 0x3d0) = puStack_2c;
  }
  return bVar3;
}

