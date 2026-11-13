extern int fn_82660558();
extern int fn_82660720();
extern int fn_82660740();
extern int fn_82660760();
extern int fn_82660790();
extern int fn_82660870();
extern int fn_826610F8();
extern int fn_82661AB8();
extern int fn_82BA02A8();
extern unsigned int uStack0000001c;


void fn_826605D8(int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int *piStack00000014;
  unsigned int uStack0000001c;
  
  piStack00000014 = param_1;
  uStack0000001c = param_2;
  uVar1 = fn_82660760(param_1);
  if (uVar1 < uStack0000001c) {
    fn_82660870(piStack00000014);
  }
  else {
    uVar1 = fn_82660720(piStack00000014);
    if (uVar1 < uStack0000001c) {
      iVar2 = fn_826610F8(piStack00000014 + 3,uStack0000001c);
      fn_82661AB8(piStack00000014,*piStack00000014,piStack00000014[1],iVar2);
      iVar3 = fn_82660740(piStack00000014);
      if (*piStack00000014 != 0) {
        fn_82660790(piStack00000014,*piStack00000014,piStack00000014[1]);
        fn_82660558(piStack00000014 + 3,*piStack00000014,
                      piStack00000014[2] - *piStack00000014 >> 5);
      }
      fn_82BA02A8(piStack00000014);
      piStack00000014[2] = iVar2 + uStack0000001c * 0x20;
      piStack00000014[1] = iVar2 + iVar3 * 0x20;
      *piStack00000014 = iVar2;
    }
  }
  return;
}

