extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_8242E858();
extern int fn_8243D2D8();
extern int fn_82490EA0();
extern int fn_82490F58();
extern int fn_82522588();
extern unsigned int iStack_4c;
extern unsigned int lbl_821929B0;
extern unsigned int lbl_82193CF0;
extern unsigned int lbl_82195E64;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82493900(double param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar5;
  unsigned __int64 uVar4;
  unsigned __int64 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  unsigned char auStack_50 [4];
  int iStack_4c;
  
  fVar1 = (float)(param_1 + (double)*(float *)(param_2 + 0x40));
  dVar9 = (double)fVar1;
  *(float *)(param_2 + 0x40) = fVar1;
  dVar8 = (double)*(float *)(param_2 + 0x2c);
  dVar7 = (double)fn_82490F58(param_5,*(unsigned int *)(param_2 + 0x34),
                               *(unsigned int *)(param_2 + 0x38));
  if ((*(int *)(param_2 + 0x44) == 0) && ((float)(dVar7 / dVar8) < lbl_82195E64)) {
    if ((float)(dVar7 / dVar8) - lbl_82193CF0 < (float)(dVar9 / dVar8)) {
      fn_8243D2D8((unsigned __int64)*(unsigned int *)(*(int *)(param_2 + 0x48) + 0x174) + 8,
                        0xffffffff821bec48,0,0);
      *(unsigned int *)(param_2 + 0x44) = 1;
    }
  }
  iVar2 = *(int *)(param_2 + 0x48);
  iVar3 = *(int *)(param_2 + 0x1c);
  for (uVar6 = (unsigned __int64)*(unsigned int *)(iVar2 + 0x30);
      (uVar6 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(iVar2 + 0x34); uVar6 = uVar6 + 8) {
    piVar5 = (int *)fn_82522588(auStack_50,uVar6);
    *(int *)(*piVar5 + 0x234) = (int)param_4 - iVar3;
    if (iStack_4c != 0) {
      fn_822315A0();
    }
  }
  uVar4 = fn_82490EA0((double)lbl_821929B0,param_5,param_4);
  if ((int)uVar4 != -1) {
    fn_8242E858(*(unsigned int *)(param_2 + 0x48),uVar4);
  }
  return;
}

