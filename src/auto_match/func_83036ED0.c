#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
extern unsigned int *auStack_370;
extern unsigned int *auStack_3a0;
extern int fn_82FEF8A0();
extern int fn_82FEFD50();
extern int fn_83027798();
extern int fn_83037250();
extern int fn_830372D0();
extern int fn_8303EA88();
extern unsigned int uStack_38c;
extern unsigned int uStack_390;


void fn_83036ED0(int *param_1,int param_2,unsigned int param_3)

{
  unsigned char bVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int auStack_3a0 [4];
  unsigned short uStack_390;
  unsigned int uStack_38c;
  unsigned char auStack_370 [832];

  iVar5 = *(int *)(*(int *)(param_2 + 4) + 0x14);
  if (iVar5 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(unsigned int *)(*(int *)(iVar5 + 0xfc) + 8);
  }
  iVar5 = fn_82FEFD50(uVar8);
  iVar6 = fn_82FEF8A0(uVar8);
  auStack_3a0[0] = 0;
  uStack_390 = 0;
  uStack_38c = 0;
  fn_830372D0(auStack_3a0,param_2 + 0x10);
  if (iVar6 != 3) {
    fn_83037250(iVar5,0,auStack_370);
  }
  uVar2 = *(unsigned short *)(iVar5 + 0x2a);
  uVar3 = *(unsigned short *)(iVar5 + 0x28);
  if (*(char *)(param_1 + 3) != '\0') {
    uVar9 = 0;
    do {
      if ((1 << (uVar9 & 0x3f) & param_3) != 0) {
        if (iVar6 == 3) {
          fn_83037250(iVar5,uVar9,auStack_370);
        }
        bVar1 = *(unsigned char *)((int)param_1 + 0xd);
        uVar7 = 0;
        if (bVar1 != 0) {
          do {
            iVar4 = (bVar1 * uVar9 + uVar7) * 0x10 + *param_1;
            if (*(int *)(iVar4 + 8) == CONCAT22(uVar2,uVar3)) {
              iVar4 = *(int *)(iVar4 + 4);
              if (iVar4 != 0) {
                fn_8303EA88(iVar4,auStack_3a0);
              }
              break;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < bVar1);
        }
      }
      uVar9 = uVar9 + 1 & 0xff;
    } while (uVar9 < *(unsigned char *)(param_1 + 3));
  }
  fn_83027798(iVar5);
  return;
}
