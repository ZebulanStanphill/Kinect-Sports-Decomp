typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82491D70();
extern int fn_82491EF0();
extern int fn_824967B0();
extern int fn_8255E948();
extern int fn_8255EF20();
extern int fn_8255EFC8();
extern int fn_827F3BA8();
extern int fn_827F3C20();
extern int fn_827F3EB0();
extern int fn_827FA1E8();
extern int memcpy();
extern unsigned int lbl_8218E8E8;
extern unsigned int uStack_68;


void fn_8255EBE0(int *param_1,unsigned int *param_2)

{
  unsigned short uVar1;
  unsigned short uVar2;
  unsigned int uVar3;
  bool bVar4;
  float fVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  int iVar9;
  unsigned __int64 uVar8;
  unsigned int uVar10;
  int iVar11;
  unsigned int *puVar12;
  float *pfVar13;
  unsigned int uVar14;
  unsigned int auStack_70 [2];
  unsigned __int64 uStack_68;
  unsigned char auStack_60 [16];
  
  uVar6 = fn_8255EF20();
  (**(int (***)())(*param_1 + 0xc))(param_1);
  fn_824967B0(param_2);
  uVar7 = fn_827F3EB0(param_1);
  fn_82491D70(param_2,uVar7);
  fn_827F3BA8(param_1);
  uVar14 = 0;
  iVar9 = fn_827F3EB0(param_1);
  if (iVar9 != 0) {
    do {
      uVar8 = fn_8255E948(auStack_60);
      uVar10 = param_2[1];
      if (((unsigned __int64)uVar10 <= (uVar8 & 0xffffffff)) ||
         (bVar4 = true, (uVar8 & 0xffffffff) < (unsigned __int64)*param_2)) {
        bVar4 = false;
      }
      if (bVar4) {
        uVar3 = *param_2;
        if (uVar10 == param_2[2]) {
          fn_82491EF0(param_2);
        }
        uVar10 = param_2[1];
        uVar8 = (__int64)((int)((int)uVar8 - uVar3) / 0x1c) * 0x1c + (unsigned __int64)*param_2;
      }
      else {
        if (uVar10 == param_2[2]) {
          fn_82491EF0(param_2);
        }
        uVar10 = param_2[1];
      }
      if (uVar10 != 0) {
        memcpy(uVar10,uVar8,0x1c);
      }
      uVar14 = uVar14 + 1;
      param_2[1] = param_2[1] + 0x1c;
      uVar10 = fn_827F3EB0(param_1);
    } while (uVar14 < uVar10);
  }
  iVar9 = fn_827F3C20(param_1);
  uVar1 = *(unsigned short *)(iVar9 + 0x32);
  uVar2 = *(unsigned short *)(iVar9 + 0x2e);
  iVar9 = *(int *)(iVar9 + 0x84);
  auStack_70[0] = fn_827FA1E8();
  fVar5 = lbl_8218E8E8;
  uVar14 = (int)(param_2[1] - *param_2) / 0x1c;
  uStack_68 = CONCAT44(uVar14,(((unsigned __int64)(uStack_68) >> 32) & 0xFFFFFFFF));
  puVar12 = auStack_70;
  if (uVar14 <= auStack_70[0]) {
    puVar12 = (unsigned int *)&uStack_68;
  }
  uVar8 = (unsigned __int64)*puVar12;
  iVar11 = 0;
  if (uVar8 != 0) {
    pfVar13 = (float *)(((unsigned int)uVar1 * 0xc + (unsigned int)uVar2) * 4 + iVar9 + -4);
    do {
      pfVar13 = pfVar13 + 1;
      uStack_68 = (__int64)(*pfVar13 + fVar5);
      *(unsigned char *)((int)param_2 + iVar11 + 0x10) = (unsigned char)uStack_68;
      iVar11 = iVar11 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  fn_8255EFC8(param_1,uVar6);
  return;
}

