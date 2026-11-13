extern unsigned int *auStack_230;
extern unsigned int *auStack_23f;
extern unsigned int *auStack_250;
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CEB1A8();
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern int fn_82CFD5A8();
extern int fn_82CFD5F0();
extern int fn_82CFE180();
extern int fn_82E17EE8();
extern int fn_82F691F0();
extern unsigned int *lbl_8323B464;
extern unsigned int uStack_240;
extern unsigned int uStack_254;
extern unsigned int uStack_258;
extern unsigned int uStack_25c;
extern unsigned int uStack_260;


void fn_82E18418(int param_1,unsigned __int64 param_2,int param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 in_r0;
  __int64 lVar2;
  int iVar3;
  int iVar4;
  unsigned int *puVar5;
  __int64 lVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  unsigned int uStack_260;
  unsigned int uStack_25c;
  unsigned int uStack_258;
  unsigned int uStack_254;
  unsigned char auStack_250 [16];
  unsigned char uStack_240;
  unsigned char auStack_23f [15];
  unsigned char auStack_230 [560];
  
  uVar7 = (unsigned int)*(unsigned char *)(param_3 + 0xc);
  uVar8 = 0;
  if (uVar7 - 1 < 0x20) {
    in_r0 = (unsigned __int64)*(unsigned int *)((uVar7 - 1) * 4 + -0x7d1e7ba0);
    switch(uVar7) {
    default:
      lVar2 = fn_82CFD5F0(param_3);
      break;
    case 0x13:
    case 0x1d:
      goto switchD_82e1845c_caseD_13;
    case 0x14:
    case 0x15:
    case 0x1e:
      iVar4 = fn_82E17EE8(param_3);
      lVar2 = (__int64)iVar4 * (__int64)(int)(unsigned int)*(unsigned char *)(param_1 + 0xc);
      break;
    case 0x16:
    case 0x17:
    case 0x1a:
    case 0x1b:
      if (uVar7 == 0x1b) {
        uVar8 = (unsigned __int64)*(unsigned char *)(param_1 + 0xc);
      }
      lVar2 = *(unsigned char *)(param_1 + 0xc) + uVar8 + 4;
      if (uVar7 == 0x16) {
        uStack_240 = 0;
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(auStack_23f,0,0xb);
      }
      break;
    case 0x19:
      fn_82CFD5A8(param_3);
      iVar4 = fn_82CEB1A8();
      iVar3 = fn_82E17EE8(param_3);
      lVar2 = (__int64)iVar4 * (__int64)iVar3;
      break;
    case 0x1c:
      iVar4 = fn_82E17EE8(param_3);
      lVar2 = ((__int64)iVar4 * (__int64)(int)(unsigned int)*(unsigned char *)(param_1 + 0xc) & 0x7fffffffU) << 1;
    }
    uStack_260 = 0;
    uStack_25c = 0;
    uStack_258 = 0x80000000;
    puVar5 = (unsigned int *)fn_82CE5410();
    uVar7 = (unsigned int)lVar2;
    uStack_258 = uVar7 | 0x80000000;
    uStack_260 = *puVar5;
    *puVar5 = (uVar7 + 0x7f & 0xffffff80) + uStack_260;
    uStack_254 = uStack_260;
    iVar4 = fn_82CE5410();
    if ((int)(uStack_258 & 0x3fffffff) < (int)uVar7) {
      lVar6 = ((unsigned __int64)uStack_258 & 0x3fffffff) << 1;
      if ((int)lVar6 <= (int)uVar7) {
        lVar6 = lVar2;
      }
      fn_82CE6310(*(unsigned int *)(iVar4 + 0x10),&uStack_260,lVar6);
    }
    uVar8 = lVar2 - (unsigned __int64)uStack_25c;
    if (0 < (__int64)uVar8) {
      lVar6 = (unsigned __int64)uStack_260 + (unsigned __int64)uStack_25c + -1;
      uVar1 = uVar8 & 0xffffffff;
      while (uVar1 != 0) {
        lVar6 = lVar6 + 1;
        *(unsigned char *)lVar6 = 0;
        uVar8 = uVar8 - 1;
        uVar1 = uVar8;
      }
    }
    uStack_25c = uVar7;
    fn_82CFE180(param_2,uStack_260,lVar2);
    uVar7 = uStack_254;
    uStack_25c = -(unsigned int)(uStack_260 != uStack_254) & uStack_25c;
    puVar5 = (unsigned int *)fn_82CE5410();
    *puVar5 = uVar7;
    iVar4 = fn_82CE5410();
    uStack_25c = 0;
    if ((uStack_258 & 0x80000000) == 0) {
      (**(int (***)())(**(int **)(iVar4 + 0x10) + 0x10))
                (*(int **)(iVar4 + 0x10),uStack_260,uStack_258 & 0x3fffffff,1);
    }
    return;
  }
switchD_82e1845c_caseD_13:
  fn_82CEE578(auStack_250,auStack_230,0x200);
  fn_82CEDB38(auStack_250,0xffffffff8214b584);
  iVar4 = (**(int (***)())(*lbl_8323B464 + 0xc))
                    (lbl_8323B464,3,0x5ef4e5a4,auStack_230,0xffffffff8214b528,0xaa);
  if (iVar4 != 0) {
    trapWord(0x1f,in_r0,0x16);
  }
                    /* WARNING: Subroutine does not return */
  fn_82CED958(auStack_250);
}

