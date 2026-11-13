extern unsigned int *auStack_70;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_a8;
extern unsigned int *auStack_ac;
extern unsigned int *auStack_b0;
extern unsigned int fStack_4c;
extern unsigned int fStack_b8;
extern int fn_8275E9C0();
extern int fn_8275EB28();
extern int fn_8275EB90();
extern int fn_8275FE18();
extern int fn_8275FFC0();
extern unsigned int iStack_20;
extern unsigned int iStack_60;
extern unsigned int iStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_b4;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


unsigned __int64 fn_82761448(int *param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned char *pbVar4;
  __int64 lVar5;
  unsigned char bStack_c1;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  float fStack_b8;
  unsigned int uStack_b4;
  unsigned char auStack_b0 [4];
  unsigned char auStack_ac [4];
  unsigned char auStack_a8 [8];
  unsigned char auStack_a0 [24];
  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned char auStack_70 [4];
  unsigned int uStack_6c;
  unsigned int uStack_68;
  int iStack_64;
  int iStack_60;
  float fStack_4c;
  __int64 lStack_48;
  __int64 lStack_40;
  unsigned char abStack_30 [16];
  int iStack_20;
  
  uStack_c0 = 0;
  uStack_bc = 0;
  (**(int (***)())(*param_1 + 0x44))(param_1,&uStack_c0,&uStack_bc);
  uVar3 = 0x1505;
  lVar5 = 4;
  iVar2 = 4;
  do {
    uVar3 = (unsigned __int64)(&bStack_c1)[iVar2] ^ uVar3 * 0x21;
    lVar5 = lVar5 + -1;
    iVar2 = iVar2 + -1;
  } while (lVar5 != 0);
  lVar5 = 4;
  iVar2 = 4;
  do {
    uVar3 = (unsigned __int64)*(unsigned char *)((int)&uStack_c0 + iVar2 + 3) ^ uVar3 * 0x21;
    lVar5 = lVar5 + -1;
    iVar2 = iVar2 + -1;
  } while (lVar5 != 0);
  fn_8275EB28(auStack_a0,param_1);
  while (uVar1 = uStack_88, uStack_88 < uStack_84) {
    fn_8275FFC0(auStack_a0,auStack_b0,auStack_ac,auStack_a8);
    lVar5 = 0xc;
    iVar2 = 0xc;
    do {
      uVar3 = (unsigned __int64)(unsigned char)auStack_b0[iVar2 + -1] ^ uVar3 * 0x21;
      lVar5 = lVar5 + -1;
      iVar2 = iVar2 + -1;
    } while (lVar5 != 0);
    fn_8275FE18(auStack_70,auStack_a0);
    lStack_48 = (__int64)iStack_64;
    lVar5 = 8;
    lStack_40 = (__int64)iStack_60;
    fStack_b8 = (float)lStack_48 * fStack_4c;
    uStack_b4 = (float)lStack_40 * fStack_4c;
    iVar2 = 8;
    do {
      uVar3 = (unsigned __int64)*(unsigned char *)((int)&uStack_bc + iVar2 + 3) ^ uVar3 * 0x21;
      lVar5 = lVar5 + -1;
      iVar2 = iVar2 + -1;
    } while (lVar5 != 0);
    while (uStack_6c < uStack_68) {
      fn_8275E9C0(auStack_70,abStack_30);
      iVar2 = iStack_20 * 4;
      if (iVar2 != 0) {
        pbVar4 = abStack_30 + iVar2;
        do {
          pbVar4 = pbVar4 + -1;
          uVar3 = uVar3 * 0x21 ^ (unsigned __int64)*pbVar4;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    uStack_88 = uVar1 + 1;
    fn_8275EB90(auStack_a0);
  }
  return uVar3;
}

