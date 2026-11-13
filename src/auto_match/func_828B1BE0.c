extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int fStack_ac;
extern int fn_82230180();
extern int fn_823AA2A8();
extern int fn_823AA970();
extern int fn_8240D928();
extern int fn_825089A0();
extern int fn_82610EF0();
extern int fn_8265C9E0();
extern int fn_82881EE8();
extern int fn_82886518();
extern int fn_8289D8D0();
extern int fn_8289DAD0();
extern int fn_8289EFB8();
extern int fn_8289F2E0();
extern int fn_8289F350();
extern int fn_8289F3A8();
extern int fn_828A0AA0();
extern int fn_828A1C08();
extern int fn_828A3410();
extern int fn_828ACCE8();
extern int fn_828AD7A0();
extern int fn_828AECC0();
extern int fn_828AF740();
extern int fn_828B1770();
extern int fn_828B17D0();
extern int fn_828B1AD8();
extern int fn_828B27A8();
extern int fn_828BE158();
extern int fn_828D3028();
extern int fn_828D9A48();
extern int fn_828DC618();
extern unsigned int iStack_b0;
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;
extern unsigned int uStack_a4;


void fn_828B1BE0(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,__int64 param_4,int param_5,
                  unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int uVar1;
  int iVar7;
  char cVar12;
  unsigned int *puVar8;
  unsigned int uVar9;
  __int64 lVar2;
  __int64 lVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  int *piVar10;
  int iVar11;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  double dVar15;
  unsigned int uStack0000001c;
  unsigned char in_stack_00000057;
  unsigned int in_stack_0000005c;
  unsigned char in_stack_00000067;
  int iStack_b0;
  float fStack_ac;
  char acStack_a8 [4];
  unsigned int uStack_a4;
  unsigned char auStack_a0 [32];
  unsigned char auStack_80 [64];
  
  uStack0000001c = (unsigned int)param_2;
  iStack_b0 = 0;
  iVar7 = fn_8289D8D0();
  if (iVar7 != 0) {
    fn_8289D8D0(param_1);
    cVar12 = fn_8289DAD0();
    if ((((cVar12 != '\0') && (cVar12 = fn_828ACCE8(param_1), cVar12 != '\0')) &&
        (iVar7 = fn_8289F2E0(param_1,param_2), iVar7 == 0)) &&
       (cVar12 = fn_828D9A48(param_1), cVar12 == '\0')) {
      fn_828B1AD8(param_1);
      if (param_5 != 0) {
        piVar10 = *(int **)param_1[0x33];
        uVar14 = param_3;
        if (piVar10 != (int *)param_1[0x33]) {
          do {
            if (((uVar14 & 0xffffffff) == 0) || (piVar10[2] != param_5)) {
              piVar10 = (int *)*piVar10;
            }
            else {
              puVar8 = (unsigned int *)fn_828B1770(&iStack_b0,param_1 + 0x33);
              piVar10 = (int *)*puVar8;
              uVar14 = uVar14 - 1;
            }
          } while (((uVar14 & 0xffffffff) != 0) && (piVar10 != (unsigned int *)param_1[0x33]));
        }
      }
      iVar7 = param_1[0x34];
      uVar9 = fn_828A1C08(param_1);
      lVar2 = fn_82610EF0(param_1 + 0x18);
      lVar3 = fn_823AA2A8(param_1 + 0x18);
      lVar4 = fn_8289EFB8(param_1);
      if ((unsigned __int64)(lVar2 + lVar3) < (unsigned __int64)(lVar4 + param_4)) {
        uVar13 = 2;
      }
      else if (((unsigned int)param_8 & 0xff) == (uVar9 & 0xff)) {
        cVar12 = fn_828D3028(param_1[0x16]);
        if (cVar12 == '\0') {
          iVar11 = *param_1;
          uVar13 = fn_8289EFB8(param_1);
          uVar13 = (**(int (***)())(iVar11 + 0x24))
                             (param_1,uVar13,param_3,param_4,iVar7,in_stack_00000067,param_8,
                              in_stack_00000057);
        }
        else {
          uVar13 = 0xb;
        }
      }
      else {
        uVar13 = 8;
      }
      uVar5 = fn_828A0AA0(param_1);
      iVar7 = fn_8289F350(param_1,uVar5);
      if (((iVar7 == 0) && (fn_828A3410(acStack_a8,param_1), acStack_a8[0] != '\0')) &&
         (iVar7 = fn_8289F3A8(param_1,uStack_a4), iVar7 == 0)) {
        uVar14 = fn_8265C9E0(0xd0);
        if ((uVar14 & 0xffffffff) == 0) {
          uVar5 = 0;
        }
        else {
          uVar6 = fn_82881EE8(param_2);
          uVar5 = fn_828AF740(uVar14,param_1,param_2,uStack_a4,uVar5,uVar6,param_3,
                                in_stack_0000005c);
        }
        if ((int)uVar13 == 0) {
          param_3 = param_4 - param_3;
          iVar7 = 0;
          if (param_3 != 0) {
            iVar7 = param_1[0x22];
            param_1[0x22] = iVar7 + 1U;
            if (0xf < iVar7 + 1U) {
              param_1[0x22] = 1;
            }
            iVar7 = param_1[0x22];
            piVar10 = (int *)fn_825089A0();
            dVar15 = (double)(**(int (***)())(*piVar10 + 8))();
            if ((param_3 & 0xffffffff) != 0) {
              fStack_ac = (float)dVar15;
              iStack_b0 = iVar7;
              do {
                fn_828B17D0(param_1 + 0x33,param_1[0x33],&iStack_b0);
                param_3 = param_3 - 1;
              } while (param_3 != 0);
            }
          }
          uVar14 = fn_8265C9E0(0xd8);
          if ((uVar14 & 0xffffffff) == 0) {
            uVar13 = 0;
          }
          else {
            iVar11 = fn_8289D8D0(param_1);
            uVar1 = *(unsigned int *)(iVar11 + 0x10);
            fn_828AD7A0(auStack_a0);
            fn_823AA970(uVar5);
            uVar13 = fn_8240D928(uVar5);
            fn_8289D8D0(param_1);
            uVar5 = fn_823AA970();
            fn_8289D8D0(param_1);
            uVar6 = fn_8240D928();
            uVar13 = fn_828DC618(uVar14,param_7,0,iVar7,uVar6,uVar5,uVar1,uVar13);
            fn_82230180(auStack_a0);
          }
        }
        else {
          uVar14 = fn_8265C9E0(0xd8);
          if ((uVar14 & 0xffffffff) == 0) {
            uVar13 = 0;
          }
          else {
            fn_828AD7A0(auStack_80);
            uVar13 = fn_828DC618(uVar14,param_7,uVar13,0,0xffffffffffffffff,0xffffffffffffffff,
                                     0xffffffffffffffff,0xffffffffffffffff);
            fn_82230180(auStack_80);
          }
          fn_828AECC0(uVar5,2);
        }
        fn_82886518(uVar13,1000,0xffffffffffffffff);
        fn_828BE158(param_1,uVar13,param_2,0);
      }
      else {
        fn_828B27A8(param_1 + 0x74,param_1[0x74],&stack0x0000001c);
      }
    }
  }
  return;
}

