#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_240;
extern unsigned int *auStack_258;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern unsigned int *lbl_8323B464;
extern unsigned int uStack_260;


void fn_82DE0DB8(int *param_1,int *param_2,unsigned char *param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char *pbVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  unsigned int uVar7;
  unsigned __int64 in_r0;
  int iVar8;
  int iVar9;
  unsigned __int64 uVar10;
  unsigned int uVar11;
  unsigned __int64 uStack_260;
  unsigned char auStack_258 [24];
  unsigned char auStack_240 [576];
  
LAB_82de0de4:
  bVar1 = *param_3;
  uVar10 = (unsigned __int64)bVar1;
  if (0x6b < uVar10) {
switchD_82de0e04_caseD_8:
    fn_82CEE578(auStack_258,auStack_240,0x200);
    fn_82CEDB38(auStack_258,0xffffffff82142a88);
    iVar8 = (**(int (***)())(*lbl_8323B464 + 0xc))
                      (lbl_8323B464,3,0x1298fedd,auStack_240,0xffffffff82142ddc,0x71);
    if (iVar8 != 0) {
      trapWord(0x1f,in_r0,0x16);
    }
                    /* WARNING: Subroutine does not return */
    fn_82CED958(auStack_258);
  }
  in_r0 = (unsigned __int64)*(unsigned int *)((unsigned int)bVar1 * 4 + -0x7d21f1f8);
  switch(bVar1) {
  case 0:
    goto switchD_82de0e04_caseD_0;
  case 1:
  case 2:
  case 3:
  case 4:
    param_3 = param_3 + 4;
    goto LAB_82de0de4;
  case 5:
    param_3 = param_3 + param_3[1] + 2;
    goto LAB_82de0de4;
  case 6:
    param_3 = param_3 + (unsigned int)param_3[1] * 0x100 + (unsigned int)param_3[2] + 3;
    goto LAB_82de0de4;
  case 7:
    param_3 = param_3 + ((unsigned int)param_3[1] * 0x100 + (unsigned int)param_3[2]) * 0x100 + (unsigned int)param_3[3] + 4
    ;
    goto LAB_82de0de4;
  case 8:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
    goto switchD_82de0e04_caseD_8;
  case 9:
    pbVar3 = param_3 + 1;
    if (param_2 != (int *)&uStack_260) {
      uStack_260 = *(unsigned __int64 *)param_2;
      param_2 = (int *)&uStack_260;
    }
    param_3 = param_3 + 2;
    uStack_260 = CONCAT44((((unsigned __int64)(uStack_260) >> 0) & 0xFFFFFFFF) + (unsigned int)*pbVar3,(((unsigned __int64)(uStack_260) >> 32) & 0xFFFFFFFF));
    goto LAB_82de0de4;
  case 10:
    pbVar3 = param_3 + 1;
    pbVar4 = param_3 + 2;
    if (param_2 != (int *)&uStack_260) {
      uStack_260 = *(unsigned __int64 *)param_2;
      param_2 = (int *)&uStack_260;
    }
    param_3 = param_3 + 3;
    uStack_260 = CONCAT44((unsigned int)*pbVar3 * 0x100 + (unsigned int)*pbVar4 + (((unsigned __int64)(uStack_260) >> 0) & 0xFFFFFFFF),(((unsigned __int64)(uStack_260) >> 32) & 0xFFFFFFFF))
    ;
    goto LAB_82de0de4;
  case 0xb:
    if (param_2 != (int *)&uStack_260) {
      uStack_260 = *(unsigned __int64 *)param_2;
      param_2 = (int *)&uStack_260;
    }
    uStack_260 = CONCAT44((((unsigned int)param_3[1] * 0x100 + (unsigned int)param_3[2]) * 0x100 + (unsigned int)param_3[3])
                          * 0x100 + (unsigned int)param_3[4],(((unsigned __int64)(uStack_260) >> 32) & 0xFFFFFFFF));
    param_3 = param_3 + 5;
    goto LAB_82de0de4;
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
    bVar1 = param_3[3];
    fn_82DE0DB8(param_1,param_2,param_3 + 4);
    param_3 = param_3 + 4 + bVar1;
    goto LAB_82de0de4;
  case 0x20:
  case 0x21:
  case 0x22:
    bVar1 = param_3[2];
    fn_82DE0DB8(param_1,param_2,param_3 + 3);
    param_3 = param_3 + 3 + bVar1;
    goto LAB_82de0de4;
  case 0x23:
  case 0x24:
  case 0x25:
    bVar1 = param_3[5];
    bVar2 = param_3[6];
    fn_82DE0DB8(param_1,param_2,param_3 + (unsigned int)param_3[3] * 0x100 + (unsigned int)param_3[4] + 7);
    param_3 = param_3 + (unsigned int)bVar1 * 0x100 + (unsigned int)bVar2 + 7;
    goto LAB_82de0de4;
  case 0x26:
  case 0x27:
  case 0x28:
    param_3 = param_3 + 3;
    goto LAB_82de0de4;
  case 0x29:
  case 0x2a:
  case 0x2b:
    param_3 = param_3 + 7;
    goto LAB_82de0de4;
  default:
    uVar11 = bVar1 - 0x30;
    break;
  case 0x50:
    uVar11 = (unsigned int)param_3[1];
    break;
  case 0x51:
    uVar11 = (unsigned int)param_3[1] * 0x100 + (unsigned int)param_3[2];
    break;
  case 0x52:
    uVar11 = ((unsigned int)param_3[1] * 0x100 + (unsigned int)param_3[2]) * 0x100 + (unsigned int)param_3[3];
    break;
  case 0x53:
    uVar11 = (unsigned int)param_3[3] * 0x100 + (unsigned int)param_3[4] +
             ((unsigned int)param_3[1] * 0x100 + (unsigned int)param_3[2]) * 0x10000;
    break;
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
    pbVar3 = param_3 + 1;
    param_3 = param_3 + 2;
    *(unsigned int *)(auStack_258 + (int)((uVar10 - 0x60 & 0xffffffff) << 2) + -4) = (unsigned int)*pbVar3;
    goto LAB_82de11d8;
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
    pbVar3 = param_3 + 1;
    pbVar4 = param_3 + 2;
    param_3 = param_3 + 3;
    *(unsigned int *)(auStack_258 + (int)((uVar10 - 100 & 0xffffffff) << 2) + -4) =
         (unsigned int)*pbVar3 * 0x100 + (unsigned int)*pbVar4;
    goto LAB_82de11d8;
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
    pbVar3 = param_3 + 1;
    pbVar4 = param_3 + 2;
    pbVar5 = param_3 + 3;
    pbVar6 = param_3 + 4;
    param_3 = param_3 + 5;
    *(unsigned int *)(auStack_258 + (int)((uVar10 - 0x68 & 0xffffffff) << 2) + -4) =
         (((unsigned int)*pbVar3 * 0x100 + (unsigned int)*pbVar4) * 0x100 + (unsigned int)*pbVar5) * 0x100 + (unsigned int)*pbVar6;
LAB_82de11d8:
    uVar7 = (((unsigned __int64)(uStack_260) >> 32) & 0xFFFFFFFF);
    if (param_2 != (int *)&uStack_260) {
      uStack_260 = *(unsigned __int64 *)param_2;
      param_2 = (int *)&uStack_260;
    }
    uStack_260 = CONCAT44((((unsigned __int64)(uStack_260) >> 0) & 0xFFFFFFFF),uVar7);
    goto LAB_82de0de4;
  }
  iVar8 = *param_2;
  param_1 = (int *)*param_1;
  iVar9 = fn_82CE5410();
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(unsigned int *)(iVar9 + 0x10),param_1,4);
  }
  iVar9 = param_1[1];
  param_1[1] = iVar9 + 1;
  *(unsigned int *)(iVar9 * 4 + *param_1) = iVar8 + uVar11;
switchD_82de0e04_caseD_0:
  return;
}

