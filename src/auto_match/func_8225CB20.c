#define true 1
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_58;
extern unsigned int *auStack_70;
extern int fn_822509A0();
extern int fn_8225E360();
extern int fn_822C5B18();
extern int fn_82359C18();
extern int fn_82521AB0();
extern int fn_82522ED8();
extern int fn_82526358();
extern int fn_82599418();
extern int fn_8265CA20();
extern int fn_827D81A8();
extern int fn_82825AD0();
extern int fn_82829120();
extern int fn_828EA610();
extern int fn_82A1C0F0();
extern int fn_82F63108();
extern unsigned int lbl_83265A24;
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


void fn_8225CB20(int param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int *puVar3;
  char cVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  int *piVar7;
  unsigned int uStack0000001c;
  unsigned int *puStack_80;
  int aiStack_7c;
  unsigned char auStack_70 [24];
  unsigned char auStack_58 [16];
  int *piStack_48;
  
  uStack0000001c = (unsigned int)param_2;
  fn_8225E360(&puStack_80,param_1,&stack0x0000001c);
  puVar1 = (unsigned int *)puStack_80[4];
  puStack_80 = puVar1;
  if (*(char *)(puVar1 + 0x36) == '\0') {
    fn_82526358(puVar1,0x8001,0);
  }
  cVar4 = fn_828EA610(puVar1);
  if (((cVar4 == '\0') && (*(char *)(puVar1 + 0x36) == '\0')) && (puVar1[0x49] != -1)) {
    puVar1[0x49] = 0xffffffff;
    fn_827D81A8(lbl_83265A24);
    fn_82599418();
  }
  fn_82521AB0(puVar1);
  piVar7 = puVar1 + 0x3c;
  lVar6 = 3;
  do {
    if (*piVar7 != 0) {
      fn_82522ED8();
      *piVar7 = 0;
    }
    lVar6 = lVar6 + -1;
    piVar7 = piVar7 + 1;
  } while (lVar6 != 0);
  if (puVar1[0x3f] != 0) {
    fn_82522ED8();
    puVar1[0x3f] = 0;
  }
  if (puVar1[0x40] != 0) {
    fn_82522ED8();
    puVar1[0x40] = 0;
  }
  fn_82829120(&aiStack_7c,param_1 + 0x48,&puStack_80);
  iVar2 = *(int *)(aiStack_7c + 0x10);
  if (iVar2 != 0) {
    if (((*(int *)(iVar2 + 0x404) == 0) && (*(unsigned int *)(iVar2 + 0x40c) < 3)) &&
       (*(int *)(iVar2 + 1000) == 0x3e5)) {
      fn_82A1C0F0(iVar2 + 1000);
    }
    fn_8265CA20(iVar2);
  }
  fn_82825AD0(&aiStack_7c,param_1 + 0x48,aiStack_7c);
  if (param_3 == 0) {
    (**(int (***)())*puVar1)(puVar1);
  }
  puVar3 = *(unsigned int **)(param_1 + 0x38);
  puStack_80 = (unsigned int *)*puVar3;
  while( true ) {
    uVar5 = ZEXT48(puStack_80);
    if (uVar5 == ZEXT48(puVar3)) {
      return;
    }
    fn_822C5B18(auStack_70,uVar5 + 0x18);
    fn_822C5B18(auStack_58,uVar5 + 0x30);
    if (piStack_48 == (int *)0x0) break;
    (**(int (***)())(*piStack_48 + 4))(piStack_48,param_2);
    fn_82359C18(auStack_58);
    fn_82359C18(auStack_70);
    fn_822509A0(&puStack_80);
    puVar3 = *(unsigned int **)(param_1 + 0x38);
  }
                    /* WARNING: Subroutine does not return */
  fn_82F63108();
}

