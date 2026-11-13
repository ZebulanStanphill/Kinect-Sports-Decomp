typedef unsigned char bool;
#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT21(h,l) ((unsigned int)((((unsigned short)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT31(h,l) ((unsigned int)((((unsigned int)(h)) << 8) | ((unsigned char)(l))))
extern unsigned int *auStack_3c;
extern int fn_8267BE38();
extern int fn_8268B330();
extern int fn_826C8C70();
extern int fn_826E3F28();
extern int fn_826E7800();
extern int fn_826E8660();
extern unsigned int uStack_40;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_826E4EA8(unsigned __int64 param_1,int param_2,unsigned __int64 param_3)

{
  unsigned char uVar1;
  unsigned char uVar2;
  unsigned char uVar3;
  unsigned char uVar4;
  unsigned char uVar5;
  unsigned char uVar6;
  unsigned int uVar7;
  unsigned short uVar8;
  unsigned short uVar9;
  __int64 lVar10;
  unsigned int *puVar11;
  int iVar12;
  unsigned char *puVar14;
  unsigned __int64 uVar13;
  unsigned int uVar15;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned char bVar16;
  unsigned int uStack_40;
  unsigned int auStack_3c [15];
  
  *(unsigned char *)(param_2 + 0x15) = 0;
  uVar15 = 0;
  if (*(int *)(param_2 + 0x30) - *(int *)(param_2 + 0x2c) < 2) {
    fn_826E7800(param_2,2);
  }
  iVar12 = *(int *)(param_2 + 0x2c) + 2;
  puVar14 = (unsigned char *)(*(int *)(param_2 + 0x3c) + *(int *)(param_2 + 0x2c));
  uVar1 = puVar14[1];
  uVar2 = *puVar14;
  *(int *)(param_2 + 0x2c) = iVar12;
  uVar8 = CONCAT11(uVar1,uVar2);
  if (0x109 < uVar8) {
    *(unsigned char *)(param_2 + 0x15) = 0;
    if (*(int *)(param_2 + 0x30) - iVar12 < 4) {
      fn_826E7800(param_2,4);
    }
    puVar14 = (unsigned char *)(*(int *)(param_2 + 0x3c) + *(int *)(param_2 + 0x2c));
    uVar3 = puVar14[3];
    uVar4 = puVar14[2];
    uVar5 = puVar14[1];
    uVar6 = *puVar14;
    *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 4;
    uVar15 = CONCAT31(CONCAT21(CONCAT11(uVar3,uVar4),uVar5),uVar6);
  }
  *(unsigned char *)(param_2 + 0x15) = 0;
  if (*(int *)(param_2 + 0x30) - *(int *)(param_2 + 0x2c) < 2) {
    fn_826E7800(param_2,2);
  }
  puVar14 = (unsigned char *)(*(int *)(param_2 + 0x3c) + *(int *)(param_2 + 0x2c));
  uVar3 = puVar14[1];
  uVar4 = *puVar14;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 2;
  uVar9 = CONCAT11(uVar3,uVar4);
  fn_8268B330(auStack_3c);
  fn_8268B330(&uStack_40);
  fn_826E8660(param_2,auStack_3c);
  fn_826E8660(param_2,&uStack_40);
  fn_826C8C70(param_2,0xffffffff8200d3c0,param_3,uVar1,uVar2,uVar9,
                    ((unsigned __int64)auStack_3c[0] & 0xfffffffc) + 8,
                    ((unsigned __int64)uStack_40 & 0xfffffffc) + 8);
  fn_826E3F28(param_1,uVar8,uVar9,((unsigned __int64)uStack_40 & 0xfffffffc) + 8,
                ((unsigned __int64)auStack_3c[0] & 0xfffffffc) + 8,uVar15);
  lVar10 = ((unsigned __int64)uStack_40 & 0xfffffffc) + 4;
  do {
    puVar11 = (unsigned int *)lVar10;
    uVar13 = (unsigned __int64)*puVar11;
    if (in_RESERVE != '\0') {
      uVar7 = storeWordConditionalIndexed(uVar13 - 1,0,lVar10);
      *puVar11 = uVar7;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  bVar16 = (uVar13 == 1) << 1;
  if (uVar13 == 1) {
    fn_8267BE38();
  }
  lVar10 = ((unsigned __int64)auStack_3c[0] & 0xfffffffc) + 4;
  do {
    puVar11 = (unsigned int *)lVar10;
    uVar13 = (unsigned __int64)*puVar11;
    if (in_RESERVE != '\0') {
      uVar7 = storeWordConditionalIndexed(uVar13 - 1,0,lVar10);
      *puVar11 = uVar7;
      bVar16 = 2;
    }
  } while (!(bool)(bVar16 >> 1 & 1));
  if (uVar13 == 1) {
    fn_8267BE38();
  }
  return;
}

