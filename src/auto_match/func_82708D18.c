extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern int fn_8267B890();
extern int fn_82681D00();
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_82694700();
extern int fn_82694738();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_82696BC8();
extern int fn_826A1F38();
extern int fn_826A2AB8();
extern int fn_826A2CB0();
extern int fn_826B44A0();
extern int fn_826B4808();
extern int fn_82705520();
extern unsigned int iStack_7c;
extern unsigned int iStack_bc;
extern unsigned int uStack_68;
extern unsigned int uStack_88;


unsigned __int64 fn_82708D18(int param_1,unsigned int param_2,unsigned __int64 param_3,__int64 param_4,
                       unsigned int *param_5,unsigned __int64 param_6,unsigned __int64 param_7)

{
  unsigned __int64 uVar1;
  int iVar3;
  char cVar5;
  int iVar4;
  unsigned __int64 uVar2;
  __int64 lVar6;
  float *pfVar7;
  unsigned __int64 *puVar8;
  int aiStack_f0 [4];
  unsigned char auStack_e0 [16];
  char acStack_d0 [16];
  unsigned char auStack_c0 [4];
  int iStack_bc;
  unsigned char auStack_b0 [8];
  double dStack_a8;
  unsigned char auStack_a0 [16];
  unsigned char auStack_90 [8];
  unsigned __int64 uStack_88;
  unsigned char auStack_80 [4];
  int iStack_7c;
  unsigned char auStack_70 [8];
  unsigned int uStack_68;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    uVar1 = 0;
  }
  else {
    iVar3 = (**(int (***)())(**(int **)(param_1 + 0x68) + 0x5c))();
    aiStack_f0[0] = fn_82694700((unsigned __int64)*(unsigned int *)(iVar3 + 0x78) + 0x254,param_3);
    *(int *)(aiStack_f0[0] + 8) = *(int *)(aiStack_f0[0] + 8) + 1;
    acStack_d0[0] = '\0';
    cVar5 = fn_826B44A0(iVar3,aiStack_f0,acStack_d0,0,0,0,0);
    if ((((cVar5 == '\0') || (acStack_d0[0] != '\x06')) ||
        (iVar3 = fn_82696958(acStack_d0,iVar3), iVar3 == 0)) ||
       (iVar4 = (**(int (***)())(*(int *)(iVar3 + 0x10) + 8))(iVar3 + 0x10), iVar4 != 7)) {
      lVar6 = fn_8267B890(*(unsigned int *)(param_1 + 0x14),0x48,0);
      if (lVar6 == 0) {
        iVar3 = 0;
      }
      else {
        uVar2 = (**(int (***)())(**(int **)(param_1 + 0x68) + 0x5c))();
        iVar3 = fn_826A2AB8(lVar6,uVar2);
      }
    }
    else {
      *(unsigned int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1U & 0x8fffffff;
    }
    if ((unsigned __int64)*(unsigned int *)(iVar3 + 0x38) < (param_4 + param_6 & 0xffffffff)) {
      fn_826A2CB0(iVar3);
    }
    if (param_2 == 0) {
      uVar1 = 0;
      if ((param_6 & 0xffffffff) != 0) {
        param_5 = param_5 + -1;
        do {
          param_5 = param_5 + 1;
          uStack_68 = *param_5;
          auStack_70[0] = 4;
          fn_826A1F38(iVar3,uVar1 + param_4,auStack_70);
          fn_82696330(auStack_70);
          uVar1 = uVar1 + 1;
        } while ((uVar1 & 0xffffffff) < (param_6 & 0xffffffff));
      }
    }
    else if (param_2 == 1) {
      uVar1 = 0;
      if ((param_6 & 0xffffffff) != 0) {
        puVar8 = (unsigned __int64 *)(param_5 + -2);
        do {
          puVar8 = puVar8 + 1;
          uStack_88 = *puVar8;
          auStack_90[0] = 3;
          fn_826A1F38(iVar3,uVar1 + param_4,auStack_90);
          fn_82696330(auStack_90);
          uVar1 = uVar1 + 1;
        } while ((uVar1 & 0xffffffff) < (param_6 & 0xffffffff));
      }
    }
    else if (param_2 < 3) {
      uVar1 = 0;
      if ((param_6 & 0xffffffff) != 0) {
        pfVar7 = (float *)(param_5 + -1);
        do {
          pfVar7 = pfVar7 + 1;
          dStack_a8 = (double)*pfVar7;
          auStack_b0[0] = 3;
          fn_826A1F38(iVar3,uVar1 + param_4,auStack_b0);
          fn_82696330(auStack_b0);
          uVar1 = uVar1 + 1;
        } while ((uVar1 & 0xffffffff) < (param_6 & 0xffffffff));
      }
    }
    else if (param_2 == 3) {
      uVar1 = 0;
      if ((param_6 & 0xffffffff) != 0) {
        do {
          iVar4 = fn_82694700((unsigned __int64)*(unsigned int *)(param_1 + 0x9e4) + 0x254,*param_5);
          *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
          auStack_80[0] = 5;
          *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
          iStack_7c = iVar4;
          fn_826A1F38(iVar3,uVar1 + param_4,auStack_80);
          fn_82696330(auStack_80);
          lVar6 = (unsigned __int64)*(unsigned int *)(iVar4 + 8) - 1;
          *(int *)(iVar4 + 8) = (int)lVar6;
          if (lVar6 == 0) {
            fn_826944C8(iVar4);
          }
          uVar1 = uVar1 + 1;
          param_5 = param_5 + 1;
        } while ((uVar1 & 0xffffffff) < (param_6 & 0xffffffff));
      }
    }
    else if (param_2 < 5) {
      uVar1 = 0;
      if ((param_6 & 0xffffffff) != 0) {
        do {
          iVar4 = fn_82694738((unsigned __int64)*(unsigned int *)(param_1 + 0x9e4) + 0x254,*param_5);
          *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
          auStack_c0[0] = 5;
          *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
          iStack_bc = iVar4;
          fn_826A1F38(iVar3,uVar1 + param_4,auStack_c0);
          fn_82696330(auStack_c0);
          lVar6 = (unsigned __int64)*(unsigned int *)(iVar4 + 8) - 1;
          *(int *)(iVar4 + 8) = (int)lVar6;
          if (lVar6 == 0) {
            fn_826944C8(iVar4);
          }
          uVar1 = uVar1 + 1;
          param_5 = param_5 + 1;
        } while ((uVar1 & 0xffffffff) < (param_6 & 0xffffffff));
      }
    }
    else if ((param_2 == 5) && (uVar1 = 0, (param_6 & 0xffffffff) != 0)) {
      do {
        auStack_a0[0] = 0;
        fn_82681D00(param_1,param_5,auStack_a0);
        fn_826A1F38(iVar3,uVar1 + param_4,auStack_a0);
        fn_82696330(auStack_a0);
        uVar1 = uVar1 + 1;
        param_5 = param_5 + 4;
      } while ((uVar1 & 0xffffffff) < (param_6 & 0xffffffff));
    }
    auStack_e0[0] = 0;
    fn_82696BC8(auStack_e0,iVar3);
    uVar2 = (**(int (***)())(**(int **)(param_1 + 0x68) + 0x5c))();
    iVar4 = (int)param_7;
    uVar1 = fn_826B4808(uVar2,aiStack_f0,auStack_e0,0,iVar4 == 0);
    if ((((uVar1 & 0xff) == 0) && (iVar4 != 0)) || (iVar4 == 2)) {
      fn_82705520(param_1,aiStack_f0,auStack_e0,param_7);
    }
    fn_82696330(auStack_e0);
    fn_82696330(acStack_d0);
    fn_826824B0(iVar3);
    lVar6 = (unsigned __int64)*(unsigned int *)(aiStack_f0[0] + 8) - 1;
    *(int *)(aiStack_f0[0] + 8) = (int)lVar6;
    if (lVar6 == 0) {
      fn_826944C8(aiStack_f0[0]);
    }
  }
  return uVar1;
}

