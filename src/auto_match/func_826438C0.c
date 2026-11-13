typedef unsigned char bool;
extern unsigned int *auStack_50;
extern int fn_82642048();
extern int fn_826427F8();
extern int fn_82642938();
extern int fn_82642A60();
extern int fn_82F68CC0();
extern unsigned int lbl_832978A4;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_826438C0(int param_1,unsigned __int64 param_2,int param_3,int param_4,int param_5)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int uVar7;
  int iVar8;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  int *piVar9;
  int iVar11;
  unsigned __int64 uVar10;
  unsigned int *puVar12;
  char in_RESERVE;
  unsigned char bVar13;
  unsigned char auStack_50 [80];
  
  uVar1 = *(unsigned int *)(param_3 + 0x1c);
  uVar7 = 0;
  puVar3 = (unsigned int *)(param_4 + -4);
  do {
    puVar3 = puVar3 + 1;
    auStack_50[uVar7] = (char)(*puVar3 >> 2);
    uVar7 = uVar7 + 1;
  } while (uVar7 <= uVar1);
  if (param_5 != 0) {
    iVar8 = *(int *)(param_1 + 0x380) + param_1;
    iVar11 = *(int *)(param_5 + 0x40) + param_5 + 0x28;
    puVar3 = (unsigned int *)(iVar8 + 0x368);
    iVar2 = fn_82642938(puVar3,iVar11);
    if ((iVar2 != 0) && (iVar2 == 1)) {
      if ((*(unsigned char *)(iVar8 + 0x370) & 7) != 7) {
        fn_826427F8(puVar3,(unsigned __int64)*(unsigned int *)(param_1 + 0x20) + (unsigned __int64)*puVar3,iVar8 + 0x370
                      ,iVar11);
      }
      fn_82642A60(puVar3,iVar11);
    }
  }
  uVar10 = 0;
  uVar4 = (unsigned __int64)((*(unsigned int *)(param_1 + 0x368) & 0x20) == 0) ^ 1;
  bVar13 = (uVar4 == 0xffffffffffffffff) << 1;
  if (uVar4 != 0xffffffffffffffff) {
    puVar12 = (unsigned int *)(param_1 + 0x28);
    piVar9 = (int *)(param_1 + 0x380);
    do {
      fn_82642048(param_1,(unsigned __int64)*(unsigned int *)(*piVar9 + param_1 + 0x368) +
                            (unsigned __int64)*(unsigned int *)(param_1 + 0x20),param_3,auStack_50,uVar10);
      fn_82F68CC0(puVar12 + 2,auStack_50,0x10);
      if (*(int *)(param_3 + 0x30) == 0) {
        do {
          uVar5 = (unsigned __int64)lbl_832978A4;
          lVar6 = uVar5 + 1;
          if (in_RESERVE != '\0') {
            lbl_832978A4 = storeWordConditionalIndexed(lVar6,0,0xffffffff832978a4);
            bVar13 = 2;
          }
        } while ((!(bool)(bVar13 >> 1 & 1)) || ((uVar5 + 2 & 0xffffffff) < 2));
        *(int *)(param_3 + 0x30) = (int)lVar6;
      }
      uVar10 = uVar10 + 1;
      piVar9 = piVar9 + 2;
      *puVar12 = *(unsigned int *)(param_3 + 0x30);
      puVar12 = puVar12 + 0x68;
    } while ((uVar10 & 0xffffffff) < uVar4 + 1);
  }
  *(unsigned int *)(param_1 + 0x368) = *(unsigned int *)(param_1 + 0x368) | 0x40;
  return;
}

