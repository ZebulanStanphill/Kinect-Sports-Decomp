extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82B80CD0();
extern int fn_82B86C90();


unsigned __int64 fn_82ABF768(double param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  double extraout_f1;
  unsigned int auStack_60 [4];
  unsigned __int64 auStack_50 [4];
  
  if ((*param_2 & 0xe000000) == 0) {
LAB_82abf78c:
    uVar4 = 0;
  }
  else {
    uVar5 = fn_82B86C90(param_2[3],auStack_50,auStack_60);
    uVar1 = *param_2;
    uVar8 = 0;
    if ((uVar1 & 0xe000000) != 0) {
      uVar9 = 0;
      uVar6 = uVar5;
      do {
        uVar2 = (uVar1 >> 5 & 0xff) >> (uVar9 & 0x3f);
        uVar3 = (unsigned __int64)uVar2;
        if ((((unsigned int)(1 << (uVar2 & 3)) & uVar5) == 0) ||
           (iVar7 = (int)((uVar3 & 3) << 1),
           uVar6 = fn_82B80CD0(*(unsigned __int64 *)((int)auStack_50 + (int)((uVar3 & 3) << 3)),
                                     uVar6,((2 << (int)((uVar3 & 3) << 1) + 1) - 1U & auStack_60[0]
                                           & -1 << iVar7) >> iVar7,uVar1 & 0x1f),
           extraout_f1 != param_1)) goto LAB_82abf78c;
        uVar1 = *param_2;
        uVar8 = uVar8 + 1;
        uVar9 = uVar9 + 2;
      } while (uVar8 < (uVar1 >> 0x19 & 7));
    }
    uVar4 = 1;
  }
  return uVar4;
}

