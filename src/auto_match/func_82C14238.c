extern unsigned int *auStack_68;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82C038C8();
extern int fn_82C12DD0();


unsigned __int64 fn_82C14238(unsigned __int64 *param_1,unsigned __int64 param_2)

{
  unsigned char uVar1;
  unsigned short *puVar2;
  int iVar3;
  unsigned short *puVar4;
  unsigned char *puVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  unsigned char *apbStack_70 [2];
  unsigned __int64 auStack_68;
  
  uVar7 = *param_1;
  apbStack_70[0] = (unsigned char *)0x0;
  uVar8 = 0;
  uVar6 = ((param_2 & 0xffffffff) + uVar7) - 0x18;
  if (*(int *)((int)param_1 + 0xcc) == 0) {
    puVar2 = (unsigned short *)fn_8265C940(0x20,0x248c8000);
    *(unsigned short **)((int)param_1 + 0xcc) = puVar2;
    if (puVar2 == (unsigned short *)0x0) {
      uVar8 = 5;
    }
    else {
      puVar4 = puVar2 + -2;
      lVar9 = 8;
      do {
        puVar4 = puVar4 + 2;
        puVar4[0] = 0;
        puVar4[1] = 0;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      if (uVar6 < uVar7 + 10) {
        uVar8 = 6;
      }
      else {
        iVar3 = fn_82C038C8(param_1,uVar7,10,apbStack_70);
        if (iVar3 == 10) {
          *puVar2 = (unsigned short)apbStack_70[0][1] * 0x100 + (unsigned short)*apbStack_70[0];
          puVar2[1] = (unsigned short)apbStack_70[0][3] * 0x100 + (unsigned short)apbStack_70[0][2];
          puVar2[2] = (unsigned short)apbStack_70[0][5] * 0x100 + (unsigned short)apbStack_70[0][4];
          puVar2[3] = (unsigned short)apbStack_70[0][7] * 0x100 + (unsigned short)apbStack_70[0][6];
          puVar2[4] = (unsigned short)apbStack_70[0][9] * 0x100 + (unsigned short)apbStack_70[0][8];
          apbStack_70[0] = apbStack_70[0] + 10;
          auStack_68 = uVar7 + 10;
          uVar8 = fn_82C12DD0(param_1,&auStack_68,uVar6,puVar2,puVar2 + 6);
          if ((int)uVar8 == 0) {
            uVar7 = (unsigned __int64)(*puVar2 >> 1);
            if (uVar7 != 0) {
              puVar5 = (unsigned char *)(*(int *)(puVar2 + 6) + -1);
              do {
                uVar1 = puVar5[1];
                puVar5[1] = puVar5[2];
                puVar5 = puVar5 + 2;
                *puVar5 = uVar1;
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
            }
            uVar8 = fn_82C12DD0(param_1,&auStack_68,uVar6,puVar2 + 1,puVar2 + 8);
            if ((int)uVar8 == 0) {
              uVar7 = (unsigned __int64)(puVar2[1] >> 1);
              if (uVar7 != 0) {
                puVar5 = (unsigned char *)(*(int *)(puVar2 + 8) + -1);
                do {
                  uVar1 = puVar5[1];
                  puVar5[1] = puVar5[2];
                  puVar5 = puVar5 + 2;
                  *puVar5 = uVar1;
                  uVar7 = uVar7 - 1;
                } while (uVar7 != 0);
              }
              uVar8 = fn_82C12DD0(param_1,&auStack_68,uVar6,puVar2 + 2,puVar2 + 10);
              if ((int)uVar8 == 0) {
                uVar7 = (unsigned __int64)(puVar2[2] >> 1);
                if (uVar7 != 0) {
                  puVar5 = (unsigned char *)(*(int *)(puVar2 + 10) + -1);
                  do {
                    uVar1 = puVar5[1];
                    puVar5[1] = puVar5[2];
                    puVar5 = puVar5 + 2;
                    *puVar5 = uVar1;
                    uVar7 = uVar7 - 1;
                  } while (uVar7 != 0);
                }
                uVar8 = fn_82C12DD0(param_1,&auStack_68,uVar6,puVar2 + 3,puVar2 + 0xc);
                if ((int)uVar8 == 0) {
                  uVar7 = (unsigned __int64)(puVar2[3] >> 1);
                  if (uVar7 != 0) {
                    puVar5 = (unsigned char *)(*(int *)(puVar2 + 0xc) + -1);
                    do {
                      uVar1 = puVar5[1];
                      puVar5[1] = puVar5[2];
                      puVar5 = puVar5 + 2;
                      *puVar5 = uVar1;
                      uVar7 = uVar7 - 1;
                    } while (uVar7 != 0);
                  }
                  uVar8 = fn_82C12DD0(param_1,&auStack_68,uVar6,puVar2 + 4,puVar2 + 0xe);
                  if ((int)uVar8 == 0) {
                    uVar7 = (unsigned __int64)(puVar2[4] >> 1);
                    if (uVar7 != 0) {
                      puVar5 = (unsigned char *)(*(int *)(puVar2 + 0xe) + -1);
                      do {
                        uVar1 = puVar5[1];
                        puVar5[1] = puVar5[2];
                        puVar5 = puVar5 + 2;
                        *puVar5 = uVar1;
                        uVar7 = uVar7 - 1;
                      } while (uVar7 != 0);
                      *param_1 = uVar6;
                      return uVar8;
                    }
                    goto LAB_82c142f0;
                  }
                }
              }
            }
          }
        }
        else {
          uVar8 = 3;
        }
      }
    }
    iVar3 = *(int *)((int)param_1 + 0xcc);
    if (iVar3 != 0) {
      fn_8265C990(*(unsigned int *)(iVar3 + 0xc),0x248c8000);
      fn_8265C990(*(unsigned int *)(iVar3 + 0x10),0x248c8000);
      fn_8265C990(*(unsigned int *)(iVar3 + 0x14),0x248c8000);
      fn_8265C990(*(unsigned int *)(iVar3 + 0x18),0x248c8000);
      fn_8265C990(*(unsigned int *)(iVar3 + 0x1c),0x248c8000);
      fn_8265C990(*(unsigned int *)((int)param_1 + 0xcc),0x248c8000);
      *(unsigned int *)((int)param_1 + 0xcc) = 0;
    }
  }
LAB_82c142f0:
  *param_1 = uVar6;
  return uVar8;
}

