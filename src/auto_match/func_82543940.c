extern int fn_82542200();
extern int fn_826310E0();
extern int fn_8263A120();
extern int fn_82640A98();


void fn_82543940(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  int iVar8;
  __int64 lVar7;
  
  param_1[10999] = param_1[0x10] * param_2[1] + param_1[10999];
  param_1[11000] =
       param_1[11000] +
       (int)((-(unsigned __int64)(unsigned int)param_1[0x13] & ~(unsigned __int64)(unsigned int)param_1[0x13] & 0xffffffff) >>
            0x1f) + param_1[0x12];
  iVar8 = 0;
  fn_8263A120(*param_1,*param_2);
  if (param_1[0xf] == 0) {
    lVar7 = 0;
    if (0 < (int)param_1[0x12]) {
      do {
        fn_82542200(param_1,param_1 + 0x14,lVar7);
        fn_82640A98(*param_1,4,0,0,(__int64)(int)param_2[1] * (__int64)(int)param_1[0x11]);
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < (int)param_1[0x12]);
    }
  }
  else {
    iVar3 = 0;
    if (0 < (int)param_1[0x12]) {
      do {
        uVar4 = (unsigned __int64)(unsigned int)param_1[0x11];
        if ((param_1[0xc] != iVar8) && (param_1[0xc] = iVar8, 0 < (int)param_1[0x11])) {
          uVar6 = 0x85;
          puVar5 = param_1 + iVar8 * 0x10 + 0x14;
          do {
            uVar2 = (uVar6 & 0xffffffff) >> 2;
            fn_826310E0(*param_1,uVar6,puVar5,3,
                         (unsigned __int64)
                         (-0x8000000000000000 >> (((uVar6 + 2 & 0xffffffff) >> 2) - uVar2 & 0x7f))
                         >> (uVar2 & 0x7f));
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 0x10;
            uVar6 = uVar6 + 3;
          } while (uVar4 != 0);
        }
        fn_82640A98(*param_1,4,0,0,(__int64)(int)param_2[1] * (__int64)(int)param_1[0x11]);
        iVar8 = iVar8 + param_1[0x11];
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)param_1[0x12]);
    }
    uVar1 = param_1[0x13];
    uVar4 = (unsigned __int64)uVar1;
    if (0 < (int)uVar1) {
      if ((param_1[0xc] != iVar8) && (param_1[0xc] = iVar8, 0 < (int)uVar1)) {
        uVar6 = 0x85;
        puVar5 = param_1 + iVar8 * 0x10 + 0x14;
        do {
          uVar2 = (uVar6 & 0xffffffff) >> 2;
          fn_826310E0(*param_1,uVar6,puVar5,3,
                       (unsigned __int64)
                       (-0x8000000000000000 >> (((uVar6 + 2 & 0xffffffff) >> 2) - uVar2 & 0x7f)) >>
                       (uVar2 & 0x7f));
          uVar4 = uVar4 - 1;
          puVar5 = puVar5 + 0x10;
          uVar6 = uVar6 + 3;
        } while (uVar4 != 0);
      }
      fn_82640A98(*param_1,4,0,0,(__int64)(int)param_1[0x13] * (__int64)(int)param_2[1]);
    }
  }
  return;
}

