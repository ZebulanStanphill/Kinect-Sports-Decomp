extern int fn_82C038C8();
extern int fn_82C130C0();
extern int fn_82C14C30();
extern int fn_82C15150();
extern unsigned int lbl_820ED0B8;
extern unsigned int lbl_820ED0C8;
extern unsigned int lbl_820F8F08;
extern unsigned int lbl_820F8F18;
extern unsigned int lbl_82154BA8;
extern unsigned int lbl_82154BB8;
extern unsigned int uStack_80;


unsigned __int64 fn_82C15620(__int64 *param_1,__int64 param_2,unsigned __int64 param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  unsigned short uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned char * apbStack_90;
  unsigned int uStack_80;
  short sStack_7c;
  short sStack_7a;
  unsigned char bStack_78;
  unsigned char bStack_77;
  unsigned char bStack_76;
  unsigned char bStack_75;
  unsigned char bStack_74;
  unsigned char bStack_73;
  unsigned char bStack_72;
  unsigned char bStack_71;
  unsigned char abStack_70 [32];
  
  apbStack_90 = (unsigned char *)0x0;
  uVar9 = 0;
  uVar7 = 0;
  if (param_1 == (__int64 *)0x0) {
    uVar9 = 2;
  }
  else {
    uVar8 = param_2 - 0x18;
    if (((0x11 < (uVar8 & 0xffffffff)) &&
        (iVar3 = fn_82C038C8(param_1,*param_1,0x12,&apbStack_90), iVar3 == 0x12)) &&
       (apbStack_90 != (unsigned char *)0x0)) {
      puVar4 = &uStack_80;
      pbVar5 = (unsigned char *)&lbl_82154BA8;
      uStack_80 = (((unsigned int)apbStack_90[3] * 0x100 + (unsigned int)apbStack_90[2]) * 0x100 +
                  (unsigned int)apbStack_90[1]) * 0x100 + (unsigned int)*apbStack_90;
      sStack_7c = (unsigned short)apbStack_90[5] * 0x100 + (unsigned short)apbStack_90[4];
      bStack_78 = apbStack_90[8];
      sStack_7a = (unsigned short)apbStack_90[7] * 0x100 + (unsigned short)apbStack_90[6];
      bStack_77 = apbStack_90[9];
      bStack_76 = apbStack_90[10];
      bStack_75 = apbStack_90[0xb];
      bStack_74 = apbStack_90[0xc];
      bStack_73 = apbStack_90[0xd];
      bStack_72 = apbStack_90[0xe];
      bStack_71 = apbStack_90[0xf];
      pbVar6 = apbStack_90 + 0x10;
      do {
        bVar1 = *pbVar5;
        bVar2 = *(unsigned char *)puVar4;
        if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
        pbVar5 = pbVar5 + 1;
        puVar4 = (unsigned int *)((int)puVar4 + 1);
      } while (pbVar5 != (unsigned char *)&lbl_82154BB8);
      if (((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) &&
         (pbVar5 = apbStack_90 + 0x11, apbStack_90 = apbStack_90 + 0x12,
         (unsigned __int64)*pbVar5 * 0x100 + (unsigned __int64)*pbVar6 == 6)) {
        if (((0x15 < (uVar8 & 0xffffffff)) &&
            (iVar3 = fn_82C038C8(param_1,*param_1 + 0x12,4,&apbStack_90), iVar3 == 4)) &&
           (apbStack_90 != (unsigned char *)0x0)) {
          if ((0x17 < (((unsigned __int64)apbStack_90[3] * 0x100 + (unsigned __int64)apbStack_90[2]) * 0x100
                      + (unsigned __int64)apbStack_90[1]) * 0x100 + (unsigned __int64)*apbStack_90) &&
             (0x16 < (uVar8 & 0xffffffff))) {
            uVar10 = 0x16;
            apbStack_90 = apbStack_90 + 4;
            do {
              uVar9 = fn_82C130C0(param_1,abStack_70,&uStack_80,uVar10);
              if ((int)uVar9 != 0) {
                return uVar9;
              }
              pbVar6 = abStack_70;
              pbVar5 = &lbl_820ED0B8;
              do {
                bVar1 = *pbVar5;
                bVar2 = *pbVar6;
                if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
                pbVar5 = pbVar5 + 1;
                pbVar6 = pbVar6 + 1;
              } while (pbVar5 != &lbl_820ED0C8);
              if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
                uVar11 = uStack_80 + uVar10;
                uVar7 = uVar7 + 1;
                if (((uVar8 & 0xffffffff) < (uVar11 & 0xffffffff)) || (1 < uVar7)) {
                  uVar9 = 3;
                  break;
                }
                uVar9 = fn_82C14C30(param_1,(unsigned __int64)uStack_80,uVar10);
                if ((int)uVar9 != 0) {
                  uVar9 = 0;
                }
              }
              else {
                pbVar6 = abStack_70;
                pbVar5 = &lbl_820F8F08;
                do {
                  bVar1 = *pbVar5;
                  bVar2 = *pbVar6;
                  if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
                  pbVar5 = pbVar5 + 1;
                  pbVar6 = pbVar6 + 1;
                } while (pbVar5 != &lbl_820F8F18);
                if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
                  uVar11 = uStack_80 + uVar10;
                  if ((unsigned __int64)param_1[5] < (uVar11 - 0x18 & 0xffffffff)) {
                    return 1;
                  }
                  uVar9 = fn_82C15150(param_1,(unsigned __int64)uStack_80,param_3,uVar10);
                  if ((int)uVar9 != 0) {
                    return uVar9;
                  }
                }
                else {
                  uVar11 = uStack_80 + uVar10;
                }
              }
              uVar10 = uVar11;
            } while ((uVar11 & 0xffffffff) < (uVar8 & 0xffffffff));
          }
          *param_1 = (uVar8 & 0xffffffff) + *param_1;
          return uVar9;
        }
      }
      else {
        *param_1 = (uVar8 & 0xffffffff) + *param_1;
      }
    }
    uVar9 = 3;
  }
  return uVar9;
}

