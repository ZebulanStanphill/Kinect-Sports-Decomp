typedef unsigned char bool;
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82F6A548();
extern int fn_82F6A594();
extern int fn_8305BD60();
extern int fn_8305BDE0();
extern unsigned int lbl_82005708;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005728;
extern unsigned int lbl_820105A0;
extern unsigned int lbl_820153F0;
extern unsigned int lbl_82015618;
extern unsigned int lbl_82028820;
extern unsigned int lbl_820288B8;
extern unsigned int lbl_82057810;
extern unsigned int lbl_82079F08;
extern unsigned int lbl_820FC2C8;
extern unsigned int lbl_8217E340;
extern unsigned int lbl_8217E348;
extern unsigned int lbl_8217E350;
extern unsigned int lbl_8217E358;
extern unsigned int lbl_8217E360;


void fn_83057ED8(unsigned __int64 param_1,unsigned __int64 param_2)

{
  bool bVar1;
  __int64 lVar2;
  unsigned int *puVar4;
  unsigned __int64 uVar3;
  unsigned int uVar5;
  unsigned int uVar6;
  double extraout_f1;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dStack_40;
  
  uVar6 = (unsigned int)param_2;
  uVar5 = (unsigned int)((unsigned __int64)param_2 >> 0x20);
  puVar4 = (unsigned int *)fn_82F6A548();
  dVar8 = dStack_40;
  dVar10 = dStack_40;
  if (uVar6 < 6) {
    lVar2 = CONCAT44(uVar5,uVar6);
    bVar1 = uVar6 == 0;
    dStack_40 = lbl_8217E350;
    dVar8 = lbl_820FC2C8;
    dVar10 = lbl_82079F08;
    if ((((lVar2 != 1 || bVar1) &&
         (dStack_40 = lbl_8217E348, dVar8 = lbl_82028820, dVar10 = lbl_82057810, lVar2 != 2 || bVar1
         )) && (dStack_40 = lbl_8217E340, dVar8 = lbl_820153F0, dVar10 = lbl_82005728,
               lVar2 != 3 || bVar1)) &&
       ((dStack_40 = lbl_82005708, dVar8 = lbl_82015618, dVar10 = lbl_82015618, lVar2 != 4 || bVar1
        && (dStack_40 = lbl_8217E360, dVar8 = lbl_820288B8, dVar10 = lbl_82028820, bVar1)))) {
      dStack_40 = lbl_8217E358;
      dVar8 = lbl_820105A0;
      dVar10 = lbl_8217E360;
    }
  }
  dVar9 = extraout_f1;
  uVar3 = fn_8305BDE0(*puVar4);
  dVar7 = (double)fn_8305BD60(dVar10);
  dVar10 = lbl_82005710;
  *(float *)(puVar4[2] + 0x2c) = (float)dVar7;
  dVar7 = dVar9 - dVar8;
  if (dVar9 - dVar8 < dVar10) {
    dVar7 = dVar10;
  }
  dVar8 = (double)fn_8305BD60(dStack_40 + dVar7,uVar3);
  *(float *)(puVar4[2] + 0x28) = (float)dVar8;
  fn_82F6A594();
  return;
}

