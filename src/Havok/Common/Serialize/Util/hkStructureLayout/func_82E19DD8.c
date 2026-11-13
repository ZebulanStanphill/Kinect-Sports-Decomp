extern unsigned int *auStack_220;
extern unsigned int *auStack_230;
extern int fn_82CEB1A8();
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern int fn_82CFD5A8();
extern int fn_82CFD5C0();
extern int fn_82CFD5F0();
extern unsigned int *lbl_8323B464;


__int64 fn_82E19DD8(int param_1,unsigned char *param_2,unsigned int param_3)

{
  unsigned char bVar1;
  unsigned __int64 in_r0;
  unsigned int uVar2;
  int iVar3;
  __int64 lVar4;
  unsigned char auStack_230 [16];
  unsigned char auStack_220 [504];
  
  lVar4 = 0;
  switch(param_3) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x18:
  case 0x1f:
  case 0x20:
    lVar4 = fn_82CFD5F0(param_1);
    break;
  case 0x13:
    lVar4 = fn_82E19DD8(param_1,param_2,*(unsigned char *)(param_1 + 0xd));
    break;
  case 0x14:
  case 0x15:
  case 0x1d:
  case 0x1e:
  case 0x21:
    bVar1 = *param_2;
    uVar2 = (unsigned int)bVar1;
    iVar3 = fn_82CFD5C0(param_1);
    if (iVar3 != 0) {
      iVar3 = fn_82CFD5C0(param_1);
      return (__int64)iVar3 * (__int64)(int)(unsigned int)bVar1;
    }
    goto LAB_82e19ed0;
  case 0x16:
    lVar4 = 4;
  case 0x1a:
    lVar4 = (unsigned __int64)*param_2 + lVar4 + 4;
    break;
  case 0x17:
    break;
  case 0x19:
    fn_82CFD5A8(param_1);
    uVar2 = fn_82CEB1A8();
    iVar3 = fn_82CFD5C0(param_1);
    if (iVar3 != 0) {
      iVar3 = fn_82CFD5C0(param_1);
      return (__int64)iVar3 * (__int64)(int)uVar2;
    }
LAB_82e19ed0:
    lVar4 = (__int64)(int)uVar2;
    break;
  case 0x1b:
    lVar4 = ((unsigned __int64)*param_2 + 2) * 2;
    break;
  case 0x1c:
    lVar4 = (unsigned __int64)*param_2 << 1;
    break;
  default:
    fn_82CEE578(auStack_230,auStack_220,0x200);
    fn_82CEDB38(auStack_230,0xffffffff8214b668);
    iVar3 = (**(int (***)())(*lbl_8323B464 + 0xc))
                      (lbl_8323B464,3,0x50a18b58,auStack_220,0xffffffff8214b648,0xc5);
    if (iVar3 != 0) {
      trapWord(0x1f,in_r0,0x16);
    }
                    /* WARNING: Subroutine does not return */
    fn_82CED958(auStack_230);
  }
  return lVar4;
}

