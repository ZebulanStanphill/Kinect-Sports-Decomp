extern unsigned int *auStack_160;
extern unsigned int *auStack_180;
extern unsigned int *auStack_190;
extern unsigned int *auStack_1a0;
extern unsigned int *auStack_1b0;
extern unsigned int *auStack_1e0;
extern int fn_82230300();
extern int fn_8223DFF0();
extern int fn_8245A408();
extern int fn_8251C390();
extern int fn_8265C9E0();
extern int fn_829E53B0();
extern int fn_82D7E470();
extern int fn_82F6A4B0();
extern int fn_830B3440();
extern int fn_830B35A0();
extern int fn_830B3608();
extern int fn_830B36C8();
extern int fn_830B3728();
extern int fn_830B3770();
extern int fn_830B3B68();
extern int fn_830B3F50();
extern int fn_830B41A0();
extern int fn_830B4200();
extern int fn_830B4260();
extern int fn_830B42C0();
extern int fn_830B4320();
extern int fn_830B49C0();
extern int fn_830B4B18();
extern unsigned int iStack_1c0;
extern unsigned int uStack_1bc;


unsigned __int64 fn_82E22B50(unsigned __int64 param_1,__int64 param_2,char *param_3,char param_4,
                       unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  char cVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  unsigned int ****ppppuVar6;
  char *pcVar7;
  __int64 lVar8;
  unsigned int auStack_1e0 [4];
  unsigned int ***apppuStack_1d0 [4];
  int iStack_1c0;
  unsigned int uStack_1bc;
  unsigned char auStack_1b0 [16];
  unsigned char auStack_1a0 [16];
  unsigned char auStack_190 [16];
  unsigned char auStack_180 [32];
  unsigned char auStack_160 [352];
  
  fn_8251C390(auStack_190,0xffffffff8214bf5c,0x32);
  uVar2 = fn_82F6A4B0(param_2,0x5c);
  if (((uVar2 & 0xffffffff) != 0) ||
     (uVar2 = fn_82F6A4B0(param_2,0x2f), lVar8 = param_2, (uVar2 & 0xffffffff) != 0)) {
    lVar8 = uVar2 + 1;
  }
  if (param_4 == '\0') {
    iVar5 = fn_8265C9E0(8);
    if (iVar5 != 0) {
      piVar3 = (int *)fn_830B49C0();
      goto LAB_82e22c00;
    }
  }
  else {
    uVar2 = fn_8265C9E0(0xc);
    if ((uVar2 & 0xffffffff) != 0) {
      piVar3 = (int *)fn_830B4B18(uVar2,param_5);
      goto LAB_82e22c00;
    }
  }
  piVar3 = (int *)0x0;
LAB_82e22c00:
  piVar4 = (int *)(**(int (***)())(*piVar3 + 4))(piVar3);
  (**(int (***)())(*piVar4 + 0xc))(piVar4,param_6);
  (**(int (***)())(*piVar4 + 0x14))(piVar4,param_8);
  auStack_1e0[0] = 0x20;
  iVar5 = (**(int (***)())(*piVar4 + 8))(piVar4,auStack_180,auStack_1e0);
  if (iVar5 < 0) {
    (**(int (***)())*piVar3)(piVar3,1);
    uVar2 = 0;
  }
  else {
    fn_830B35A0(auStack_160);
    fn_830B3F50(auStack_160,piVar4);
    fn_830B4260(auStack_160,0xffffffff8214bf44);
    fn_830B41A0(auStack_160,lVar8);
    fn_830B36C8(auStack_160,param_2);
    fn_830B42C0(auStack_160,param_7);
    fn_830B4320(auStack_160,auStack_180);
    fn_82230300(apppuStack_1d0,0,0);
    pcVar7 = param_3;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    fn_8223DFF0(apppuStack_1d0,param_3,pcVar7 + (-1 - (int)param_3));
    ppppuVar6 = (unsigned int ****)apppuStack_1d0[0];
    if (uStack_1bc < 0x10) {
      ppppuVar6 = apppuStack_1d0;
    }
    fn_8245A408(auStack_1a0,apppuStack_1d0,(int)ppppuVar6 + iStack_1c0,0x23);
    if (uStack_1bc < 0x10) {
      apppuStack_1d0[0] = apppuStack_1d0;
    }
    fn_830B4200(auStack_160,apppuStack_1d0[0]);
    fn_830B3728(auStack_1b0,120000,1);
    iVar5 = fn_82D7E470(auStack_1b0);
    if ((iVar5 < 0) || (iVar5 = fn_830B3B68(auStack_1b0,auStack_160,0), iVar5 < 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_82D7E470(auStack_1b0);
      uVar2 = ((uVar2 & 0xffffffff) >> 0x1f) - 1 & 1;
    }
    fn_830B3440(auStack_160);
    (**(int (***)())*piVar3)(piVar3,1);
    fn_830B3770(auStack_1b0);
    fn_82230300(apppuStack_1d0,1,0);
    fn_830B3608(auStack_160);
  }
  fn_829E53B0(auStack_190);
  return uVar2;
}

