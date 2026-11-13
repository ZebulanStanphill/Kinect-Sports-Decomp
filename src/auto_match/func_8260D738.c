extern unsigned int *auStack_1838;
extern unsigned int *auStack_1840;
extern unsigned int *auStack_1880;
extern unsigned int *auStack_c70;
extern int fn_8259A230();
extern int fn_8260D8C0();
extern int fn_8260D928();
extern int fn_82A1BB18();
extern int fn_82F6B030();
extern unsigned int lbl_82195820;
extern unsigned int lbl_82196582;
extern unsigned int lbl_832823A8;


void fn_8260D738(void)

{
  int iVar1;
  int iVar2;
  unsigned __int64 *puVar3;
  __int64 lVar4;
  __int64 lVar5;
  double dVar6;
  unsigned __int64 auStack_1880 [4];
  __int64 lStack_1860;
  unsigned char *apuStack_1850 [2];
  __int64 lStack_1848;
  unsigned int auStack_1840 [2];
  unsigned __int64 auStack_1838 [377];
  unsigned __int64 auStack_c70 [6];
  unsigned char *apuStack_c40 [2];
  __int64 alStack_c38 [391];
  
  fn_82A1BB18();
  iVar1 = fn_8259A230();
  apuStack_1850[0] = &lbl_82196582;
  puVar3 = auStack_1880;
  lVar4 = 0x20;
  do {
    puVar3[7] = 0;
    *(unsigned int *)(puVar3 + 8) = 0;
    puVar3[9] = 0xffffffffffffffff;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    *(unsigned int *)((int)puVar3 + 0x94) = 0;
    puVar3 = puVar3 + 0xc;
    *puVar3 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  apuStack_c40[0] = &lbl_82196582;
  puVar3 = auStack_c70;
  lVar4 = 0x20;
  do {
    puVar3[7] = 0;
    *(unsigned int *)(puVar3 + 8) = 0;
    puVar3[9] = 0xffffffffffffffff;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    *(unsigned int *)((int)puVar3 + 0x94) = 0;
    puVar3 = puVar3 + 0xc;
    *puVar3 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  fn_8260D8C0(apuStack_1850);
  fn_8260D928(apuStack_1850);
  lVar5 = (&lStack_1848)[iVar1 * 0xc];
  lStack_1860 = (__int64)(float)lVar5;
  fn_82A1BB18();
  iVar2 = fn_8259A230();
  auStack_1840[iVar2 * 0x18] = 0;
  auStack_1838[iVar2 * 0xc] = 0xffffffffffffffff;
  auStack_1838[iVar2 * 0xc + 1] = 0;
  (&lStack_1848)[iVar2 * 0xc] = 0;
  fn_8260D8C0(apuStack_1850);
  lVar4 = 1000;
  do {
    fn_8260D8C0(apuStack_c40);
    fn_8260D928(apuStack_c40);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  fn_8260D928(apuStack_1850);
  lStack_1860 = (__int64)(float)(&lStack_1848)[iVar1 * 0xc];
  dVar6 = (double)fn_82F6B030((lStack_1860 - (__int64)(float)alStack_c38[iVar1 * 0xc]) -
                               (__int64)(float)lVar5);
  lbl_832823A8 = (__int64)(dVar6 * lbl_82195820);
  return;
}

