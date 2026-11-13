#define true 1
extern int fn_82A2B900();
extern int fn_82A2D260();
extern int fn_82A2D670();
extern int fn_82A2D810();


unsigned int  fn_82A2D890(int param_1,unsigned int *param_2,int *param_3)

{
  unsigned int bVar1;
  unsigned int uVar2;
  unsigned int iVar3;
  unsigned int uVar4;
  int iVar5;
  
  iVar3 = (unsigned int)*(unsigned char *)(param_1 + 0xc9) * 8 + *(int *)(param_1 + 0x30);
  bVar1 = *(unsigned char *)(iVar3 + 6);
  while( true ) {
    uVar4 = (unsigned int)bVar1;
    iVar5 = uVar4 * 8 + *(int *)(param_1 + 0x30);
    if (*(char *)(iVar5 + 4) == '\0') break;
    if (iVar5 == iVar3) {
      fn_82A2D260(param_1,0xffffffffc00000e5);
      return 0xffffffffc00000e5;
    }
    bVar1 = *(unsigned char *)(iVar5 + 6);
  }
  if ((*(unsigned char *)(iVar5 + 7) & 0x40) != 0) {
    if ((*(unsigned char *)(iVar5 + 7) & 8) == 0) {
      uVar2 = fn_82A2D670(param_1,uVar4,iVar5);
    }
    else {
      uVar2 = fn_82A2D810(param_1);
    }
    if ((int)uVar2 < 0) {
      return uVar2;
    }
  }
  *(unsigned char *)(iVar5 + 7) = 0;
  fn_82A2B900(param_1,uVar4,0);
  *param_2 = (unsigned int)bVar1;
  *param_3 = iVar5;
  return 0;
}

