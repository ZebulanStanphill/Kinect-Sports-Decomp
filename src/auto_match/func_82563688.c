typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8255FB38();
extern int fn_827F6318();
extern unsigned int lbl_8218E68C;
extern unsigned int lbl_8218E690;
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_82563688(unsigned __int64 param_1,unsigned __int64 param_2,unsigned short *param_3,int (**param_4)())

{
  bool bVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  int iVar4;
  unsigned int uVar5;
  double dVar6;
  
  if ((unsigned int)*param_3 == *(unsigned int *)(&lbl_8218E690 + (unsigned int)param_3[6] * 0xc)) {
    lVar3 = fn_8255FB38((double)*(float *)(param_3 + 2),param_1);
    if ((lVar3 != 0) && (param_4 != (int (**)())0x0)) {
      fn_827F6318(param_1);
      (*param_4)(param_3,param_2);
    }
    if (param_3[6] < 0x32) {
      uVar5 = *(unsigned int *)(&lbl_8218E68C + (unsigned int)param_3[6] * 0xc);
    }
    else {
      uVar5 = 0;
    }
    if ((((((param_3[7] | uVar5) & 4) != 0) &&
         (dVar6 = (double)fn_827F6318(param_1), (double)*(float *)(param_3 + 2) <= dVar6)) &&
        (dVar6 < (double)*(float *)(param_3 + 4))) && (param_4 != (int (**)())0x0)) {
      fn_827F6318(param_1);
      (*param_4)(param_3,param_2);
    }
    if ((*(float *)(param_3 + 4) == ltcg_pool_0_0f) || (iVar4 = fn_8255FB38(param_1), iVar4 == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
      if (param_4 != (int (**)())0x0) {
        fn_827F6318(param_1);
        (*param_4)(param_3,param_2);
      }
    }
    if (((int)lVar3 != 0) || (uVar2 = 0, bVar1)) {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

