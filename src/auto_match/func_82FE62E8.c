extern int fn_82F691F0();
extern unsigned int iStack_2c;
extern unsigned int lbl_82006848;


void fn_82FE62E8(int param_1,unsigned int *param_2)

{
  int iVar1;
  float fVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int iStack_2c;
  
  iVar1 = *(int *)(param_1 + 8);
  param_2[2] = 0x2d;
  uVar4 = (__int64)(int)(unsigned int)*(unsigned short *)(param_2 + 3) * (__int64)iVar1;
  if (*(short *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(*param_2,0,uVar4);
  }
  fVar2 = *(float *)(*(int *)(param_1 + 0x1c) + 4) + *(float *)(param_1 + 0x10);
  if (fVar2 < lbl_82006848) {
    fVar2 = lbl_82006848;
  }
  iStack_2c = (int)(__int64)((float)*(unsigned int *)(param_1 + 4) * fVar2);
  uVar3 = (__int64)(iStack_2c * *(short *)(param_1 + 0x14)) * (__int64)*(int *)(param_1 + 8);
  if ((uVar3 & 0xffffffff) <= (unsigned __int64)*(unsigned int *)(param_1 + 0xc)) {
    param_2[2] = 0x11;
    return;
  }
  uVar3 = uVar3 - *(unsigned int *)(param_1 + 0xc);
  if ((uVar4 & 0xffffffff) < (uVar3 & 0xffffffff)) {
    uVar3 = uVar4;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(*param_2,0,uVar3);
}

