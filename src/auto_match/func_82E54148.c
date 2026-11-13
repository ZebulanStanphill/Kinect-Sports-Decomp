typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
extern unsigned int *auStack_110;
extern unsigned int *auStack_a0;
extern int fn_82E2F348();
extern int fn_82E46BE8();
extern int fn_82E50C30();
extern int fn_82E51480();
extern int fn_82E51BF8();
extern int fn_82E52B50();
extern int fn_82E53BF8();
extern int fn_82E59440();
extern int fn_82E59550();
extern int fn_82E59F28();
extern int fn_82E59F50();
extern int fn_82E59F78();
extern int fn_82E59FA0();
extern int fn_82E59FC8();
extern int fn_82E5A018();
extern int fn_82E5AEC8();
extern int fn_82E5C778();
extern int fn_82E5C7D8();
extern int fn_82E62670();
extern int fn_82E63810();
extern int fn_82EE0B00();
extern int fn_82EE17C8();
extern int fn_82F6ADA8();
extern unsigned int iStack_104;
extern unsigned int iStack_108;
extern unsigned int iStack_10c;
extern unsigned int iStack_cc;
extern unsigned int iStack_d0;
extern unsigned int iStack_fc;
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_820F8EB8;
extern unsigned int lbl_820F8EC8;
extern unsigned int lbl_821547F8;
extern unsigned int lbl_82154818;
extern unsigned int lbl_82154830;
extern unsigned int uStack_100;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_c0;
extern unsigned int uStack_c8;
extern unsigned int uStack_e4;
extern unsigned int uStack_f8;


unsigned int *
fn_82E54148(unsigned int *param_1,int *param_2,unsigned __int64 param_3,int param_4,int *param_5)

{
  unsigned char bVar1;
  unsigned char bVar2;
  bool bVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  unsigned char *pbVar7;
  unsigned char *pbVar8;
  unsigned short *puVar9;
  unsigned short uVar10;
  unsigned short auStack_110 [2];
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  unsigned int uStack_100;
  int iStack_fc;
  unsigned int uStack_f8;
  int *piStack_f4;
  int *piStack_f0;
  int *piStack_ec;
  int *piStack_e8;
  unsigned int uStack_e4;
  int aiStack_e0 [4];
  struct { int first; int second; } stack_pair_d0;

  unsigned int uStack_c8;
  unsigned char *puStack_c4;
  unsigned int uStack_c0;
  int *piStack_bc;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned int uStack_a8;
  unsigned int uStack_a4;
  unsigned char auStack_a0 [80];
  
  fn_82E52B50(param_1,0);
  param_1[0x15] = 0;
  *param_1 = &lbl_82154830;
  param_1[0x13] = &lbl_82154818;
  param_1[0x14] = &lbl_821547F8;
  puVar9 = (unsigned short *)(param_1 + 0x17);
  param_1[0x16] = 0;
  *(unsigned short *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  fn_82E50C30(param_1 + 0x19);
  fn_82E5AEC8(param_1 + 0x28);
  if (*param_5 < 0) {
    return param_1;
  }
  fn_82E51480(param_1);
  *param_5 = 0;
  if (param_2 == (int *)0x0) {
    *param_5 = -0x7ff8ffa9;
    return param_1;
  }
  piStack_ec = (int *)0x0;
  piStack_e8 = (int *)0x0;
  piStack_f4 = (int *)0x0;
  piStack_f0 = (int *)0x0;
  iVar6 = fn_82E5C7D8(param_2,puVar9);
  *param_5 = iVar6;
  if (iVar6 < 0) goto LAB_82e54684;
  if ((param_3 & 0xffffffff) != 0) {
    auStack_110[0] = 0;
    iVar6 = fn_82E5A018(param_3,auStack_110);
    *param_5 = iVar6;
    if ((iVar6 < 0) || (auStack_110[0] != *puVar9)) {
      *param_5 = -0x7ff8ffa9;
      goto LAB_82e54684;
    }
  }
  uStack_e4 = 0;
  iVar6 = fn_82E62670(param_2,&uStack_e4);
  *param_5 = iVar6;
  if (iVar6 < 0) goto LAB_82e54684;
  iVar6 = fn_82E63810(param_1,0xffffffff8214c720,uStack_e4);
  *param_5 = iVar6;
  if (iVar6 < 0) goto LAB_82e54684;
  iStack_10c = 0;
  iStack_108 = 0;
  iStack_fc = 0;
  iStack_104 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  if ((param_3 & 0xffffffff) == 0) {
    iVar6 = (**(int (***)())(*param_2 + 0x10))(param_2,&piStack_ec);
    *param_5 = iVar6;
    if (iVar6 < 0) goto LAB_82e54684;
    iVar6 = fn_82E59440(piStack_ec,0xffffffff820ed018,0xffffffff82154c58,&piStack_e8);
    *param_5 = iVar6;
    if (iVar6 < 0) goto LAB_82e54684;
    iVar6 = fn_82E59550(piStack_e8,*puVar9,1,&iStack_108);
    *param_5 = iVar6;
    if (iVar6 < 0) goto LAB_82e54684;
    bVar3 = false;
    bVar4 = false;
    uStack_b0 = lbl_8202E618;
    uStack_ac = lbl_8202E61C;
    uStack_a8 = lbl_8202E620;
    uStack_a4 = lbl_8202E624;
    iVar6 = fn_82E5C778(param_2,&uStack_b0);
    *param_5 = iVar6;
    if (iVar6 < 0) goto LAB_82e54684;
    pbVar7 = (unsigned char *)&uStack_b0;
    pbVar8 = &lbl_820F8EB8;
    do {
      bVar1 = *pbVar8;
      bVar2 = *pbVar7;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar8 = pbVar8 + 1;
      pbVar7 = pbVar7 + 1;
    } while (pbVar8 != &lbl_820F8EC8);
    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
      iVar6 = (**(int (***)())*piStack_e8)(piStack_e8,0xffffffff82154c18,&piStack_f4);
      *param_5 = iVar6;
      if (iVar6 < 0) goto LAB_82e54684;
      iVar6 = (**(int (***)())(*piStack_f4 + 0x10))(piStack_f4,0xffffffff820ed078,0,&piStack_f0);
      piVar5 = piStack_f0;
      *param_5 = iVar6;
      if (-1 < iVar6) {
        iVar6 = fn_82EE0B00(piStack_f0,auStack_110);
        *param_5 = iVar6;
        if (((-1 < iVar6) && (auStack_110[0] != 0)) && (uVar10 = 0, auStack_110[0] != 0)) {
          do {
            puStack_c4 = auStack_a0;
            uStack_c8 = CONCAT22(0x30,(((unsigned __int64)(uStack_c8) >> 16) & 0xFFFF));
            piStack_bc = aiStack_e0;
            uStack_c0 = 4;
            iVar6 = fn_82EE17C8(piVar5,uVar10,&stack_pair_d0.first);
            *param_5 = iVar6;
            if (((-1 < iVar6) && (stack_pair_d0.second == 3)) && (puStack_c4 != (unsigned char *)0x0)) {
              iVar6 = fn_82F6ADA8(puStack_c4,0xffffffff82154714);
              if (iVar6 == 0) {
                bVar3 = true;
                iStack_10c = *piStack_bc;
              }
              else {
                iVar6 = fn_82F6ADA8(puStack_c4,0xffffffff82154728);
                if (iVar6 == 0) {
                  bVar4 = true;
                  iStack_104 = *piStack_bc;
                }
                if (!bVar3) goto LAB_82e54580;
              }
              if (bVar4) break;
            }
LAB_82e54580:
            uVar10 = uVar10 + 1;
          } while (uVar10 < auStack_110[0]);
        }
      }
      *param_5 = 0;
      if ((!bVar3) || (!bVar4)) goto LAB_82e545b4;
    }
    else {
LAB_82e545b4:
      iStack_10c = iStack_108;
      iStack_104 = param_4;
    }
    uStack_f8 = 0;
    uStack_100 = 0;
    iStack_fc = param_4;
  }
  else {
    iVar6 = fn_82E46BE8(param_3,&iStack_10c);
    *param_5 = iVar6;
    if (iVar6 < 0) goto LAB_82e54684;
    iVar6 = fn_82E59F28(param_3,&iStack_108);
    *param_5 = iVar6;
    if (iVar6 < 0) goto LAB_82e54684;
    iVar6 = fn_82E59FA0(param_3,&iStack_fc);
    *param_5 = iVar6;
    if (iVar6 < 0) goto LAB_82e54684;
    iVar6 = fn_82E59F50(param_3,&iStack_104);
    *param_5 = iVar6;
    if (iVar6 < 0) goto LAB_82e54684;
    iVar6 = fn_82E59FC8(param_3,&uStack_f8);
    *param_5 = iVar6;
    if (iVar6 < 0) goto LAB_82e54684;
    iVar6 = fn_82E59F78(param_3,&uStack_100);
    *param_5 = iVar6;
    if (iVar6 < 0) goto LAB_82e54684;
  }
  iVar6 = fn_82E53BF8(param_1,param_2,param_3,iStack_10c,param_1 + 0x18);
  *param_5 = iVar6;
  if (-1 < iVar6) {
    stack_pair_d0.first = iStack_108;
    stack_pair_d0.second = iStack_104;
    uStack_c8 = uStack_100;
    iVar6 = fn_82E2F348(param_1,0xffffffff8214c290,&stack_pair_d0.first,0xc);
    *param_5 = iVar6;
    if (-1 < iVar6) {
      stack_pair_d0.first = iStack_10c;
      stack_pair_d0.second = iStack_fc;
      uStack_c8 = uStack_f8;
      iVar6 = fn_82E2F348(param_1,0xffffffff8214c2a0,&stack_pair_d0.first,0xc);
      *param_5 = iVar6;
      if ((-1 < iVar6) && ((param_3 & 0xffffffff) != 0)) {
        iVar6 = fn_82E51BF8(param_1,param_3);
        *param_5 = iVar6;
      }
    }
  }
LAB_82e54684:
  if (piStack_f4 != (int *)0x0) {
    (**(int (***)())(*piStack_f4 + 8))();
    piStack_f4 = (int *)0x0;
  }
  if (piStack_f0 != (int *)0x0) {
    (**(int (***)())(*piStack_f0 + 8))();
    piStack_f0 = (int *)0x0;
  }
  if (piStack_ec != (int *)0x0) {
    (**(int (***)())(*piStack_ec + 8))();
    piStack_ec = (int *)0x0;
  }
  if (piStack_e8 != (int *)0x0) {
    (**(int (***)())(*piStack_e8 + 8))();
  }
  return param_1;
}

