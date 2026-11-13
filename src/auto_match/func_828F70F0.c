#define true 1
extern int fn_8265C940();
extern int fn_828F59D0();
extern int fn_828F6C70();
extern int fn_828FA8D8();
extern int fn_828FADC0();
extern int fn_828FBB60();
extern int fn_829301D0();
extern int fn_82930318();
extern int fn_82930940();
extern int fn_82F68CC0();


__int64 fn_828F70F0(int param_1,unsigned int param_2,int param_3)

{
  char cVar1;
  char cVar2;
  unsigned int *puVar3;
  unsigned int *puVar6;
  __int64 lVar4;
  unsigned __int64 uVar5;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  int *piVar11;
  int *piVar12;
  
  puVar6 = (unsigned int *)fn_8265C940(0x14,0x24810000);
  if (puVar6 == (unsigned int *)0x0) {
    puVar6 = (unsigned int *)0x0;
  }
  else {
    *puVar6 = param_2;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
  }
  if (puVar6 != (unsigned int *)0x0) {
    if (param_3 != 0) {
      puVar3 = *(unsigned int **)(param_1 + 0x278);
      if (((char *)*puVar3 < (char *)puVar3[1]) && (*(char *)*puVar3 == '(')) {
        piVar11 = (int *)(param_1 + 0x280);
        lVar4 = fn_828FBB60(puVar3,*(unsigned int *)(param_1 + 0x2a0),piVar11);
        if (lVar4 < 0) goto LAB_828f744c;
        piVar12 = puVar6 + 1;
        do {
          lVar4 = fn_828FBB60(*(unsigned int *)(param_1 + 0x278),
                                    *(unsigned int *)(param_1 + 0x2a0),piVar11);
          if (lVar4 < 0) goto LAB_828f744c;
          iVar7 = *piVar11;
          if (iVar7 != 9) goto LAB_828f72f8;
          iVar7 = puVar6[1];
          if (iVar7 != 0) {
            do {
              pcVar10 = *(char **)(iVar7 + 0x18);
              pcVar9 = *(char **)(param_1 + 0x288);
              do {
                cVar1 = *pcVar9;
                cVar2 = *pcVar10;
                if (cVar1 == '\0') break;
                pcVar9 = pcVar9 + 1;
                pcVar10 = pcVar10 + 1;
              } while (cVar1 == cVar2);
              if (cVar1 == cVar2) {
                fn_828FA8D8(param_1 + 0x18,piVar11,0x5e7,0xffffffff82029474);
                break;
              }
              iVar7 = *(int *)(iVar7 + 0xc);
            } while (iVar7 != 0);
          }
          uVar5 = fn_82930318(0x30);
          if ((uVar5 & 0xffffffff) == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = fn_82930940(uVar5,piVar11);
          }
          *piVar12 = iVar7;
          if (iVar7 == 0) goto LAB_828f741c;
          piVar12 = (int *)(iVar7 + 0xc);
          lVar4 = fn_828FBB60(*(unsigned int *)(param_1 + 0x278),
                                    *(unsigned int *)(param_1 + 0x2a0),piVar11);
          if (lVar4 < 0) goto LAB_828f744c;
          iVar7 = *piVar11;
          if (iVar7 != 1) goto LAB_828f72f8;
          pcVar8 = (char *)(param_1 + 0x288);
          pcVar10 = ",";
          pcVar9 = pcVar8;
          do {
            cVar1 = *pcVar10;
            cVar2 = *pcVar9;
            if (cVar1 == '\0') break;
            pcVar10 = pcVar10 + 1;
            pcVar9 = pcVar9 + 1;
          } while (cVar1 == cVar2);
        } while (cVar1 == cVar2);
        pcVar10 = ")";
        do {
          cVar1 = *pcVar10;
          cVar2 = *pcVar8;
          if (cVar1 == '\0') break;
          pcVar10 = pcVar10 + 1;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 != cVar2) {
LAB_828f72f8:
          if ((iVar7 == 0xc) || (iVar7 == 0xd)) {
            *(unsigned int *)(param_1 + 0x4c) = 1;
          }
          fn_828FADC0(param_1 + 0x18,0x5dc,piVar11);
          *(unsigned int *)(param_1 + 0x50) = 1;
          lVar4 = -0x7fffbffb;
          goto LAB_828f744c;
        }
      }
    }
    piVar11 = puVar6 + 2;
    while( true ) {
      iVar7 = *(int *)(param_1 + 0x70);
      piVar12 = (int *)(param_1 + 0x280);
      if (iVar7 == 0) {
        lVar4 = fn_828FBB60(*(unsigned int *)(param_1 + 0x278),*(unsigned int *)(param_1 + 0x2a0),
                                  piVar12);
        if (lVar4 < 0) goto LAB_828f744c;
      }
      else {
        *(unsigned __int64 *)(param_1 + 0x280) = *(unsigned __int64 *)(iVar7 + 0x10);
        *(unsigned __int64 *)(param_1 + 0x288) = *(unsigned __int64 *)(iVar7 + 0x18);
        *(unsigned __int64 *)(param_1 + 0x290) = *(unsigned __int64 *)(iVar7 + 0x20);
        *(unsigned __int64 *)(param_1 + 0x298) = *(unsigned __int64 *)(iVar7 + 0x28);
        *(unsigned int *)(param_1 + 0x70) = *(unsigned int *)(iVar7 + 0xc);
        *(unsigned int *)(iVar7 + 0xc) = 0;
        *(unsigned int *)(param_1 + 0x290) = *(unsigned int *)(*(int *)(param_1 + 0x278) + 0x18);
        *(unsigned int *)(param_1 + 0x294) = *(unsigned int *)(*(int *)(param_1 + 0x278) + 0x1c);
      }
      if ((*piVar12 == 0xc) || (*piVar12 == 0xd)) {
        *(unsigned int *)(param_1 + 0x4c) = 1;
        lVar4 = fn_828F6C70(param_1,puVar6);
        if (-1 < lVar4) {
          puVar6 = (unsigned int *)0x0;
          lVar4 = 0;
        }
        goto LAB_828f744c;
      }
      uVar5 = fn_82930318(0x30);
      if ((uVar5 & 0xffffffff) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = fn_82930940(uVar5,piVar12);
      }
      if ((iVar7 == 0) ||
         (lVar4 = fn_829301D0(param_1,*(unsigned int *)(param_1 + 0x29c),1), lVar4 == 0)) break;
      fn_82F68CC0(lVar4,*(unsigned int *)(param_1 + 0x298),*(unsigned int *)(param_1 + 0x29c));
      *(int *)(iVar7 + 0x28) = (int)lVar4;
      *piVar11 = iVar7;
      piVar11 = (int *)(iVar7 + 0xc);
    }
  }
LAB_828f741c:
  lVar4 = -0x7ff8fff2;
LAB_828f744c:
  if (puVar6 != (unsigned int *)0x0) {
    fn_828F59D0(puVar6,1);
  }
  return lVar4;
}

