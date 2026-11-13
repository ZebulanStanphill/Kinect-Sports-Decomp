extern int fn_825089A0();
extern int fn_82880BD8();
extern int fn_82885A18();
extern int fn_8289F160();
extern int fn_828EA790();
extern unsigned int iStack_2c;
extern unsigned int lbl_831599F0;
extern unsigned int lbl_831599F4;
extern unsigned int *lbl_83212A04;


void fn_828863B0(void)

{
  int *piVar1;
  int *piVar3;
  int iVar4;
  unsigned __int64 uVar2;
  int iVar5;
  int *piStack_30;
  int iStack_2c;
  int * apiStack_28;
  
  piVar3 = (int *)fn_825089A0();
  (**(int (***)())(*piVar3 + 0xc))();
  if (lbl_831599F0 != -1) {
    do {
      iVar4 = fn_82885A18(lbl_831599F0,0xffffffffffffffff);
    } while (iVar4 != 0);
  }
  iVar4 = lbl_831599F4;
  if ((lbl_831599F4 != -1) && (uVar2 = fn_82880BD8(), -1 < (int)uVar2)) {
    do {
      iVar5 = fn_82885A18(iVar4,uVar2);
      iVar4 = lbl_831599F4;
    } while (iVar5 != 0);
  }
  piStack_30 = (int *)*lbl_83212A04;
  piVar3 = lbl_83212A04;
  if (piStack_30 != lbl_83212A04) {
    do {
      piVar1 = piStack_30;
      iStack_2c = piStack_30[3];
      fn_8289F160(&apiStack_28,0xffffffff83212a00,&iStack_2c);
      if (apiStack_28 == piVar3) {
        iVar4 = 0;
      }
      else {
        iVar4 = apiStack_28[4];
      }
      if (*(char *)(iVar4 + 6) != '\0') {
        do {
          iVar4 = fn_82885A18(0,piVar1[3]);
          piVar3 = lbl_83212A04;
        } while (iVar4 != 0);
      }
      fn_828EA790(&piStack_30);
    } while (piStack_30 != piVar3);
  }
  return;
}

