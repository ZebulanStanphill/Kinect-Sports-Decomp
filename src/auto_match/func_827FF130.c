extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int fStack_b8;
extern unsigned int fStack_bc;
extern int fn_8280D8B0();
extern int fn_8280D8E0();
extern int fn_8280DB50();
extern int fn_8280DD50();
extern int fn_8280E318();
extern int fn_8280E418();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_b4;
extern unsigned int uStack_c0;


void fn_827FF130(unsigned char *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4,
                  unsigned __int64 param_5,char param_6,unsigned char *param_7)

{
  unsigned char *puVar1;
  int iVar2;
  __int64 lVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  unsigned int uStack_c0;
  float fStack_bc;
  float fStack_b8;
  unsigned int uStack_b4;
  unsigned char auStack_b0 [16];
  unsigned char auStack_a0 [16];
  unsigned char auStack_90 [16];
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [96];
  
  dVar5 = (double)fn_8280E318(param_3);
  dVar6 = (double)lbl_821AAD20;
  if (dVar5 <= dVar6) {
    fn_8280DD50(auStack_90);
  }
  else {
    fn_8280E418(param_3,auStack_a0);
    fn_8280D8B0(auStack_a0,auStack_90);
  }
  iVar2 = (int)param_5;
  if (iVar2 == 0) {
    fn_8280D8E0(param_2,auStack_90,param_1);
    fn_8280D8B0(param_7,auStack_80);
    fn_8280D8E0(param_1,auStack_80,param_1);
    puVar1 = param_1;
  }
  else {
    uStack_c0 = *param_4;
    uStack_b4 = param_4[3];
    fStack_bc = (float)param_4[1];
    fStack_b8 = (float)param_4[2];
    if (param_6 != '\0') {
      fStack_bc = -fStack_bc;
      fStack_b8 = -fStack_b8;
    }
    dVar5 = (double)fn_8280E318(&uStack_c0);
    if (dVar5 <= dVar6) {
      fn_8280DD50(&uStack_c0);
    }
    else {
      fn_8280E418(&uStack_c0,&uStack_c0);
    }
    if (iVar2 < 0) {
      fn_8280D8B0(&uStack_c0,&uStack_c0);
    }
    fn_8280DB50(param_7,auStack_60);
    fn_8280D8B0(param_7,auStack_70);
    iVar4 = 0;
    lVar3 = (param_5 ^ (__int64)(iVar2 >> 0x1f)) - (__int64)(iVar2 >> 0x1f);
    if (0 < lVar3) {
      do {
        fn_8280D8E0(&uStack_c0,param_7,param_7);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)lVar3);
    }
    fn_8280D8B0(param_7,auStack_80);
    fn_8280D8E0(&uStack_c0,auStack_90,auStack_b0);
    fn_8280D8E0(auStack_b0,auStack_70,auStack_b0);
    fn_8280D8E0(auStack_60,auStack_b0,auStack_b0);
    fn_8280D8E0(param_2,auStack_80,auStack_a0);
    fn_8280D8E0(param_7,auStack_a0,auStack_a0);
    param_7 = auStack_a0;
    puVar1 = auStack_b0;
  }
  fn_8280D8E0(param_7,puVar1,param_1);
  dVar5 = (double)fn_8280E318(param_1);
  if (dVar5 <= dVar6) {
    fn_8280DD50(param_1);
  }
  else {
    fn_8280E418(param_1,param_1);
  }
  return;
}

