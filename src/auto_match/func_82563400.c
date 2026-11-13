#define NAN(x) ((x) != (x))
extern int fn_82563688();
extern int fn_827F62A8();
extern int fn_827F6310();
extern int fn_827F6318();
extern int fn_827F6428();
extern int fn_827F6430();
extern unsigned int lbl_8218E68C;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_82563400(unsigned __int64 param_1,unsigned __int64 param_2,unsigned short *param_3,unsigned __int64 param_4,
                  int (**param_5)(),unsigned __int64 param_6)

{
  unsigned short uVar1;
  unsigned short *puVar2;
  unsigned int uVar3;
  double dVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  double dVar7;
  double dVar8;
  
  if ((param_4 & 0xffffffff) != 0) {
    uVar5 = fn_827F6318();
    uVar6 = fn_827F6428(param_1);
    dVar7 = (double)fn_827F6310(param_1);
    dVar4 = (double)ltcg_pool_0_0f;
    dVar8 = (double)lbl_821CA460;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((dVar7 < dVar4) << 2) | (unsigned int)(NAN(dVar7) || NAN(dVar4)) << 2)) <
        0.0) {
      dVar8 = dVar4;
    }
    fn_827F62A8(dVar8,param_1);
    fn_827F6430(uVar5,param_1);
    puVar2 = param_3 + 6;
    uVar1 = *puVar2;
    while (uVar1 != 0) {
      if (*puVar2 < 0x32) {
        uVar3 = *(unsigned int *)(&lbl_8218E68C + (unsigned int)*puVar2 * 0xc);
      }
      else {
        uVar3 = 0;
      }
      if ((((param_3[7] | uVar3) & 1) != 0) && (param_3[1] == 0)) {
        fn_82563688(param_1,param_2,param_3,param_4,param_6);
      }
      if (param_5 != (int (**)())0x0) {
        fn_827F6318(param_1);
        (*param_5)(param_3,param_2);
      }
      param_3 = (unsigned short *)((unsigned int)*param_3 + (int)param_3);
      puVar2 = param_3 + 6;
      uVar1 = param_3[6];
    }
    fn_827F62A8(uVar5,param_1);
    fn_827F6430(uVar6,param_1);
  }
  return;
}

