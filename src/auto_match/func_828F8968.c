extern unsigned int *auStack_c40;
extern unsigned int *auStack_c4c;
extern int fn_8265C990();
extern int fn_828F5778();
extern int fn_828F5A30();
extern int fn_828F8F18();
extern int fn_828FA8D8();
extern int fn_828FBB60();
extern int fn_82F691F0();
extern unsigned int lbl_82196582;
extern unsigned int uStack_c50;


unsigned __int64 fn_828F8968(int param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  int iVar4;
  unsigned __int64 uVar3;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  unsigned int uStack_c50;
  unsigned int auStack_c4c [3];
  unsigned char auStack_c40 [3136];
  
  if (*(int *)(param_1 + 0x54) == 0) {
    do {
      if ((*(int *)(param_1 + 0x74) != 0) && (*(int *)(*(int *)(param_1 + 0x74) + 8) == 0)) {
        uVar3 = 0;
        goto LAB_828f8d44;
      }
      iVar4 = *(int *)(param_1 + 0x70);
      if (iVar4 == 0) {
        uVar3 = fn_828FBB60(*(unsigned int *)(param_1 + 0x278),*(unsigned int *)(param_1 + 0x2a0),
                                  param_2);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
      }
      else {
        *(unsigned __int64 *)param_2 = *(unsigned __int64 *)(iVar4 + 0x10);
        *(unsigned __int64 *)(param_2 + 2) = *(unsigned __int64 *)(iVar4 + 0x18);
        *(unsigned __int64 *)(param_2 + 4) = *(unsigned __int64 *)(iVar4 + 0x20);
        *(unsigned __int64 *)(param_2 + 6) = *(unsigned __int64 *)(iVar4 + 0x28);
        *(unsigned int *)(param_1 + 0x70) = *(unsigned int *)(*(int *)(param_1 + 0x70) + 0xc);
        *(unsigned int *)(iVar4 + 0xc) = 0;
        param_2[4] = *(int *)(*(int *)(param_1 + 0x278) + 0x18);
        param_2[5] = *(int *)(*(int *)(param_1 + 0x278) + 0x1c);
        *(unsigned int *)(param_1 + 0x4c) = 0;
      }
      iVar4 = *param_2;
      if (iVar4 == 1) {
        piVar5 = param_2 + 2;
        pcVar7 = "#";
        do {
          cVar1 = *pcVar7;
          cVar2 = *(char *)piVar5;
          if (cVar1 == '\0') break;
          pcVar7 = pcVar7 + 1;
          piVar5 = (int *)((int)piVar5 + 1);
        } while (cVar1 == cVar2);
        if ((cVar1 == cVar2) && (*(int *)(param_1 + 0x4c) != 0)) {
          *(unsigned int *)(param_1 + 0x4c) = 0;
          *(unsigned int *)(param_1 + 0x50) = 0;
          *(unsigned int *)(param_1 + 0x58) = 1;
          *(unsigned int *)(param_1 + 0x60) = *(unsigned int *)(param_1 + 0x5c);
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(auStack_c40,0,0xbdc);
        }
      }
      if (iVar4 == 0xd) {
        if (*(int *)(*(int *)(param_1 + 0x274) + 0x38) != 0) {
          fn_828FA8D8(param_1 + 0x18,param_2,0x5de,0xffffffff82029638);
        }
        iVar4 = *(int *)(param_1 + 0x274);
        if (*(int *)(iVar4 + 0x5c) != 0) {
          *(int *)(param_1 + 0x274) = *(int *)(iVar4 + 0x5c);
          *(unsigned int *)(iVar4 + 0x5c) = 0;
          fn_828F5A30(iVar4);
          fn_8265C990(iVar4,0x24810000);
          *(unsigned int *)(param_1 + 0x278) = *(unsigned int *)(param_1 + 0x274);
          *param_2 = 0xc;
          *(unsigned int *)(param_1 + 0x4c) = 1;
        }
        return 0;
      }
      if ((((*(int *)(param_1 + 0x5c) == 0) || (iVar4 != 9)) ||
          (iVar4 = fn_828F5778(param_1,param_2[2],&uStack_c50,auStack_c4c), iVar4 == 0)) ||
         (iVar4 = fn_828F8F18(param_1,param_2,uStack_c50,auStack_c4c[0]), iVar4 == 2)) {
        if (*param_2 == 9) {
          pcVar7 = (char *)param_2[2];
          pcVar6 = "__FILE__";
          pcVar8 = pcVar7;
          do {
            cVar1 = *pcVar8;
            cVar2 = *pcVar6;
            if (cVar1 == '\0') break;
            pcVar8 = pcVar8 + 1;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 == cVar2);
          pcVar6 = "__LINE__";
          if (cVar1 == cVar2) {
            *param_2 = 10;
            iVar4 = *(int *)(*(int *)(param_1 + 0x278) + 0x18);
            param_2[2] = iVar4;
            if (iVar4 == 0) {
              param_2[2] = (int)&lbl_82196582;
            }
          }
          else {
            do {
              cVar1 = *pcVar7;
              cVar2 = *pcVar6;
              if (cVar1 == '\0') break;
              pcVar7 = pcVar7 + 1;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 == cVar2);
            if (cVar1 == cVar2) {
              *param_2 = 2;
              param_2[2] = *(int *)(*(int *)(param_1 + 0x278) + 0x1c);
            }
          }
        }
        *(unsigned int *)(param_1 + 0x4c) = (unsigned int)LZCOUNT(*param_2 + -0xc) >> 5;
        if (*(int *)(param_1 + 0x5c) != 0) {
          iVar4 = *(int *)(param_1 + 0x74);
          if (iVar4 == 0) {
            return 0;
          }
          if (*(int *)(iVar4 + 4) == 0) {
            return 0;
          }
          if ((*param_2 == 1) && (*(char *)((int)param_2 + 9) == '\0')) {
            if (*(char *)(param_2 + 2) == '{') {
              *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
            }
            if (*(char *)(param_2 + 2) == '}') {
              iVar4 = *(int *)(*(int *)(param_1 + 0x74) + 8);
              if (iVar4 != 0) {
                *(int *)(*(int *)(param_1 + 0x74) + 8) = iVar4 + -1;
              }
            }
          }
          if (*(int *)(*(int *)(param_1 + 0x74) + 8) != 0) {
            return 0;
          }
          *param_2 = 0xd;
          return 0;
        }
      }
      else if (iVar4 == 0) {
        *(unsigned int *)(param_1 + 0x54) = 1;
        *(unsigned int *)(param_1 + 0x50) = 1;
        return 0xffffffff80004005;
      }
    } while (*(int *)(param_1 + 0x54) == 0);
  }
  uVar3 = 0xffffffff80004005;
LAB_828f8d44:
  param_2[4] = *(int *)(*(int *)(param_1 + 0x278) + 0x18);
  param_2[5] = *(int *)(*(int *)(param_1 + 0x278) + 0x1c);
  *param_2 = 0xd;
  return uVar3;
}

