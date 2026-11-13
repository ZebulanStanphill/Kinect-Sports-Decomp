typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82298280();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821956A4;
extern unsigned int lbl_8327F894;


unsigned __int64 fn_822984D0(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  
  fVar3 = lbl_821956A4;
  if (*(float *)(param_1 + 0x80) < lbl_821956A4) {
    fVar2 = *(float *)(param_1 + 0x80) + lbl_8327F894;
    *(float *)(param_1 + 0x80) = fVar2;
    if (fVar3 <= fVar2) {
      *(float *)(param_1 + 0x80) = fVar3;
    }
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x5c) == 0) goto LAB_8229853c;
    bVar4 = true;
    if (*(float *)(param_1 + 0x80) < lbl_821916FC) {
      bVar4 = false;
    }
LAB_8229854c:
    if (!bVar4 && *(int *)(param_1 + 0x54) == 0) goto LAB_82298560;
  }
  else if ((iVar1 < 0xb) || (0xd < iVar1)) {
LAB_8229853c:
    bVar4 = *(int *)(param_1 + 0x48) != iVar1;
    goto LAB_8229854c;
  }
  fn_82298280(param_1);
LAB_82298560:
  *(unsigned int *)(param_1 + 0x54) = 0;
  return 0;
}

