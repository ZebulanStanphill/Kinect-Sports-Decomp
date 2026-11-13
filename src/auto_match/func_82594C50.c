typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_68;
extern int fn_822315A0();
extern int fn_82381BC0();
extern int fn_8255BB98();
extern int fn_828ACC40();
extern int fn_828ACCE8();
extern int fn_82A1EFC0();
extern int iRam8329700c;
extern unsigned int iStack_5c;
extern unsigned int iStack_64;
extern unsigned int *lbl_83297008;


/* WARNING: Removing unreachable block (ram,0x82594e00) */
/* WARNING: Removing unreachable block (ram,0x82594e1c) */
/* WARNING: Removing unreachable block (ram,0x82594e0c) */
/* WARNING: Removing unreachable block (ram,0x82594e20) */
/* WARNING: Removing unreachable block (ram,0x82594e2c) */

void fn_82594C50(int *param_1)

{
  unsigned int uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar6;
  int *piVar5;
  bool bVar7;
  int *apiStack_70 [2];
  unsigned char auStack_68 [4];
  int iStack_64;
  unsigned char auStack_60 [4];
  int iStack_5c;
  unsigned char auStack_50 [80];
  
  bVar4 = false;
  bVar3 = false;
  apiStack_70[0] = (int *)0x0;
  if (iRam8329700c == 0) {
    return;
  }
  fn_828ACC40();
  cVar6 = fn_828ACCE8(param_1);
  if (cVar6 != '\0') {
    cVar6 = (**(int (***)())(*param_1 + 0x68))(param_1);
    bVar7 = true;
    if (cVar6 != '\0') goto LAB_82594cc0;
  }
  bVar7 = false;
LAB_82594cc0:
  apiStack_70[0] = (int *)*lbl_83297008;
  if (apiStack_70[0] != lbl_83297008) {
    do {
      uVar1 = *(unsigned int *)(apiStack_70[0][4] + 0xd48);
      if (bVar7) {
        bVar3 = true;
        piVar5 = (int *)fn_8255BB98(auStack_60,uVar1);
        if (*piVar5 == 0) goto LAB_82594d44;
        bVar4 = true;
        bVar3 = true;
        piVar5 = (int *)fn_8255BB98(auStack_68,uVar1);
        bVar2 = true;
        if (*(int *)(*(int *)(*piVar5 + 8) + 0x28) != param_1[10]) goto LAB_82594d44;
      }
      else {
LAB_82594d44:
        bVar2 = false;
      }
      if (bVar4) {
        bVar4 = false;
        if (iStack_64 != 0) {
          fn_822315A0();
          bVar4 = false;
        }
      }
      if ((bVar3) && (bVar3 = false, iStack_5c != 0)) {
        fn_822315A0();
      }
      if (bVar2) {
                    /* WARNING: Subroutine does not return */
        fn_82A1EFC0(auStack_50,0,4);
      }
      fn_82381BC0(apiStack_70);
    } while (apiStack_70[0] != lbl_83297008);
  }
  return;
}

