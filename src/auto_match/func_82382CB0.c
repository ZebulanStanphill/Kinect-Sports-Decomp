extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern int fn_822315A0();
extern int fn_822ABA88();
extern int fn_822B9390();
extern int fn_82373530();
extern int fn_82374268();
extern int fn_82383000();
extern int iRam83276558;
extern unsigned int iStack_3c;
extern unsigned int iStack_44;
extern unsigned int lbl_831D1C34;


void fn_82382CB0(int param_1,unsigned __int64 param_2,unsigned int param_3)

{
  int *piVar1;
  unsigned int uVar2;
  int *piVar4;
  unsigned __int64 uVar3;
  int iVar5;
  int iVar6;
  unsigned int *apuStack_50 [2];
  unsigned char auStack_48 [4];
  int iStack_44;
  unsigned char auStack_40 [4];
  int iStack_3c;
  
  iVar6 = *(int *)(param_1 + 0x80);
  if (iVar6 != 0) {
    piVar1 = *(int **)(*(int *)(iVar6 + 0x1e4) * 4 + **(int **)(iVar6 + 8));
    piVar4 = (int *)fn_82383000(auStack_48,param_1);
    iVar5 = *piVar4;
    if (iStack_44 != 0) {
      fn_822315A0(iStack_44);
    }
    if (iVar5 != 0) {
      piVar4 = (int *)fn_82383000(auStack_40,param_1);
      uVar2 = lbl_831D1C34;
      iVar5 = *piVar4;
      *(unsigned int *)(iVar5 + 0xd4) = 1;
      *(unsigned int *)(iVar5 + 0xe0) = uVar2;
      *(unsigned int *)(iVar5 + 0xe4) = uVar2;
      if (iStack_3c != 0) {
        fn_822315A0();
      }
    }
    fn_82374268(apuStack_50,iVar6,0,0,param_2);
    iRam83276558 = (int)param_2 + 1;
    apuStack_50[0][0x860] = param_3;
    uVar3 = fn_82373530(iVar6);
    iVar5 = fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1),uVar3);
    iVar6 = 0;
    if (*(int *)(iVar5 + 0x24) != 0) {
      iVar6 = *(int *)(*(int *)(iVar5 + 0x24) + 0xf0);
      if (iVar6 == 0) {
        iVar6 = 1;
      }
      else {
        iVar6 = *(int *)(iVar6 + 0x3c);
      }
    }
                    /* WARNING: Subroutine does not return */
    fn_822B9390(*(unsigned int *)(iVar5 + 0x11c),*apuStack_50[0],(iVar6 == 0) + ' ');
  }
  return;
}

