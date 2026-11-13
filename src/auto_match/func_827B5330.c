extern int fn_827B4BC8();
extern int fn_827B4F80();
extern int fn_827B4FF0();
extern int fn_827B51A8();
extern int fn_827B5240();
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_827B5330(unsigned int *param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  struct { int first; int second; } stack_pair_70;

  struct { unsigned int first; unsigned int second; } stack_pair_60;

  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;

  puVar3 = param_1 + 5;
  param_1[9] = 0;
  param_1[0xd] = 0;
  param_1[0x11] = 0;
  if (param_1[5] != 0) {
    fn_827B4BC8(puVar3,0,*puVar3,0xffffffff827b4a68);
    uVar2 = *puVar3 - 1;
    param_1[3] = *(unsigned int *)
                  (*(int *)((uVar2 >> 6 & 0x3fffffc) + param_1[8]) + (uVar2 & 0xff) * 0xc);
    param_1[4] = *(unsigned int *)
                  (*(int *)((uVar2 >> 6 & 0x3fffffc) + param_1[8]) + (uVar2 & 0xff) * 0xc + 4);
    param_1[2] = 0;
    do {
      uStack_58 = *param_1;
      uStack_54 = param_1[1];
      param_1[0x11] = 0;
      stack_pair_60.first = 0;
      stack_pair_60.second = 0;
      uStack_50 = 0xffffffff;
      uStack_4c = 0xffffffff;
      uStack_48 = 0xffffffff;
      uVar2 = param_1[2];
      fn_827B4FF0(param_1 + 0x11,&stack_pair_60.first);
      fn_827B5240(param_1,0,0);
      if (uVar2 < (unsigned int)param_1[2]) {
        iVar1 = param_1[9];
        stack_pair_70.first = iVar1;
        fn_827B51A8(param_1);
        stack_pair_70.second = param_1[9] - iVar1;
        fn_827B4F80(param_1 + 0xd,&stack_pair_70.first);
      }
    } while ((unsigned int)param_1[2] < *puVar3);
  }
  return;
}
