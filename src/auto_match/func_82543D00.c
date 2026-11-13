extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern int fn_82544718();
extern int fn_82549798();
extern int fn_8263C910();
extern int fn_82A93C18();
extern int fn_82A93F70();
extern int memcpy();
extern unsigned int lbl_8326B1C8;
extern unsigned int lbl_8326B1CC;
extern unsigned int lbl_8326B314;
extern unsigned int lbl_8326B318;
extern unsigned int lbl_8326B31C;
extern unsigned int lbl_8326B320;
extern unsigned int lbl_8326B334;
extern unsigned int lbl_8326B338;
extern unsigned int lbl_8326B33C;
extern unsigned int lbl_8326B340;
extern unsigned int lbl_8326B34C;
extern unsigned int lbl_8326B430;
extern unsigned int lbl_8326B434;
extern unsigned int uRam8326b344;
extern unsigned int uRam8326b348;


void fn_82543D00(void)

{
  unsigned int uVar1;
  unsigned int uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  __int64 lVar7;
  unsigned int uVar8;
  __int64 lVar9;
  __int64 lVar10;
  int iVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  unsigned int auStack_e0 [4];
  int aiStack_d0 [4];
  unsigned char auStack_c0 [112];
  
  uVar2 = lbl_8326B434;
  uVar1 = lbl_8326B430;
  if (lbl_8326B34C == 0) {
    uVar14 = (unsigned __int64)lbl_8326B430;
    uVar13 = (unsigned __int64)lbl_8326B434;
    lbl_8326B34C = 1;
    aiStack_d0[1] = 0;
    aiStack_d0[3] = 0;
    uVar12 = (__int64)(int)((lbl_8326B434 - (lbl_8326B434 - 1 & 0x1f)) + 0x1f) *
             (__int64)(int)((lbl_8326B430 - (lbl_8326B430 - 1 & 0x1f)) + 0x1f);
    lVar3 = (uVar12 & 0x1fffffff) << 3;
    lbl_8326B314 = (unsigned int)lVar3;
    lVar10 = ((unsigned __int64)(lbl_8326B430 >> 1) - ((unsigned __int64)(lbl_8326B430 >> 1) - 1 & 0x1f)) + 0x1f;
    lVar9 = ((unsigned __int64)(lbl_8326B434 >> 1) - ((unsigned __int64)(lbl_8326B434 >> 1) - 1 & 0x1f)) + 0x1f;
    lbl_8326B318 = fn_82549798(lVar3,0x1000,0x404,0);
    lVar7 = (uVar12 & 0x3fffffff) << 2;
    uVar8 = (unsigned int)lVar7;
    lVar3 = lVar7;
    lbl_8326B31C = uVar8;
    if ((int)uVar8 < 0x398000) {
      lVar3 = 0x398000;
      lbl_8326B31C = 0x398000;
    }
    lbl_8326B320 = fn_82549798(lVar3,0x1000,0x404,0);
    fn_82A93C18(0x500,0x2d0,1,0,0x18280186,0,0,0xffffffffffffffff);
    fn_82A93F70(0xffffffff8326b0c4,lbl_8326B320);
    fn_82A93C18(uVar14,uVar13,1,0,0x18280186,0,0,0xffffffffffffffff);
    fn_82A93F70(0xffffffff8326b090,lbl_8326B320);
    fn_82A93C18(lVar10,uVar13,1,0,0x18280186,0,0,0xffffffffffffffff);
    fn_82A93F70(0xffffffff8326b0f8,
                      ((unsigned __int64)lbl_8326B320 - (unsigned __int64)auStack_e0[0]) + (unsigned __int64)lbl_8326B31C
                     );
    fn_82A93C18(uVar14 - lVar10,uVar13,1,0,0x18280186,0,0,0xffffffffffffffff);
    fn_82A93F70(0xffffffff8326b12c,
                      ((unsigned __int64)lbl_8326B320 - (unsigned __int64)auStack_e0[0]) + (unsigned __int64)lbl_8326B31C
                     );
    fn_82A93C18(uVar14,lVar9,1,0,0x18280186,0,0,0xffffffffffffffff);
    fn_82A93F70(0xffffffff8326b160,
                      ((unsigned __int64)lbl_8326B320 - (unsigned __int64)auStack_e0[0]) + (unsigned __int64)lbl_8326B31C
                     );
    fn_82A93C18(uVar14,uVar13 - lVar9,1,0,0x18280186,0,0,0xffffffffffffffff);
    fn_82A93F70(0xffffffff8326b194,
                      ((unsigned __int64)lbl_8326B320 - (unsigned __int64)auStack_e0[0]) + (unsigned __int64)lbl_8326B31C
                     );
    fn_82A93C18(uVar14,uVar13,1,0,0x18280186,0,0,0xffffffffffffffff);
    fn_82A93F70(0xffffffff8326af58,lbl_8326B320);
    if ((int)uVar8 < 0x398000) {
      lVar7 = 0x398000;
    }
    lbl_8326B334 = (unsigned int)lVar7;
    lbl_8326B338 = fn_82549798(lVar7,0,0x404,0);
    fn_82A93C18(0x500,0x2d0,1,0,0x1a220197,0,0,0xffffffffffffffff);
    fn_82A93F70(0xffffffff8326af8c,lbl_8326B338);
    fn_82A93C18(uVar14,uVar13,1,0,0x1a220197,0,0,0xffffffffffffffff);
    fn_82A93F70(0xffffffff8326afc0,lbl_8326B338);
    fn_82A93C18(uVar14,uVar13,1,0,0x18280186,0,0,0xffffffffffffffff);
    fn_82A93F70(0xffffffff8326aff4,lbl_8326B338);
    memcpy(0xffffffff8326b028,0xffffffff8326afc0,0x34);
    memcpy(0xffffffff8326b05c,0xffffffff8326aff4,0x34);
    lbl_8326B33C = uVar1;
    lbl_8326B340 = uVar2;
    uRam8326b344 = uVar1;
    uRam8326b348 = uVar2;
    aiStack_d0[0] = 0;
    aiStack_d0[2] = 0;
    lbl_8326B1CC = fn_8263C910(uVar14,uVar13,0x1a220197,0,aiStack_d0);
    aiStack_d0[2] = 0;
    uVar8 = uVar2 + 0xf & 0xfffffff0;
    iVar11 = (int)((uVar14 + 0x4f & 0xffffffff) / 0x50) * 0x50;
    aiStack_d0[0] = (int)((((__int64)(int)uVar8 * (__int64)iVar11 & 0x3fffffffU) << 2) / 0x1400);
    lbl_8326B1C8 = fn_8263C910(uVar14,uVar13,0x18280186,0,aiStack_d0);
    lVar3 = 0;
    uVar12 = 2;
    puVar6 = (unsigned int *)0x8326b2e4;
    lVar7 = -0x7cd94e30;
    do {
      uVar4 = fn_82544718(auStack_c0,uVar1 / uVar12,uVar2 / uVar12,0x18280186,lVar3,auStack_e0
                               );
      memcpy(lVar7,uVar4,0x34);
      aiStack_d0[2] = 0;
      aiStack_d0[0] =
           (int)((((__int64)(int)uVar8 * (__int64)iVar11 & 0x3fffffffU) << 2) / 0x1400) +
           (int)((((__int64)(int)uVar8 * (__int64)iVar11 & 0x3fffffffU) << 2) / 0x1400);
      lVar3 = lVar3 + (unsigned __int64)auStack_e0[0];
      uVar5 = fn_8263C910(uVar1 / uVar12,uVar2 / uVar12,0x18280186,0,aiStack_d0);
      puVar6[-4] = uVar5;
      uVar5 = fn_8263C910(0x500 / (int)uVar12,0x2d0 / (int)uVar12,0x18280186,0,aiStack_d0);
      lVar7 = lVar7 + 0x34;
      puVar6 = puVar6 + 1;
      *puVar6 = uVar5;
      uVar12 = (uVar12 & 0x7fffffff) << 1;
    } while ((int)lVar7 < -0x7cd94d2c);
  }
  return;
}

