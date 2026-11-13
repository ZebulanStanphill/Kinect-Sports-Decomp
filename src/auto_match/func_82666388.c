extern int fn_8265FE68();
extern int fn_82660870();
extern int fn_826664D8();
extern int fn_82666C10();
extern int fn_82666DC8();
extern int fn_826678B0();
extern int fn_82668E00();
extern int fn_82668E40();
extern int fn_82BA02A8();
extern unsigned int uStack0000001c;


void fn_82666388(int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int *piStack00000014;
  unsigned int uStack0000001c;
  
  piStack00000014 = param_1;
  uStack0000001c = param_2;
  uVar1 = fn_8265FE68(param_1);
  if (uVar1 < uStack0000001c) {
    fn_82660870(piStack00000014);
  }
  else {
    uVar1 = fn_82666C10(piStack00000014);
    if (uVar1 < uStack0000001c) {
      iVar2 = fn_82666DC8(piStack00000014 + 3,uStack0000001c,0);
      fn_826678B0(piStack00000014,*piStack00000014,piStack00000014[1],iVar2);
      iVar3 = fn_826664D8(piStack00000014);
      if (*piStack00000014 != 0) {
        fn_82668E00(piStack00000014,*piStack00000014,piStack00000014[1]);
        fn_82668E40(piStack00000014 + 3,*piStack00000014,
                          (piStack00000014[2] - *piStack00000014) / 0xc);
      }
      fn_82BA02A8(piStack00000014);
      piStack00000014[2] = iVar2 + uStack0000001c * 0xc;
      piStack00000014[1] = iVar2 + iVar3 * 0xc;
      *piStack00000014 = iVar2;
    }
  }
  return;
}

