extern unsigned lbl_831C1198[];
extern char *pcRam831c1438;
extern unsigned int *auStack_30;
extern int fn_8245A5C8();
extern int fn_8245AE18();
extern int fn_8245B458();
extern int fn_8245B718();
extern int fn_8245B7C8();
extern int fn_8245C700();
extern int fn_8245CBE0();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern int fn_82520158();
extern double fn_82522FF0(void);
extern int fn_8257A250();
extern int fn_8266C898();
extern int fn_8266EC60();
extern int fn_82A1E228();
extern int fn_82BA02A8();
extern unsigned int uRam831c143c;
extern unsigned int uRam831c1440;
extern unsigned int uRam831c1444;


void fn_824E2BD0(void)

{
  unsigned int *puVar1;
  int iVar4;
  int iVar5;
  unsigned int *puVar6;
  int lVar2;
  int uVar3;
  int lVar7;
  int uVar8;
  int uVar9;
  double now;
  unsigned __int64 auStack_30;

  iVar4 = fn_8245B458();
  iVar5 = fn_8257A250(iVar4 + 0x6c8,"ShowOff");
  if (iVar5 == 0) {
    fn_8245C700(iVar4);
    fn_8245B7C8(iVar4);
    fn_8245CBE0(iVar4);
    now = fn_82522FF0();
    *(double *)(iVar4 + 0x5b8) = now;
    fn_82A1E228(&auStack_30);
    *(unsigned __int64 *)(iVar4 + 0x590) = auStack_30;
    fn_8245B718(iVar4);
  }
  puVar6 = (unsigned int *)fn_8245A5C8();
  puVar1 = (unsigned int *)*puVar6;
  uVar9 = fn_8245B458();
  ((int (*)())*puVar1)(puVar6,uVar9);
  puVar6 = (unsigned int *)fn_8245AE18();
  puVar1 = (unsigned int *)*puVar6;
  uVar9 = fn_8245B458();
  ((int (*)())*puVar1)(puVar6,uVar9);
  lbl_831C1198[0xa9] = 0;
  lbl_831C1198[0xa8] = (unsigned)fn_82BA02A8;
  lbl_831C1198[0xaa] = 0;
  lbl_831C1198[0xab] = 0;
  fn_82520158("gfxCommonSharedLib",&auStack_30,0);
  lVar2 = fn_8251F720(&auStack_30,0);
  uVar8 = 0;
  uVar3 = fn_8251FBA8(lVar2);
  lVar7 = lVar2;
  if ((int)((uVar3 & 0xffffffff) / 0x88) != 0) {
    do {
      uVar9 = fn_8266EC60();
      fn_8266C898(uVar9,lVar7);
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x88;
      uVar3 = fn_8251FBA8(lVar2);
    } while ((uVar8 & 0xffffffff) < (uVar3 & 0xffffffff) / 0x88);
  }
  fn_8251FA58(lVar2);
  return;
}
