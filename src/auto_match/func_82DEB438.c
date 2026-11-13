typedef unsigned char bool;
extern unsigned int *auStack_464;
extern unsigned int *auStack_4f0;
extern unsigned int *auStack_550;
extern unsigned int *auStack_55c;
extern unsigned int *auStack_55f;
extern int fn_825BF828();
extern int fn_82CE3F80();
extern int fn_82CE3FE8();
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CEAAA0();
extern int fn_82D81000();
extern int fn_82D89248();
extern int fn_82D94360();
extern int fn_82D94918();
extern int fn_82D94B58();
extern int fn_82D94BD8();
extern int fn_82DEACE8();
extern unsigned int iStack_46c;
extern unsigned int iStack_544;
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82131F88;
extern unsigned int uStack_468;
extern unsigned int uStack_4f4;
extern unsigned int uStack_4f8;
extern unsigned int uStack_500;
extern unsigned int uStack_548;


void fn_82DEB438(int param_1,short *param_2)

{
  bool bVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  unsigned __int64 uVar8;
  unsigned int *puVar9;
  unsigned int uVar10;
  int iVar11;
  char cStack_560;
  unsigned char auStack_55f [3];
  unsigned int auStack_55c;
  unsigned char auStack_550 [8];
  unsigned int uStack_548;
  int iStack_544;
  unsigned int uStack_500;
  unsigned char *puStack_4fc;
  unsigned int uStack_4f8;
  unsigned int uStack_4f4;
  unsigned char auStack_4f0 [128];
  unsigned char *puStack_470;
  int iStack_46c;
  unsigned int uStack_468;
  unsigned char auStack_464 [1124];
  
  fn_82D94B58(auStack_550);
  uVar3 = *(unsigned int *)(param_1 + 0x1c);
  RtlEnterCriticalSection(uVar3);
  cStack_560 = '\0';
  iVar6 = fn_82DEACE8((unsigned __int64)*(unsigned int *)(param_2 + 2) - 0x44,*(unsigned int *)(param_2 + 4),
                        &cStack_560,&auStack_55c,auStack_55f);
  if (iVar6 == 0) {
    RtlLeaveCriticalSection(uVar3);
    fn_82D94BD8(auStack_550);
  }
  else {
    iStack_46c = 0;
    puStack_470 = auStack_464;
    puStack_4fc = auStack_4f0;
    uStack_468 = 0x80000100;
    uVar4 = *(unsigned int *)(iVar6 + 0x10);
    uVar5 = *(unsigned int *)(*(int *)(param_2 + 2) + 0x18) ^ *(unsigned int *)(*(int *)(param_2 + 2) + 0x14) ^
            uVar4;
    uStack_4f8 = 0;
    uStack_4f4 = 0x80000004;
    uStack_500 = uVar4;
    iVar7 = fn_82CE5410();
    if (uStack_4f8 == (uStack_4f4 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
      fn_82CE63B0(*(unsigned int *)(iVar7 + 0x10),&puStack_4fc,0x20);
    }
    iVar7 = uStack_4f8 * 0x20;
    uStack_4f8 = uStack_4f8 + 1;
    puVar9 = (unsigned int *)(puStack_4fc + iVar7);
    *puVar9 = uVar5;
    puVar9[1] = auStack_55c;
    if (*param_2 == 0) {
      uVar10 = *(unsigned int *)(*(int *)(param_2 + 2) + -8);
      bVar2 = *(unsigned char *)(uVar10 + 10);
      trapWord(6,(unsigned __int64)bVar2,0);
      uVar8 = (((unsigned __int64)*(unsigned int *)(param_2 + 4) + (unsigned __int64)*(unsigned short *)(uVar10 + 6) * -0x20) -
              (unsigned __int64)uVar10) - 0x30;
      uVar10 = ((int)uVar8 / (int)(unsigned int)bVar2) * 0x20 + uVar10 + 0x30;
      trapWord(5,(unsigned __int64)bVar2 &
                 ~(((uVar8 & 0x7fffffff) << 1 | (uVar8 & 0xffffffff) >> 0x1f) - 1),0xffff);
    }
    else {
      uVar10 = *(unsigned int *)(param_2 + 6);
    }
    puVar9[5] = uVar10;
    uVar10 = *(unsigned int *)(param_2 + 4);
    puVar9[6] = uVar10;
    puVar9[3] = *(unsigned int *)(&lbl_82131F88 + (unsigned int)*(unsigned char *)(uVar10 + 0xe) * 4);
    uVar10 = lbl_8200133C;
    if (uVar4 == *(unsigned int *)(*(int *)(param_2 + 2) + 0x14)) {
      uVar10 = lbl_82002AE0;
    }
    puVar9[4] = uVar10;
    *(unsigned char *)(puVar9 + 2) = 1;
    iVar7 = (**(int (***)())(**(int **)(param_1 + 0x20) + 4))
                      (*(int **)(param_1 + 0x20),&uStack_500,&puStack_470,auStack_550);
    if (iVar7 == 1) {
      fn_825BF828(&uStack_500);
      iVar6 = fn_82CE5410();
      iStack_46c = 0;
      if ((uStack_468 & 0x80000000) == 0) {
        (**(int (***)())(**(int **)(iVar6 + 0x10) + 0x10))
                  (*(int **)(iVar6 + 0x10),puStack_470,uStack_468 & 0x3fffffff,4);
      }
      puStack_470 = (unsigned char *)0x0;
      uStack_468 = 0x80000000;
      RtlLeaveCriticalSection(uVar3);
      fn_82D94BD8(auStack_550);
    }
    else {
      bVar1 = iStack_46c != 0;
      iVar7 = 0;
      if (0 < iStack_46c) {
        iVar11 = 0;
        do {
          fn_82CEAAA0(iVar6 + 0x1c,*(unsigned int *)(puStack_470 + iVar11));
          iVar7 = iVar7 + 1;
          iVar11 = iVar11 + 4;
        } while (iVar7 < iStack_46c);
      }
      if (cStack_560 != '\0') {
        *(unsigned char *)(iVar6 + 0x14) = 0xff;
      }
      fn_825BF828(&uStack_500);
      iVar6 = fn_82CE5410();
      iStack_46c = 0;
      if ((uStack_468 & 0x80000000) == 0) {
        (**(int (***)())(**(int **)(iVar6 + 0x10) + 0x10))
                  (*(int **)(iVar6 + 0x10),puStack_470,uStack_468 & 0x3fffffff,4);
      }
      puStack_470 = (unsigned char *)0x0;
      uStack_468 = 0x80000000;
      RtlLeaveCriticalSection(uVar3);
      if (*(char *)(uVar4 + 0xe8) == '\x05') {
        uVar4 = uVar5;
      }
      fn_82D89248(*(unsigned int *)(param_1 + 0x18),auStack_550);
      if (bVar1) {
        fn_82CE3F80();
        fn_82D94918(auStack_550,uVar4);
        fn_82CE3FE8();
      }
      if (iStack_544 != 0) {
        fn_82D81000(*(unsigned int *)(param_1 + 0x18),uStack_548,iStack_544,4);
        fn_82CE3F80();
        fn_82D94360(auStack_550);
        fn_82CE3FE8();
      }
      fn_82D94BD8(auStack_550);
    }
  }
  return;
}

