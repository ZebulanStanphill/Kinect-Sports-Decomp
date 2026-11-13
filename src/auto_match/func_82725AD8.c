#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT21(h,l) ((unsigned int)((((unsigned short)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT31(h,l) ((unsigned int)((((unsigned int)(h)) << 8) | ((unsigned char)(l))))
extern unsigned int fStack_4c;
extern int fn_82687270();
extern int fn_826A6A38();
extern int fn_826A9280();
extern int fn_826DC448();
extern int fn_826E7438();
extern int fn_826E7800();
extern int fn_826E8488();
extern unsigned int iStack_48;
extern unsigned int lbl_8201101C;
extern unsigned int uStack_44;


void fn_82725AD8(int param_1)

{
  unsigned char uVar1;
  unsigned char uVar2;
  unsigned char uVar3;
  unsigned char uVar4;
  unsigned short uVar8;
  int iVar6;
  int iVar7;
  char cVar9;
  unsigned __int64 uVar5;
  unsigned __int64 uVar10;
  int iVar11;
  unsigned char *puVar12;
  int iVar13;
  int *piVar14;
  float fStack_4c;
  struct { int first; unsigned int second; } stack_pair_48;

  
  uVar8 = fn_826A6A38();
  iVar13 = *(int *)(param_1 + 0x314);
  if (iVar13 == 0) {
    iVar13 = param_1 + 0x28;
  }
  iVar6 = fn_826E8488(iVar13,2);
  iVar7 = fn_826E8488(iVar13,3);
  *(unsigned char *)(iVar13 + 0x15) = 0;
  if (*(int *)(iVar13 + 0x30) - *(int *)(iVar13 + 0x2c) < 4) {
    fn_826E7800(iVar13,4);
  }
  iVar11 = *(int *)(iVar13 + 0x2c) + 4;
  puVar12 = (unsigned char *)(*(int *)(iVar13 + 0x3c) + *(int *)(iVar13 + 0x2c));
  uVar1 = puVar12[3];
  uVar2 = puVar12[2];
  uVar3 = puVar12[1];
  uVar4 = *puVar12;
  *(int *)(iVar13 + 0x2c) = iVar11;
  *(unsigned char *)(iVar13 + 0x15) = 0;
  fStack_4c = (float)CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4);
  if (*(int *)(iVar13 + 0x30) - iVar11 < 4) {
    fn_826E7800(iVar13,4);
  }
  puVar12 = (unsigned char *)(*(int *)(iVar13 + 0x3c) + *(int *)(iVar13 + 0x2c));
  uVar1 = puVar12[3];
  uVar2 = puVar12[2];
  uVar3 = puVar12[1];
  uVar4 = *puVar12;
  *(int *)(iVar13 + 0x2c) = *(int *)(iVar13 + 0x2c) + 4;
  cVar9 = fn_826E7438(iVar13);
  if (cVar9 != '\0') {
    iVar13 = param_1 + 0x14;
    fn_826A9280(iVar13,0xffffffff82011034,uVar8);
    if (iVar6 == 0) {
      uVar10 = 0xffffffff820082b8;
    }
    else {
      uVar10 = 0xffffffff82011028;
    }
    fn_826A9280(iVar13,0xffffffff82010ffc,uVar10,*(unsigned int *)(&lbl_8201101C + iVar7 * 4));
    fn_826A9280(iVar13,0xffffffff82010fd8,(double)fStack_4c,
                      (double)(float)CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4));
  }
  fStack_4c = (float)(unsigned int)uVar8;
  stack_pair_48.first = 0;
  stack_pair_48.second = 0;
  cVar9 = fn_826DC448(*(unsigned int *)(param_1 + 0x20),&stack_pair_48.first,&fStack_4c);
  if (cVar9 != '\0') {
    piVar14 = (int *)(-(unsigned int)(stack_pair_48.first == 0) & stack_pair_48.second);
    if (piVar14 != (int *)0x0) {
      uVar5 = (**(int (***)())(*piVar14 + 8))(piVar14);
      if ((uVar5 & 0xff00) == 0x8300) {
        *(unsigned short *)(piVar14 + 0x14) = *(unsigned short *)(piVar14 + 0x14) | 0x400;
      }
      else {
        uVar5 = (**(int (***)())(*piVar14 + 8))(piVar14);
        if ((uVar5 & 0xff00) == 0x8200) {
          *(unsigned char *)(piVar14 + 0x11) = *(unsigned char *)(piVar14 + 0x11) | 1;
        }
      }
    }
  }
  if ((stack_pair_48.first == 0) && (stack_pair_48.second != 0)) {
    fn_82687270();
  }
  return;
}

