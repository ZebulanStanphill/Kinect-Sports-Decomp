extern unsigned int *auStack_150;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_828F4440();
extern int fn_828F4578();
extern int fn_828F5A30();
extern int fn_828F6FA8();
extern int fn_828F7AD0();
extern int fn_828FA8D8();
extern int fn_828FBB60();
extern int fn_82A1F4F8();
extern int fn_82A9F7E8();


__int64 fn_828F7B18(int param_1)

{
  __int64 lVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  int *piVar6;
  unsigned __int64 uVar7;
  unsigned char *puVar8;
  unsigned char auStack_150 [336];
  
  piVar6 = (int *)(param_1 + 0x280);
  lVar1 = fn_828FBB60(*(unsigned int *)(param_1 + 0x278),*(unsigned int *)(param_1 + 0x2a0) | 0xc,piVar6
                           );
  if ((int)lVar1 < 0) {
    return lVar1;
  }
  if (*piVar6 == 10) {
    uVar7 = 0;
  }
  else {
    if (*piVar6 != 0xb) {
      fn_828F7AD0(param_1,0xffffffff82029464);
      return -0x7fffbffb;
    }
    uVar7 = 1;
  }
  puVar8 = *(unsigned char **)(param_1 + 0x288);
  if ((*(int *)(param_1 + 0x27c) == 0) && (*(int *)(*(int *)(param_1 + 0x278) + 0x18) == 0)) {
    uVar7 = 0x5e1;
    uVar5 = 0xffffffff82029568;
LAB_828f7bb4:
    fn_828FA8D8(param_1 + 0x18,piVar6,uVar7,uVar5);
    *(unsigned int *)(param_1 + 0x54) = 1;
    lVar1 = -0x7fffbffb;
    *(unsigned int *)(param_1 + 0x50) = 1;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x274);
    uVar2 = 0;
    if (iVar3 != 0) {
      do {
        iVar3 = *(int *)(iVar3 + 0x5c);
        uVar2 = uVar2 + 1;
      } while (iVar3 != 0);
      if (0x1f < uVar2) {
        uVar7 = 0x5e2;
        uVar5 = 0xffffffff8202954c;
        goto LAB_828f7bb4;
      }
    }
    if ((*(int *)(param_1 + 0x27c) == 0) &&
       ((uVar2 = fn_82A1F4F8(puVar8), uVar2 == 0xffffffff || ((uVar2 & 0x10) != 0)))) {
      fn_828F6FA8(auStack_150,0x104,0xffffffff821b0c70,
                    *(unsigned int *)(*(int *)(param_1 + 0x274) + 0x50),puVar8);
      puVar8 = auStack_150;
    }
    iVar3 = fn_8265C940(0x60,0x24810000);
    if (iVar3 == 0) {
      puVar4 = (unsigned int *)0x0;
    }
    else {
      puVar4 = (unsigned int *)fn_828F4440();
    }
    if (puVar4 == (unsigned int *)0x0) {
      lVar1 = -0x7ff8fff2;
    }
    else {
      lVar1 = fn_828F4578(puVar4,puVar8,0,param_1,piVar6,param_1 + 0x18,
                            *(unsigned int *)(param_1 + 0x27c),uVar7);
      if (lVar1 < 0) {
        *(unsigned int *)(param_1 + 0x54) = 1;
        *(unsigned int *)(param_1 + 0x50) = 1;
        fn_828F5A30(puVar4);
        fn_8265C990(puVar4,0x24810000);
      }
      else {
        puVar4[0x17] = *(unsigned int *)(param_1 + 0x274);
        *(unsigned int **)(param_1 + 0x274) = puVar4;
        if ((*(int *)(param_1 + 0x2b0) != 0) &&
           (iVar3 = *(int *)(*(int *)(param_1 + 0x2b0) + 0x14), iVar3 != 0)) {
          fn_82A9F7E8(iVar3,puVar4[0x13],(unsigned __int64)*puVar4,
                          (unsigned __int64)puVar4[1] - (unsigned __int64)*puVar4);
        }
        lVar1 = 0;
      }
    }
  }
  return lVar1;
}

