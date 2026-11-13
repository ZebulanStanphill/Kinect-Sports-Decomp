extern unsigned int *auStack_80;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_828F6FA8();
extern int fn_828FC4C8();
extern int fn_828FCDE0();
extern int fn_829352D0();
extern int fn_82F65FE0();
extern unsigned int uStack_84;
extern unsigned int uStack_86;
extern unsigned int uStack_88;
extern unsigned int uStack_8a;
extern unsigned int uStack_8c;
extern unsigned int uStack_8e;
extern unsigned int uStack_90;


__int64 fn_8295B9B0(int param_1,unsigned __int64 param_2,int param_3,int param_4)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  int *piVar4;
  unsigned int uVar5;
  __int64 lVar6;
  int iVar7;
  unsigned short uStack_90;
  unsigned short uStack_8e;
  unsigned short uStack_8c;
  unsigned short uStack_8a;
  unsigned short uStack_88;
  unsigned short uStack_86;
  unsigned int uStack_84;
  unsigned char auStack_80 [128];
  
  lVar6 = 0;
  iVar1 = 0;
  if (*(int *)(param_1 + 0x15c) == 0) {
    lVar6 = 0;
  }
  else {
    uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1d4) + (unsigned __int64)*(unsigned int *)(param_1 + 500) +
            (unsigned __int64)*(unsigned int *)(param_1 + 0x1f8);
    if (uVar2 != 0) {
      iVar1 = fn_8265C940((uVar2 & 0x3fffffff) << 2,0x24810000);
      if (iVar1 == 0) {
        lVar6 = -0x7ff8fff2;
      }
      else {
        uVar2 = 0;
        if (*(int *)(param_1 + 0x2c) != 0) {
          do {
            fn_828F6FA8(auStack_80,0x20,0xffffffff82038148,uVar2);
            lVar6 = fn_828FCDE0(param_1 + 0x1b8,auStack_80,uVar2,1);
            if (lVar6 < 0) goto LAB_8295bbc4;
            uVar2 = uVar2 + 1;
          } while ((uVar2 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x2c));
        }
        fn_828FC4C8(param_1 + 0x1b8,iVar1);
        iVar7 = *(int *)(param_1 + 0x1d4) + *(int *)(param_1 + 0x1f8);
        fn_828FC4C8(param_1 + 0x1d8,iVar7 * 4 + iVar1);
        uVar5 = *(int *)(param_1 + 500) + iVar7;
        fn_82F65FE0(iVar1,uVar5,4,0xffffffff828fc870);
        uStack_86 = 0;
        uStack_84 = 0;
        uStack_90 = 1;
        param_3 = param_4 * 0x14 + param_3;
        uStack_8e = 3;
        uStack_8c = 1;
        uVar3 = 0;
        uStack_8a = 4;
        uStack_88 = 1;
        if (uVar5 != 0) {
          piVar4 = (int *)(iVar1 + -4);
          do {
            lVar6 = fn_829352D0(param_2,*(unsigned int *)piVar4[1],0xffffffffffffffff,7,param_3,
                                      1);
            if (lVar6 < 0) goto LAB_8295bbc4;
            lVar6 = fn_829352D0(param_2,&uStack_90,0x10,6,param_3 + 0xc,0);
            if (lVar6 < 0) goto LAB_8295bbc4;
            if (*(int *)(piVar4[1] + 0xc) != 0) {
              *(unsigned short *)(param_3 + 10) = *(unsigned short *)(param_3 + 10) | 1;
              lVar6 = fn_829352D0(param_2,(unsigned __int64)(unsigned int)piVar4[1] + 0x10,0x10,7,
                                        param_3 + 0x10,0);
              if (lVar6 < 0) goto LAB_8295bbc4;
            }
            uVar3 = uVar3 + 1;
            *(unsigned short *)(param_3 + 4) = 2;
            piVar4 = piVar4 + 1;
            *(short *)(param_3 + 6) = (short)*(unsigned int *)(*piVar4 + 4);
            *(unsigned short *)(param_3 + 8) = 1;
            param_3 = param_3 + 0x14;
          } while (uVar3 < uVar5);
        }
        lVar6 = 0;
      }
    }
LAB_8295bbc4:
    fn_8265C990(iVar1,0x24810000);
  }
  return lVar6;
}

