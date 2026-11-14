#define true 1
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_48;
extern unsigned int *auStack_60;
extern unsigned int *auStack_6c;
extern int fn_822509A0();
extern int fn_8225E360();
extern int fn_8225F580();
extern int fn_822C5B18();
extern int fn_82359C18();
extern int fn_82522DF8();
extern int fn_82522ED8();
extern int fn_825231B8();
extern int fn_82526608();
extern int fn_8265C9E0();
extern int fn_82829120();
extern int fn_828EA5F8();
extern int fn_828EA600();
extern int XMemSet();
extern int fn_82F63108();
extern unsigned int lbl_831CF9D0;
extern unsigned int lbl_832760AC;
extern unsigned int lbl_832760B0;
extern unsigned int lbl_832767BC;
extern unsigned int lbl_832767C0;
extern unsigned int lbl_832767C4;
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;
extern unsigned int uStack_70;


void fn_8225C900(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  char cVar7;
  int iVar3;
  unsigned int uVar4;
  int *piVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar8;
  unsigned int uStack0000001c;
  unsigned int uStack_70;
  unsigned char auStack_6c [12];
  unsigned char auStack_60 [16];
  int *piStack_50;
  unsigned char auStack_48 [72];
  
  uStack0000001c = (unsigned int)param_2;
  fn_8225E360(&uStack_70,param_1,&stack0x0000001c);
  uVar1 = *(unsigned int *)(uStack_70 + 0x10);
  uStack_70 = uVar1;
  fn_8225F580(uVar1);
  if (lbl_832760B0 == 0) {
    lbl_832760AC = 6;
    lbl_832760B0 = 1;
  }
  cVar7 = fn_828EA5F8(uVar1);
  if (cVar7 != '\0') {
    cVar7 = fn_828EA600(uVar1);
    if (cVar7 == '\0') {
      if (*(int *)(uVar1 + 0xfc) != 0) {
        fn_82522ED8();
        *(unsigned int *)(uVar1 + 0xfc) = 0;
      }
      iVar3 = fn_825231B8(lbl_832760AC);
      *(int *)(uVar1 + 0xfc) = iVar3;
                    /* WARNING: Subroutine does not return */
      XMemSet(*(unsigned int *)(iVar3 + 8),0,*(unsigned int *)(iVar3 + 4));
    }
  }
  if (lbl_832767C4 == 0) {
    lbl_832767BC = 0x359;
    lbl_832767C0 = &lbl_831CF9D0;
    lbl_832767C4 = 1;
  }
  cVar7 = fn_828EA5F8(uVar1);
  if (cVar7 != '\0') {
    cVar7 = fn_828EA600(uVar1);
    if (cVar7 == '\0') {
      if (*(int *)(uVar1 + 0x100) != 0) {
        fn_82522ED8();
        *(unsigned int *)(uVar1 + 0x100) = 0;
      }
      uVar4 = fn_82522DF8(lbl_832767BC << 2);
      *(unsigned int *)(uVar1 + 0x100) = uVar4;
    }
  }
  piVar5 = (int *)fn_82829120(auStack_6c,param_1 + 0x48,&uStack_70);
  if (*piVar5 == *(int *)(param_1 + 0x4c)) {
    iVar3 = fn_8265C9E0(0x410);
    if (iVar3 != 0) {
      *(unsigned int *)(iVar3 + 0x404) = 0;
      *(unsigned int *)(iVar3 + 0x408) = 0;
      *(unsigned int *)(iVar3 + 0x40c) = 3;
                    /* WARNING: Subroutine does not return */
      XMemSet(iVar3,0,1000);
    }
    puVar6 = (unsigned int *)fn_82526608(param_1 + 0x48,&uStack_70);
    *puVar6 = 0;
  }
  puVar2 = *(unsigned int **)(param_1 + 0x38);
  uStack_70 = *puVar2;
  while( true ) {
    uVar8 = (unsigned __int64)uStack_70;
    if (uVar8 == ZEXT48(puVar2)) {
      return;
    }
    fn_822C5B18(auStack_60,uVar8 + 0x18);
    fn_822C5B18(auStack_48,uVar8 + 0x30);
    if (piStack_50 == (int *)0x0) break;
    (**(int (***)())(*piStack_50 + 4))(piStack_50,param_2);
    fn_82359C18(auStack_48);
    fn_82359C18(auStack_60);
    fn_822509A0(&uStack_70);
    puVar2 = *(unsigned int **)(param_1 + 0x38);
  }
                    /* WARNING: Subroutine does not return */
  fn_82F63108();
}

