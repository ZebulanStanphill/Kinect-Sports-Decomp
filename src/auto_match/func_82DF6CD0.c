typedef unsigned char bool;

/* WARNING: Inlined function: __savegprlr_26 */

unsigned __int64
fn_82DF6CD0(unsigned char *param_1,char param_2,int *param_3,unsigned int *param_4,unsigned int *param_5,
           unsigned int *param_6,unsigned __int64 param_7)

{
  bool bVar1;
  __int64 lVar2;
  unsigned int uVar4;
  unsigned __int64 uVar3;
  int iVar5;
  unsigned char *puVar6;
  
  *param_6 = 0;
  switch(*param_1) {
  case 0:
  case 1:
    *param_4 = 0x10;
  default:
switchD_82df6d18_caseD_7:
    break;
  case 2:
  case 3:
  case 10:
  case 0xb:
    iVar5 = (-(unsigned int)(param_2 != '\0') & 0x10) + 0x10;
    goto LAB_82df6d90;
  case 4:
  case 5:
  case 0xc:
  case 0xd:
    iVar5 = (-(unsigned int)(param_2 != '\0') & 0x10) + 0x20;
LAB_82df6d90:
    puVar6 = param_1 + iVar5;
    lVar2 = fn_82DF6BF0(*(unsigned int *)((unsigned int)(unsigned char)param_1[1] * 0x50 + *param_3 + 0x16dc));
    uVar4 = (unsigned int)lVar2;
    *param_5 = uVar4;
    if (8 < (lVar2 - 1U & 0xffffffff)) {
__restgprlr_26:
      return 1;
    }
    bVar1 = (int)(lVar2 - 1U) != 0;
    if (((lVar2 != 2 || !bVar1) && (lVar2 != 3 || !bVar1)) && (lVar2 != 4 || !bVar1)) {
      if (lVar2 == 5 && bVar1) {
        *param_5 = uVar4;
        *param_4 = (unsigned int)(unsigned char)param_1[3];
        if ((puVar6[0xb] & 0x20) == 0) {
          uVar3 = fn_82D5B188(param_1,puVar6);
          *param_6 = (int)uVar3;
          uVar3 = fn_82DF7AF8(uVar3,param_3,param_7);
          return uVar3;
        }
        goto switchD_82df6d18_caseD_7;
      }
      if (((lVar2 == 6 && bVar1) || (lVar2 == 7 && bVar1)) || ((lVar2 == 8 && bVar1 || (bVar1)))) {
        *param_4 = (unsigned int)(unsigned char)param_1[3];
        *param_5 = uVar4;
        *param_6 = puVar6;
        uVar3 = fn_82DF7AF8(puVar6,param_3,param_7);
        return uVar3;
      }
    }
    *param_5 = uVar4;
    *param_4 = (unsigned int)(unsigned char)param_1[3];
    break;
  case 6:
  case 0xe:
    goto __restgprlr_26;
  }
  return 0;
}
