typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_70;
extern int fn_82230218();
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_8223B688();
extern int fn_822B83D0();
extern int fn_822BFB28();
extern int fn_825113E0();
extern int fn_82560010();
extern int fn_827F6210();
extern int fn_827F6310();
extern unsigned int uStack_4c;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8232E0D0(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int *piVar5;
  char cVar6;
  unsigned __int64 uVar4;
  __int64 lVar7;
  __int64 lVar8;
  unsigned int *puVar9;
  int iVar10;
  int iVar11;
  char in_RESERVE;
  unsigned char in_cr0;
  double dVar12;
  double dVar13;
  unsigned char auStack_70 [4];
  int *piStack_6c;
  unsigned int ***apppuStack_60 [5];
  unsigned int uStack_4c;
  
  piVar5 = (int *)fn_822BFB28(auStack_70,*(unsigned int *)(param_1 + 0x54));
  iVar1 = piVar5[1];
  iVar2 = *piVar5;
  iVar11 = 0;
  iVar10 = 0;
  if (iVar1 != 0) {
    cVar6 = fn_8223AAC0(iVar1);
    in_cr0 = (cVar6 == '\0') << 1;
    if (cVar6 != '\0') {
      iVar11 = iVar2;
      iVar10 = iVar1;
    }
  }
  if (ZEXT48(piStack_6c) != 0) {
    lVar8 = ZEXT48(piStack_6c) + 8;
    do {
      puVar9 = (unsigned int *)lVar8;
      lVar7 = (unsigned __int64)*puVar9 - 1;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(lVar7,0,lVar8);
        *puVar9 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar7 == 0) {
      (**(int (***)())(*piStack_6c + 4))();
    }
  }
  *(unsigned int *)(param_1 + 0xa0) = *(unsigned int *)(iVar11 + 0x14);
  dVar13 = (double)*(float *)(iVar11 + 0x28);
  fn_8223B688(apppuStack_60,param_1 + 0x5c);
  if (*(int *)(param_1 + 0xa0) == 3) {
    fn_82230218(apppuStack_60,param_1 + 0x78,0,0xffffffffffffffff);
  }
  if (uStack_4c < 0x10) {
    apppuStack_60[0] = apppuStack_60;
  }
  uVar4 = fn_82560010(**(unsigned int **)(param_1 + 0x58),apppuStack_60[0]);
  uVar4 = fn_822B83D0(*(unsigned int *)(*(int *)(param_1 + 0x54) + 0x118),uVar4);
  dVar12 = (double)fn_827F6310();
  fn_827F6210((double)(float)(dVar12 * dVar13),uVar4);
  fn_825113E0((unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x54) + 0x118) + 0x14,0x14,
                    param_1 + 0xa8);
  fn_82230300(apppuStack_60,1,0);
  if (iVar10 != 0) {
    fn_822315A0(iVar10);
  }
  return;
}

