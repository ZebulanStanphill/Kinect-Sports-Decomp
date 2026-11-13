extern int fn_8240D928();
extern int fn_8240D930();
extern int fn_8265C9E0();
extern int fn_82897BD0();
extern int fn_828BE158();
extern int fn_828DC720();
extern int fn_828DCAD8();
extern int fn_828DCFF0();
extern int fn_828E1EB0();
extern int fn_828E1EE8();
extern int fn_828E1F60();
extern int fn_828E1FA0();
extern int fn_828E21D8();


void fn_828D5FC8(int param_1)

{
  unsigned int uVar1;
  int iVar3;
  char cVar4;
  unsigned __int64 uVar2;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  
  uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0xc);
  if (uVar6 != *(unsigned int *)(param_1 + 0x10)) {
    do {
      uVar5 = 0;
      iVar3 = fn_8240D928(uVar6);
      if (iVar3 != 0) {
        do {
          cVar4 = fn_828E1EE8(uVar6,uVar5);
          if (cVar4 != '\0') {
            uVar7 = 0;
            cVar4 = fn_828E1F60(uVar6,uVar5);
            if (cVar4 != '\0') {
              do {
                if ((uVar7 & 0xffffffff) == 0) {
                  uVar7 = fn_8265C9E0(0x98);
                  if ((uVar7 & 0xffffffff) == 0) {
                    uVar7 = 0;
                  }
                  else {
                    uVar1 = *(unsigned int *)(param_1 + 8);
                    fn_8240D930(uVar6);
                    uVar2 = fn_8240D928();
                    uVar7 = fn_828DCAD8(uVar7,uVar2,uVar1);
                  }
                }
                uVar2 = fn_828E21D8(uVar6,uVar5);
                fn_828DCFF0(uVar7,uVar2);
                fn_828E1FA0(uVar6,uVar5);
                cVar4 = fn_828DC720(uVar7);
                if (cVar4 != '\0') {
                  uVar1 = *(unsigned int *)(param_1 + 4);
                  fn_828E1EB0(uVar6,uVar5);
                  uVar2 = fn_82897BD0();
                  fn_828BE158(uVar1,uVar7,uVar2,1);
                  uVar7 = 0;
                }
                cVar4 = fn_828E1F60(uVar6,uVar5);
              } while (cVar4 != '\0');
              if ((uVar7 & 0xffffffff) != 0) {
                uVar1 = *(unsigned int *)(param_1 + 4);
                fn_828E1EB0(uVar6,uVar5);
                uVar2 = fn_82897BD0();
                fn_828BE158(uVar1,uVar7,uVar2,1);
              }
            }
          }
          uVar5 = uVar5 + 1;
          uVar7 = fn_8240D928(uVar6);
        } while ((uVar5 & 0xffffffff) < (uVar7 & 0xffffffff));
      }
      uVar6 = uVar6 + 0x1c;
    } while ((uVar6 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(param_1 + 0x10));
  }
  return;
}

