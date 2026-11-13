#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_60;
extern int fn_82F39D20();
extern int fn_82F39E50();
extern int fn_82F68CC0();
extern unsigned int iStack_84;
extern unsigned int iStack_88;
extern unsigned int iStack_8c;
extern unsigned int iStack_90;
extern unsigned int iStack_9c;
extern unsigned int iStack_a4;
extern unsigned int iStack_b4;
extern unsigned int iStack_b8;
extern unsigned int iStack_c0;
extern unsigned int uStack_48;
extern unsigned int uStack_4a;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_68;
extern unsigned int uStack_70;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;


unsigned __int64 fn_82F3A300(int *param_1,int param_2,unsigned int param_3,unsigned int *param_4)

{
  unsigned short uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  int *piVar7;
  unsigned int uVar8;
  int iStack_c0;
  unsigned char *pbStack_bc;
  int iStack_b8;
  int iStack_b4;
  unsigned int uStack_b0;
  unsigned short *puStack_ac;
  unsigned int uStack_a8;
  int iStack_a4;
  unsigned int uStack_a0;
  int iStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int aiStack_80 [4];
  unsigned __int64 uStack_70;
  unsigned __int64 uStack_68;
  unsigned __int64 auStack_60 [2];
  unsigned int uStack_50;
  unsigned short uStack_4c;
  unsigned short uStack_4a;
  unsigned __int64 uStack_48;
  
  if (param_1[3] == 0) {
    uVar3 = 0xffffffffc00d36b6;
  }
  else if ((param_4 == (unsigned int *)0x0) || ((param_3 != 0 && (param_2 == 0)))) {
    uVar3 = 0xffffffff80070057;
  }
  else {
    (**(int (***)())(*param_1 + 0x14))(param_1,auStack_60,0);
    if (auStack_60[0] < 0x100000000) {
      *param_4 = (unsigned int)auStack_60[0];
      if (param_3 < (unsigned int)auStack_60[0]) {
        uVar3 = 0xffffffffc00d36b1;
      }
      else {
        uStack_68 = *(unsigned __int64 *)(param_1 + 6);
        uStack_70 = CONCAT44((unsigned int)*(unsigned char *)((int)param_1 + 0x13) << 0x18 |
                             (unsigned int)*(unsigned char *)((int)param_1 + 0x12) << 0x10 |
                             (unsigned int)*(unsigned char *)((int)param_1 + 0x11) << 8 |
                             (unsigned int)*(unsigned char *)(param_1 + 4),
                             CONCAT22(*(unsigned short *)(param_1 + 5) << 8 | *(unsigned short *)(param_1 + 5) >> 8,
                                      *(unsigned short *)((int)param_1 + 0x16) << 8 |
                                      *(unsigned short *)((int)param_1 + 0x16) >> 8));
        fn_82F68CC0(param_2,&uStack_70,0x10);
        uVar4 = *(unsigned __int64 *)(param_1 + 8);
        uStack_70 = ((((unsigned __int64)(uStack_70)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)uVar4)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
        uStack_70 = ((((unsigned __int64)(uStack_70)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int)(uVar4 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
        *(unsigned __int64 *)(param_2 + 0x10) =
             ((uVar4 & 0xff) << 0x18 |
             (uVar4 & 0xff00) << 8 |
             (unsigned __int64)((((unsigned __int64)(uStack_70) >> 32) & 0xFFFFFFFF) >> 8) & 0xff00 | (unsigned __int64)((((unsigned __int64)(uStack_70) >> 32) & 0xFFFFFFFF) >> 0x18)) <<
             0x20 | ((unsigned __int64)(((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF) & 0xff) << 0x18 |
                    ((unsigned __int64)(((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF) & 0xff00) << 8 |
                    (unsigned __int64)((((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF) >> 8) & 0xff00 |
                    (unsigned __int64)((((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF) >> 0x18);
        *(unsigned short *)(param_2 + 0x18) =
             (unsigned short)(((unsigned __int64)(unsigned int)param_1[0x49a] & 0xffff) << 8) |
             (unsigned short)(((unsigned __int64)(unsigned int)param_1[0x49a] & 0xffff) >> 8);
        puVar6 = (unsigned int *)(param_2 + 0x1a);
        if (param_1[0x49a] != 0) {
          piVar7 = param_1 + 0x12;
          uVar8 = 0;
          uStack_70 = uVar4;
          do {
            fn_82F39E50(piVar7,uVar8,&pbStack_bc);
            uStack_50 = (unsigned int)pbStack_bc[3] << 0x18 | (unsigned int)pbStack_bc[2] << 0x10 |
                        (unsigned int)pbStack_bc[1] << 8 | (unsigned int)*pbStack_bc;
            uStack_4c = *(unsigned short *)(pbStack_bc + 4) << 8 | *(unsigned short *)(pbStack_bc + 4) >> 8;
            uStack_4a = *(unsigned short *)(pbStack_bc + 6) << 8 | *(unsigned short *)(pbStack_bc + 6) >> 8;
            uStack_48 = *(unsigned __int64 *)(pbStack_bc + 8);
            fn_82F68CC0(puVar6,&uStack_50,0x10);
            fn_82F39E50(piVar7,uVar8,&iStack_b8);
            puVar6[4] = (unsigned int)*(unsigned char *)(iStack_b8 + 0x13) << 0x18 |
                        (unsigned int)*(unsigned char *)(iStack_b8 + 0x12) << 0x10 |
                        (unsigned int)*(unsigned char *)(iStack_b8 + 0x11) << 8 | (unsigned int)*(unsigned char *)(iStack_b8 + 0x10);
            fn_82F39E50(piVar7,uVar8,&iStack_b4);
            *(unsigned short *)(puVar6 + 5) =
                 (unsigned short)(((unsigned __int64)*(unsigned int *)(iStack_b4 + 0xd0) & 0xff) << 8) |
                 (unsigned short)(*(unsigned int *)(iStack_b4 + 0xd0) >> 8) & 0xff;
            puVar6 = (unsigned int *)((int)puVar6 + 0x16);
            fn_82F39E50(piVar7,uVar8,&iStack_c0);
            if (*(int *)(iStack_c0 + 0xd0) != 0) {
              uVar5 = 0;
              do {
                fn_82F39E50(piVar7,uVar8,&uStack_b0);
                fn_82F39D20((unsigned __int64)uStack_b0 + 0x14,uVar5,&puStack_ac);
                *(unsigned short *)puVar6 = *puStack_ac << 8 | *puStack_ac >> 8;
                fn_82F39E50(piVar7,uVar8,&uStack_a8);
                fn_82F39D20((unsigned __int64)uStack_a8 + 0x14,uVar5,&iStack_a4);
                *(unsigned short *)((int)puVar6 + 2) =
                     *(unsigned short *)(iStack_a4 + 2) << 8 | *(unsigned short *)(iStack_a4 + 2) >> 8;
                puVar6 = puVar6 + 1;
                fn_82F39E50(piVar7,uVar8,&uStack_a0);
                fn_82F39D20((unsigned __int64)uStack_a0 + 0x14,uVar5,&iStack_9c);
                if (*(short *)(iStack_9c + 2) != 0) {
                  fn_82F39E50(piVar7,uVar8,&uStack_98);
                  fn_82F39D20((unsigned __int64)uStack_98 + 0x14,uVar5,&iStack_90);
                  fn_82F39E50(piVar7,uVar8,&uStack_94);
                  fn_82F39D20((unsigned __int64)uStack_94 + 0x14,uVar5,&iStack_8c);
                  uVar1 = *(unsigned short *)(iStack_90 + 2);
                  fn_82F68CC0(puVar6,*(unsigned int *)(iStack_8c + 4),(unsigned int)uVar1);
                  puVar6 = (unsigned int *)((unsigned int)uVar1 + (int)puVar6);
                }
                uVar5 = uVar5 + 1 & 0xffff;
                fn_82F39E50(piVar7,uVar8,&iStack_c0);
              } while (uVar5 < *(unsigned int *)(iStack_c0 + 0xd0));
            }
            fn_82F39E50(piVar7,uVar8,&iStack_88);
            *puVar6 = (unsigned int)*(unsigned char *)(iStack_88 + 0xd7) << 0x18 |
                      (unsigned int)*(unsigned char *)(iStack_88 + 0xd6) << 0x10 |
                      (unsigned int)*(unsigned char *)(iStack_88 + 0xd5) << 8 | (unsigned int)*(unsigned char *)(iStack_88 + 0xd4);
            puVar6 = puVar6 + 1;
            fn_82F39E50(piVar7,uVar8,&iStack_84);
            if (*(int *)(iStack_84 + 0xd4) != 0) {
              fn_82F39E50(piVar7,uVar8,aiStack_80);
              fn_82F39E50(piVar7,uVar8,&uStack_70);
              iVar2 = *(int *)(aiStack_80[0] + 0xd4);
              fn_82F68CC0(puVar6,*(unsigned int *)((((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF) + 0xd8),iVar2);
              puVar6 = (unsigned int *)(iVar2 + (int)puVar6);
            }
            uVar8 = uVar8 + 1 & 0xffff;
          } while (uVar8 < (unsigned int)param_1[0x49a]);
        }
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0xffffffffc00d3a9a;
    }
  }
  return uVar3;
}

