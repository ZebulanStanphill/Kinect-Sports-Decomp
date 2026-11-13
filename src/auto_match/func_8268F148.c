extern int fn_8268E490();
extern int fn_8268E490();
extern int fn_8268E5C8();
extern int fn_8268E7C0();
extern int fn_8268F0E8();


int * fn_8268F148(unsigned int *param_1,int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int *puVar7;

  if (param_1[2] < param_3) {
    puVar7 = param_1 + 3;
    piVar3 = (int *)fn_8268E7C0(puVar7);
    piVar2 = (int *)0x0;
    if (piVar3 != (int *)0x0) {
      uVar1 = *param_1;
      piVar4 = piVar3;
      do {
        uVar5 = (int)piVar3 + param_3 & ~param_3;
        for (uVar6 = uVar5 - (int)piVar3; (uVar6 != 0 && (uVar6 < 0x40));
            uVar6 = param_3 + 1 + uVar6) {
          uVar5 = param_3 + 1 + uVar5;
        }
        if (uVar5 + (param_2 << (uVar1 & 0x3f)) <=
            (unsigned int)((piVar3[9] << (uVar1 & 0x3f)) + (int)piVar3)) {
          piVar2 = (int *)*piVar3;
          if (piVar2 == piVar3) {
            fn_8268E490(puVar7,piVar3);
          }
          else {
            piVar4 = (int *)piVar3[1];
            *piVar4 = (int)piVar2;
            piVar2[1] = (int)piVar4;
            fn_8268E490(puVar7,piVar3);
          }
          fn_8268E5C8(param_1 + 4,piVar3);
          param_1[5] = param_1[5] - piVar3[9];
          return piVar3;
        }
        piVar3 = (int *)piVar3[1];
      } while ((piVar3 != piVar4) ||
              (piVar3 = (int *)fn_8268E7C0(puVar7,(unsigned __int64)(unsigned int)piVar3[9] + 1),
              piVar2 = (int *)0x0, piVar4 = piVar3, piVar3 != (int *)0x0));
    }
  }
  else {
    piVar2 = (int *)fn_8268F0E8();
  }
  return piVar2;
}
