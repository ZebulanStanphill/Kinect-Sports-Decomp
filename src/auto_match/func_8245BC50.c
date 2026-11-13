typedef unsigned char bool;
#define false 0
extern unsigned int *auStack_29b;
extern int fn_82230360();
extern int fn_8225C590();
extern int fn_8225D9B8();
extern int fn_82512508();
extern int fn_82522FF0();
extern int fn_828B8F40();
extern int fn_828EA5F8();
extern int fn_828EA610();
extern int fn_82A1BB28();
extern int fn_82A1BB50();
extern int fn_82A1BC70();
extern int fn_82A1DD38();
extern int fn_82F64020();
extern int memcpy();
extern unsigned int iStack_272;
extern unsigned int iStack_2c0;
extern unsigned int uStack_265;
extern unsigned int uStack_269;
extern unsigned int uStack_26d;
extern unsigned int uStack_26e;
extern unsigned int uStack_273;
extern unsigned int uStack_29d;
extern unsigned int uStack_29f;
extern unsigned int uStack_2a0;
extern unsigned int uStack_2b0;
extern unsigned int uStack_2b4;
extern unsigned int uStack_2b8;
extern unsigned int uStack_2bc;


void fn_8245BC50(int param_1,__int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  char cVar7;
  unsigned __int64 *puVar5;
  int iVar6;
  unsigned int *puVar8;
  unsigned int uVar9;
  unsigned int *puVar10;
  char *pcVar11;
  unsigned __int64 uVar12;
  __int64 lVar13;
  unsigned __int64 *puVar14;
  int iStack_2c0;
  unsigned int uStack_2bc;
  unsigned int uStack_2b8;
  unsigned int uStack_2b4;
  unsigned int uStack_2b0;
  unsigned char uStack_2a0;
  unsigned short uStack_29f;
  unsigned short uStack_29d;
  unsigned char auStack_29b [40];
  unsigned char uStack_273;
  int iStack_272;
  unsigned char uStack_26e;
  unsigned int uStack_26d;
  unsigned int uStack_269;
  unsigned short uStack_265;
  char acStack_260 [544];
  
  *(unsigned int *)(param_1 + 0x698) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x560) + 8) = 0;
  puVar14 = (unsigned __int64 *)(param_1 + 0x598);
  lVar13 = 0;
  iStack_2c0 = (*(unsigned int **)(param_1 + 0x560))[1] - 0x3d;
  uVar2 = **(unsigned int **)(param_1 + 0x560);
  uVar12 = (unsigned __int64)uVar2;
  do {
    uVar3 = fn_8225C590();
    lVar4 = fn_8225D9B8(uVar3,lVar13);
    if ((((lVar4 == 0) || (cVar7 = fn_828EA610(lVar4), cVar7 != '\0')) ||
        (cVar7 = fn_828EA5F8(lVar4), cVar7 == '\0')) ||
       (cVar7 = fn_82512508(lVar4), cVar7 == '\0')) {
      *puVar14 = 0;
    }
    else {
      puVar5 = (unsigned __int64 *)fn_828B8F40(lVar4);
      *puVar14 = *puVar5;
    }
    lVar13 = lVar13 + 1;
    puVar14 = puVar14 + 1;
  } while ((int)lVar13 < 4);
  memcpy(auStack_29b,param_1 + 0x590,0x28);
  uStack_29f = *(unsigned short *)(param_1 + 0x65c);
  uStack_29d = *(unsigned short *)(param_1 + 0x65e);
  uStack_265 = *(unsigned short *)(param_1 + 0x690);
  uStack_26d = 0;
  uStack_269 = 0;
  if ((*(int *)(param_1 + 0x660) == 0) || ((int)param_2 == 1)) {
    bVar1 = false;
LAB_8245bdbc:
    if (bVar1) {
      uStack_273 = 1;
      goto LAB_8245bde8;
    }
  }
  else {
    uStack_2b0 = *(unsigned int *)(param_1 + 0x668);
    uStack_2b4 = *(unsigned int *)(param_1 + 0x66c);
    uStack_2b8 = 0;
    uStack_2bc = 0;
    uStack_26d = uStack_2b0;
    uStack_269 = uStack_2b4;
    iVar6 = fn_82A1BB50(1,&uStack_2b8,0,&uStack_2bc);
    if (-1 < iVar6) {
      iVar6 = fn_82A1BB28(uStack_2bc,uVar12 + 0x3d,&iStack_2c0,param_3,param_4);
      bVar1 = -1 < iVar6;
      fn_82A1BC70(uStack_2bc);
      goto LAB_8245bdbc;
    }
  }
  fn_82A1DD38(uVar12 + 0x3d,param_3,param_4);
  iStack_2c0 = (int)param_4;
  uStack_273 = 0;
LAB_8245bde8:
  uStack_26e = (unsigned char)param_2;
  iStack_272 = iStack_2c0 + 0x3d;
  uStack_2a0 = 0x80;
  fn_82A1DD38(uVar12,&uStack_2a0,0x3d);
  iVar6 = iStack_272;
  *(int *)(*(int *)(param_1 + 0x560) + 8) = iStack_2c0 + 0x3d;
  *(unsigned int *)(param_1 + 0x53c) = (int)(param_2 + -1) - ((int)param_2 + -2 + (unsigned int)(param_2 + -1 == 0))
  ;
  *(unsigned int *)(param_1 + 0x540) = *(unsigned int *)(param_1 + 0x69c);
  if (*(int *)(param_1 + 0xc4) == 8) {
    puVar10 = (unsigned int *)(param_1 + 100);
    if (0xf < *(unsigned int *)(param_1 + 0x78)) {
      puVar10 = (unsigned int *)*puVar10;
    }
    puVar8 = (unsigned int *)(param_1 + 0x80);
    if (0xf < *(unsigned int *)(param_1 + 0x94)) {
      puVar8 = (unsigned int *)*puVar8;
    }
    fn_82F64020(acStack_260,0x200,0xffffffff821bab18,puVar8,puVar10,0xffffffff821baaf8);
    pcVar11 = acStack_260;
    do {
      cVar7 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar7 != '\0');
    fn_82230360(param_1 + 0xf0,acStack_260,pcVar11 + (-1 - (int)acStack_260));
    *(int *)(param_1 + 200) = iVar6;
    *(unsigned int *)(param_1 + 0xd4) = 0;
    *(unsigned int *)(param_1 + 0xd8) = uVar2;
    *(unsigned int *)(param_1 + 0xcc) = 0;
    *(unsigned int *)(param_1 + 0xd0) = *(unsigned int *)(param_1 + 0x100);
    uVar3 = fn_82522FF0();
    *(unsigned __int64 *)(param_1 + 0x50) = uVar3;
    uVar9 = 3;
  }
  else {
    uVar9 = 0xf;
  }
  *(unsigned int *)(param_1 + 0xc4) = uVar9;
  return;
}

