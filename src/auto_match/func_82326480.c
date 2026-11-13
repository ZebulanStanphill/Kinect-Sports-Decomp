typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_70;
extern int fn_82230218();
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_822C7078();
extern int fn_822C7578();
extern int fn_822FB850();
extern int fn_82326670();
extern int fn_82365BD8();
extern int fn_82376640();
extern int fn_824060E8();
extern int fn_8265C9E0();
extern unsigned int lbl_821A8D8C;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82326480(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4,unsigned int *param_5,
                  unsigned __int64 param_6,unsigned __int64 param_7)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar4;
  int iVar7;
  char cVar8;
  __int64 lVar9;
  __int64 lVar10;
  unsigned int *puVar11;
  unsigned __int64 uVar12;
  char in_RESERVE;
  unsigned char bVar13;
  unsigned int *puStack_80;
  unsigned int *puStack_7c;
  unsigned char auStack_70 [4];
  int *piStack_6c;
  
  uVar1 = *(unsigned int *)(param_1 + 0x48);
  uVar2 = *(unsigned int *)(param_1 + 0x44);
  fn_824060E8(&puStack_80,param_1 + 0x34);
  fn_822C7078(auStack_70,&puStack_80,uVar2,uVar1);
  uVar1 = *(unsigned int *)(param_1 + 0x80);
  puVar5 = (unsigned int *)fn_8265C9E0(0xa8);
  if (puVar5 == (unsigned int *)0x0) {
    puVar5 = (unsigned int *)0x0;
    bVar13 = 2;
  }
  else {
    puVar6 = puVar5 + 4;
    bVar13 = (puVar6 == (unsigned int *)0x0) << 1;
    puVar5[1] = 1;
    *puVar5 = &lbl_821A8D8C;
    puVar5[2] = 1;
    if (puVar6 != (unsigned int *)0x0) {
      fn_822FB850(puVar6,param_2,auStack_70,uVar1,param_3,0,param_7);
    }
  }
  uVar12 = (unsigned __int64)*param_4;
  uVar3 = param_4[1];
  if (uVar12 != uVar3) {
    do {
      uVar4 = fn_822C7578(puVar5 + 0x14,uVar12);
      fn_82230218(uVar4,uVar12 + 0x1c,0,0xffffffffffffffff);
      uVar12 = uVar12 + 0x38;
    } while ((uVar12 & 0xffffffff) != (unsigned __int64)uVar3);
  }
  if (*param_5 != 0) {
    uVar4 = fn_822C7578(puVar5 + 0x14,(unsigned __int64)*param_5 + 4);
    fn_82230218(uVar4,param_6,0,0xffffffffffffffff);
    iVar7 = fn_82365BD8(&puStack_80,param_5);
    fn_82376640(puVar5 + 0x10,iVar7);
    if (*(int *)(iVar7 + 4) != 0) {
      fn_822315A0();
    }
  }
  puStack_80 = (unsigned int *)0x0;
  puStack_7c = (unsigned int *)0x0;
  if (puVar5 != (unsigned int *)0x0) {
    cVar8 = fn_8223AAC0(puVar5);
    bVar13 = (cVar8 == '\0') << 1;
    if (cVar8 != '\0') {
      puStack_80 = puVar5 + 4;
      puStack_7c = puVar5;
    }
  }
  fn_82326670(param_1,&puStack_80,4);
  if (puStack_7c != (unsigned int *)0x0) {
    fn_822315A0();
  }
  if (puVar5 != (unsigned int *)0x0) {
    fn_822315A0(puVar5);
  }
  if (ZEXT48(piStack_6c) != 0) {
    lVar10 = ZEXT48(piStack_6c) + 8;
    do {
      puVar11 = (unsigned int *)lVar10;
      lVar9 = (unsigned __int64)*puVar11 - 1;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(lVar9,0,lVar10);
        *puVar11 = uVar3;
        bVar13 = 2;
      }
    } while (!(bool)(bVar13 >> 1 & 1));
    if ((int)lVar9 == 0) {
      (**(int (***)())(*piStack_6c + 4))();
    }
  }
  return;
}

