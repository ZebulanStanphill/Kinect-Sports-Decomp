typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_8223C610();
extern int fn_82517238();
extern int fn_82517340();
extern int fn_825179F8();
extern int fn_828BB708();
extern int fn_828C2568();
extern unsigned int iStack_44;
extern unsigned int iStack_4c;
extern unsigned int iStack_54;
extern unsigned int iStack_5c;
extern unsigned int lbl_83295F34;
extern unsigned int lbl_83295F38;


void fn_82516B70(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  bool bVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned int *puVar7;
  unsigned char auStack_60 [4];
  int iStack_5c;
  int iStack_54;
  unsigned char auStack_50 [4];
  int iStack_4c;
  int iStack_44;
  
  puVar7 = (unsigned int *)(param_1 + 8);
  fn_82517238(puVar7);
  uVar4 = fn_8223C610(param_3,lbl_83295F34,0,0);
  uVar5 = uVar4 & 0xffffffff;
  while (uVar5 != 0) {
    uVar5 = fn_828C2568(auStack_60,param_2,param_3);
    uVar1 = *(unsigned int *)(param_1 + 0xc);
    if (((unsigned __int64)uVar1 <= (uVar5 & 0xffffffff)) ||
       (bVar3 = true, (uVar5 & 0xffffffff) < (unsigned __int64)*puVar7)) {
      bVar3 = false;
    }
    if (bVar3) {
      uVar2 = *puVar7;
      if (uVar1 == *(unsigned int *)(param_1 + 0x10)) {
        fn_82517340(puVar7,1);
      }
      iVar6 = *(int *)(param_1 + 0xc);
      if (iVar6 != 0) {
        uVar5 = ((unsigned __int64)(unsigned int)((int)((int)uVar5 - uVar2) >> 4) & 0xfffffff) * 0x10 +
                (unsigned __int64)*puVar7;
LAB_82516c5c:
        fn_825179F8(iVar6,uVar5);
      }
    }
    else {
      if (uVar1 == *(unsigned int *)(param_1 + 0x10)) {
        fn_82517340(puVar7,1);
      }
      iVar6 = *(int *)(param_1 + 0xc);
      if (iVar6 != 0) goto LAB_82516c5c;
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 0x10;
    if (iStack_54 != 0) {
      fn_822315A0();
    }
    if (iStack_5c != 0) {
      fn_822315A0();
    }
    uVar4 = uVar4 - 1;
    uVar5 = uVar4;
  }
  puVar7 = (unsigned int *)(param_1 + 0x18);
  fn_82517238(puVar7);
  uVar4 = fn_8223C610(param_3,lbl_83295F38,0,0);
  uVar5 = uVar4 & 0xffffffff;
  do {
    if (uVar5 == 0) {
      return;
    }
    uVar5 = fn_828BB708(auStack_50,param_2,param_3);
    uVar1 = *(unsigned int *)(param_1 + 0x1c);
    if (((unsigned __int64)uVar1 <= (uVar5 & 0xffffffff)) ||
       (bVar3 = true, (uVar5 & 0xffffffff) < (unsigned __int64)*puVar7)) {
      bVar3 = false;
    }
    if (bVar3) {
      uVar2 = *puVar7;
      if (uVar1 == *(unsigned int *)(param_1 + 0x20)) {
        fn_82517340(puVar7,1);
      }
      iVar6 = *(int *)(param_1 + 0x1c);
      if (iVar6 != 0) {
        uVar5 = ((unsigned __int64)(unsigned int)((int)((int)uVar5 - uVar2) >> 4) & 0xfffffff) * 0x10 +
                (unsigned __int64)*puVar7;
LAB_82516d68:
        fn_825179F8(iVar6,uVar5);
      }
    }
    else {
      if (uVar1 == *(unsigned int *)(param_1 + 0x20)) {
        fn_82517340(puVar7,1);
      }
      iVar6 = *(int *)(param_1 + 0x1c);
      if (iVar6 != 0) goto LAB_82516d68;
    }
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 0x10;
    if (iStack_44 != 0) {
      fn_822315A0();
    }
    if (iStack_4c != 0) {
      fn_822315A0();
    }
    uVar4 = uVar4 - 1;
    uVar5 = uVar4;
  } while( true );
}

