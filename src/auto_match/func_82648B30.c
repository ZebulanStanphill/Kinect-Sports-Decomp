#define true 1
extern int fn_8265C940();
extern int fn_8265C990();


unsigned __int64 fn_82648B30(int param_1,unsigned int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  
  *param_3 = 0;
  iVar3 = *(int *)(param_1 + 0x5510);
  piVar1 = (int *)(param_1 + 0x5510);
  while( true ) {
    piVar2 = piVar1;
    if ((iVar3 != -1) || (piVar1[1] != -1)) goto LAB_82648bd8;
    piVar2 = (int *)piVar1[3];
    if (piVar2 == (int *)0x0) break;
    iVar3 = *piVar2;
    piVar1 = piVar2;
  }
  piVar2 = (int *)fn_8265C940(0x1780,0x64800000);
  if (piVar2 != (int *)0x0) {
    iVar3 = fn_8265C940(0x1000,0xffffffffbc800000);
    piVar2[2] = iVar3;
    if (iVar3 != 0) {
      piVar1[3] = (int)piVar2;
LAB_82648bd8:
      uVar5 = 0;
      do {
        if (*(char *)(uVar5 + (int)piVar2) != -1) break;
        uVar5 = uVar5 + 1;
      } while (uVar5 < 8);
      uVar4 = 0;
      do {
        if ((*(unsigned char *)(uVar5 + (int)piVar2) >> (uVar4 & 0x3f) & 1) == 0) break;
        uVar4 = uVar4 + 1;
      } while (uVar4 < 8);
      *param_2 = piVar2;
      *(unsigned char *)(uVar5 + (int)piVar2) = (unsigned char)(1 << (uVar4 & 0x3f)) | *(unsigned char *)(uVar5 + (int)piVar2);
      *param_3 = (uVar5 * 8 + uVar4) * 0x40 + piVar2[2];
      return 0;
    }
    fn_8265C990(piVar2,0x24800000);
  }
  return 0xffffffff8007000e;
}

