static __forceinline unsigned select_value(int ok,unsigned value) {return ok ? value : 0;}
extern unsigned int *auStack_4c;
extern int fn_82E4FE40();
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82E64450();
extern int fn_82E644B8();
extern int fn_82E64520();
extern int fn_82E72FB8();
extern unsigned int uStack_50;


void fn_82E64F20(int param_1)

{
  int lVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned *piVar5;
  unsigned int uStack_50;
  unsigned int auStack_4c;

  fn_82E50CB8(param_1 + 0xc);
  uVar2 = 0;
  if (*(unsigned int *)(param_1 + 0xb4) > 0) {
    do {
      lVar1 = fn_82E644B8(param_1 + 0x4c,uVar2,&uStack_50);
      piVar5 = (unsigned *)select_value(lVar1,uStack_50);
      if (piVar5 != (int *)0x0) {
        if (*piVar5 != 0) {
          fn_82E4FE40(*piVar5);
        }
        uVar4 = 0;
        *piVar5 = 0;
        if (piVar5[0x1b] > 0) {
          do {
            lVar1 = fn_82E64450(piVar5 + 1,uVar4,&auStack_4c);
            uVar3 = select_value(lVar1,auStack_4c);
            if (uVar3 != 0) {
              fn_82E72FB8(uVar3 + 0x18);
              fn_82E4FE40(uVar3);
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < piVar5[0x1b]);
        }
        fn_82E64520(piVar5,1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(unsigned int *)(param_1 + 0xb4));
  }
  fn_82E50F10(param_1 + 0xc);
  return;
}
