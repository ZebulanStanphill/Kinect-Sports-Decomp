#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT21(h,l) ((unsigned int)((((unsigned short)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT31(h,l) ((unsigned int)((((unsigned int)(h)) << 8) | ((unsigned char)(l))))
extern int fn_82766718();
extern int fn_827672A0();


void fn_82769CD8(int param_1,int param_2,unsigned int *param_3)

{
  unsigned char bVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned char *puVar4;
  
  puVar4 = (unsigned char *)(**(int **)(param_1 + 8) + param_2 * 8 + *(int *)(param_1 + 0x10) + 4);
  fn_827672A0(param_3,CONCAT31(CONCAT21(CONCAT11(puVar4[3],puVar4[2]),puVar4[1]),*puVar4));
  bVar1 = *(unsigned char *)(*(int *)*param_3 + param_3[1]);
  if ((bVar1 & 1) == 0) {
    uVar2 = (unsigned int)(bVar1 >> 1);
    iVar3 = 1;
  }
  else {
    iVar3 = 2;
    uVar2 = (unsigned int)((unsigned char *)(*(int *)*param_3 + param_3[1]))[1] << 7 | (unsigned int)(bVar1 >> 1);
  }
  param_3[6] = uVar2;
  param_3[1] = param_3[1] + iVar3;
  fn_82766718(param_3);
  return;
}

