extern unsigned int *auStack_150;
extern unsigned int *auStack_1d0;
extern unsigned int *auStack_d0;
extern int fn_82AA05D8();
extern int fn_82AA1FC8();
extern int sprintf();
extern int memcpy();
extern unsigned int iStack_1d4;
extern unsigned int iStack_1f8;
extern unsigned int iStack_1fc;
extern unsigned int iStack_200;
extern unsigned int uStack_1dc;
extern unsigned int uStack_1e0;
extern unsigned int uStack_1e4;
extern unsigned int uStack_1e8;
extern unsigned int uStack_1ec;
extern unsigned int uStack_1f0;
extern unsigned int *uStack_1f4;


void fn_82AA2370(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,int param_6,unsigned __int64 param_7,int param_8)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int *piVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int iVar7;
  struct { int first; int second; } stack_pair_200;

  int iStack_1f8;
  unsigned int uStack_1f4;
  unsigned int uStack_1f0;
  unsigned int uStack_1ec;
  unsigned int uStack_1e8;
  unsigned int uStack_1e4;
  unsigned int uStack_1e0;
  unsigned int uStack_1dc;
  int iStack_1d4;
  unsigned char auStack_1d0 [128];
  unsigned char auStack_150 [128];
  unsigned char auStack_d0 [128];
  
  memcpy(&stack_pair_200.first,param_5,0x30);
  uVar2 = 0xffffffff820d29ec;
  if (uStack_1e0 == 1) {
    if (uStack_1dc != 0) {
      uVar2 = 0xffffffff820d31dc;
    }
  }
  else {
    uVar2 = 0xffffffff820d31e8;
  }
  sprintf(auStack_1d0,uVar2,param_3,param_2,stack_pair_200.first,param_4);
  if (uStack_1e0 == 1) {
    if (uStack_1dc == 0) {
      fn_82AA1FC8(param_1,auStack_1d0,&stack_pair_200.first);
      if (uStack_1e0 != 1) goto LAB_82aa2430;
      if (uStack_1dc == 0) {
        return;
      }
    }
    sprintf(auStack_150,0xffffffff820d29ec,param_3,param_2,stack_pair_200.first,param_4);
    piVar4 = (int *)(*(int *)(param_8 + 0xc) + param_6);
    uVar5 = uStack_1f4;
    for (uVar3 = (unsigned __int64)uStack_1dc; uVar3 != 0; uVar3 = uVar3 - 1) {
      iVar7 = piVar4[1] + param_6;
      stack_pair_200.first = *piVar4 + param_6;
      uStack_1e4 = (unsigned int)*(unsigned short *)(iVar7 + 6);
      uStack_1e8 = (unsigned int)*(unsigned short *)(iVar7 + 4);
      uStack_1f0 = (unsigned int)*(unsigned short *)(piVar4[1] + param_6);
      uStack_1ec = (unsigned int)*(unsigned short *)(iVar7 + 2);
      uStack_1e0 = (unsigned int)*(unsigned short *)(iVar7 + 8);
      uStack_1dc = (unsigned int)*(unsigned short *)(iVar7 + 10);
      uStack_1f4 = fn_82AA05D8(&stack_pair_200.first,param_6,iVar7);
      if (uVar5 < uStack_1f4) {
        uStack_1f4 = uVar5;
      }
      uVar5 = uVar5 - uStack_1f4;
      fn_82AA2370(param_1,0xffffffff821c7f2c,auStack_150,0xffffffff82196582,&stack_pair_200.first,param_6,
                    param_7,iVar7);
      iStack_1f8 = iStack_1f8 + uStack_1f4;
      if (iStack_1d4 != 0) {
        iStack_1d4 = ((-(unsigned int)(stack_pair_200.second != 0) & 3) + 1) * uStack_1f4 * 4 + iStack_1d4;
      }
      piVar4 = piVar4 + 2;
    }
  }
  else {
LAB_82aa2430:
    sprintf(auStack_150,0xffffffff821c8538,param_3,param_2,param_4);
    uVar5 = uStack_1e0;
    uStack_1e0 = 1;
    uVar1 = fn_82AA05D8(&stack_pair_200.first,param_6,param_8);
    uVar3 = 0;
    uVar6 = uStack_1f4;
    uStack_1f4 = uVar1;
    if (uVar5 != 0) {
      do {
        sprintf(auStack_d0,0xffffffff820d31d4,uVar3);
        if (uVar6 < uStack_1f4) {
          uStack_1f4 = uVar6;
        }
        uVar6 = uVar6 - uStack_1f4;
        fn_82AA2370(param_1,0xffffffff82196582,auStack_150,auStack_d0,&stack_pair_200.first,param_6,param_7,
                      param_8);
        iStack_1f8 = iStack_1f8 + uStack_1f4;
        if (iStack_1d4 != 0) {
          iStack_1d4 = ((-(unsigned int)(stack_pair_200.second != 0) & 3) + 1) * uStack_1f4 * 4 + iStack_1d4;
        }
        uVar3 = uVar3 + 1;
      } while ((uVar3 & 0xffffffff) < (unsigned __int64)uVar5);
    }
  }
  return;
}

