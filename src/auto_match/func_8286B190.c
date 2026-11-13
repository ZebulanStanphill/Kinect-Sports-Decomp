#define true 1
extern int fn_822402F8();
extern int fn_8260D428();


void fn_8286B190(int param_1,int param_2,int param_3,unsigned int *param_4)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  
  while( true ) {
    uVar3 = param_2 - 1;
    iVar5 = ((int)uVar3 >> 1) + (unsigned int)((int)uVar3 < 0 && (uVar3 & 1) != 0);
    if (param_2 <= param_3) break;
    iVar4 = iVar5 * 0x1c + param_1;
    puVar2 = param_4;
    if (0xf < (unsigned int)param_4[5]) {
      puVar2 = (unsigned int *)*param_4;
    }
    iVar1 = fn_8260D428(iVar4,0,*(unsigned int *)(iVar4 + 0x10),puVar2,param_4[4]);
    if (-1 < iVar1) break;
    fn_822402F8(param_2 * 0x1c + param_1,iVar4);
    param_2 = iVar5;
  }
  fn_822402F8(param_2 * 0x1c + param_1,param_4);
  return;
}

