#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT21(h,l) ((unsigned int)((((unsigned short)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT31(h,l) ((unsigned int)((((unsigned int)(h)) << 8) | ((unsigned char)(l))))
extern int fn_826C8C70();
extern int fn_826E7800();


int fn_826E8858(int param_1,int *param_2)

{
  unsigned char uVar1;
  unsigned char uVar2;
  unsigned char uVar3;
  unsigned char uVar4;
  int iVar5;
  unsigned short uVar6;
  int iVar7;
  unsigned char *puVar8;
  __int64 lVar9;
  unsigned int uVar10;
  
  *(unsigned char *)(param_1 + 0x15) = 0;
  lVar9 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x34) - (unsigned __int64)*(unsigned int *)(param_1 + 0x30)) +
          (unsigned __int64)*(unsigned int *)(param_1 + 0x2c);
  if ((int)(*(unsigned int *)(param_1 + 0x30) - *(unsigned int *)(param_1 + 0x2c)) < 2) {
    fn_826E7800(param_1,2);
  }
  iVar7 = *(int *)(param_1 + 0x2c) + 2;
  puVar8 = (unsigned char *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
  uVar1 = puVar8[1];
  uVar2 = *puVar8;
  *(int *)(param_1 + 0x2c) = iVar7;
  uVar6 = CONCAT11(uVar1,uVar2);
  uVar10 = uVar6 & 0x3f;
  iVar5 = (int)(unsigned int)uVar6 >> 6;
  if (uVar10 == 0x3f) {
    *(unsigned char *)(param_1 + 0x15) = 0;
    if (*(int *)(param_1 + 0x30) - iVar7 < 4) {
      fn_826E7800(param_1,4);
    }
    puVar8 = (unsigned char *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
    uVar1 = puVar8[3];
    uVar2 = puVar8[2];
    uVar3 = puVar8[1];
    uVar4 = *puVar8;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 4;
    uVar10 = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4);
  }
  param_2[1] = (int)lVar9;
  *param_2 = iVar5;
  param_2[2] = uVar10;
  param_2[3] = (*(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x2c);
  if ((*(unsigned int *)(param_1 + 0xc) & 1) != 0) {
    fn_826C8C70(param_1,0xffffffff8200d6e0,iVar5,uVar10,lVar9);
  }
  *(unsigned int *)((*(int *)(param_1 + 0x28) + 8) * 4 + param_1) =
       (*(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x2c) + uVar10;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return iVar5;
}

