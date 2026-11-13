typedef unsigned char bool;
#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
extern int fn_8267BE38();
extern int fn_82687270();
extern int fn_8268B330();
extern int fn_826C8C70();
extern int fn_826E0920();
extern int fn_826E7800();
extern int fn_826E8660();
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_826E1288(int param_1,unsigned int *param_2)

{
  unsigned char uVar1;
  unsigned char uVar2;
  unsigned short uVar3;
  unsigned short uVar4;
  unsigned char *puVar6;
  unsigned __int64 uVar5;
  int iVar8;
  __int64 lVar7;
  unsigned int *puVar9;
  unsigned int uVar10;
  int iVar11;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  int iStack_48;
  int iStack_44;
  
  iVar11 = *(int *)(param_1 + 0x314);
  if (iVar11 == 0) {
    iVar11 = param_1 + 0x28;
  }
  *(unsigned char *)(iVar11 + 0x15) = 0;
  if (*(int *)(iVar11 + 0x30) - *(int *)(iVar11 + 0x2c) < 2) {
    fn_826E7800(iVar11,2);
  }
  iVar8 = *(int *)(iVar11 + 0x2c) + 2;
  puVar6 = (unsigned char *)(*(int *)(iVar11 + 0x3c) + *(int *)(iVar11 + 0x2c));
  uVar1 = puVar6[1];
  uVar2 = *puVar6;
  *(int *)(iVar11 + 0x2c) = iVar8;
  *(unsigned char *)(iVar11 + 0x15) = 0;
  uVar10 = CONCAT11(uVar1,uVar2) | 0x50000;
  if (*(int *)(iVar11 + 0x30) - iVar8 < 2) {
    fn_826E7800(iVar11,2);
  }
  iVar8 = *(int *)(iVar11 + 0x2c) + 2;
  puVar6 = (unsigned char *)(*(int *)(iVar11 + 0x3c) + *(int *)(iVar11 + 0x2c));
  uVar1 = puVar6[1];
  uVar2 = *puVar6;
  *(int *)(iVar11 + 0x2c) = iVar8;
  *(unsigned char *)(iVar11 + 0x15) = 0;
  uVar3 = CONCAT11(uVar1,uVar2);
  if (*(int *)(iVar11 + 0x30) - iVar8 < 2) {
    fn_826E7800(iVar11,2);
  }
  puVar6 = (unsigned char *)(*(int *)(iVar11 + 0x3c) + *(int *)(iVar11 + 0x2c));
  uVar1 = puVar6[1];
  uVar2 = *puVar6;
  *(int *)(iVar11 + 0x2c) = *(int *)(iVar11 + 0x2c) + 2;
  uVar4 = CONCAT11(uVar1,uVar2);
  fn_8268B330(&uStack_50);
  fn_826E8660(iVar11,&uStack_50);
  fn_826C8C70(iVar11,0xffffffff8200ce80,*param_2,uVar10,uVar3,
                    ((unsigned __int64)uStack_50 & 0xfffffffc) + 8,uVar4);
  uStack_4c = uVar10;
  fn_826E0920(&iStack_48,param_1,&uStack_4c,((unsigned __int64)uStack_50 & 0xfffffffc) + 8,
                0xffffffff82196582,uVar3,uVar4,uVar4);
  if ((iStack_48 == 0) && (iStack_44 != 0)) {
    fn_82687270();
  }
  lVar7 = ((unsigned __int64)uStack_50 & 0xfffffffc) + 4;
  do {
    puVar9 = (unsigned int *)lVar7;
    uVar5 = (unsigned __int64)*puVar9;
    if (in_RESERVE != '\0') {
      uVar10 = storeWordConditionalIndexed(uVar5 - 1,0,lVar7);
      *puVar9 = uVar10;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (uVar5 == 1) {
    fn_8267BE38();
  }
  return;
}

