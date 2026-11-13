#define _uStack00000010 ((*(unsigned __int64*)&uStack00000010))
extern unsigned int *auStack_40;
extern int fn_82F6DF48();
extern int fn_82F717E8();
extern int fn_82F71860();
extern int fn_82F718E8();
extern int fn_82F791B8();
extern int fn_82F79310();
extern int fn_82F79400();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;
extern unsigned int lbl_831BB918;
extern unsigned int uStack00000010;


double fn_82F65148(double param_1,unsigned __int64 param_2,__int64 param_3)

{
  unsigned __int64 uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  int iVar4;
  double dVar5;
  double extraout_f1;
  unsigned short uStack00000010;
  unsigned int auStack_40 [2];
  __int64 lStack_38;
  
  _uStack00000010 = param_1;
  uVar1 = fn_82F79400(0xf8,0xffffffffc007feff);
  iVar4 = (int)param_3;
  if ((uStack00000010 & 0x7ff0) == 0x7ff0) {
    iVar3 = fn_82F71860(param_1);
    if (0 < iVar3) {
      if (iVar3 < 3) goto LAB_82f652fc;
      if (iVar3 == 3) {
        lStack_38 = (__int64)iVar4;
        dVar5 = (double)fn_82F791B8(param_1,(double)lStack_38,0x19);
        return dVar5;
      }
    }
    uVar1 = 8;
    dVar5 = param_1 + lbl_82005758;
    goto LAB_82f651f4;
  }
  if (param_1 == lbl_82005710) goto LAB_82f652fc;
  dVar5 = lbl_82005710;
  uVar2 = fn_82F718E8(param_1,uVar1,auStack_40);
  if (iVar4 < 0) {
    if ((int)auStack_40[0] < -0x80000000 - iVar4) {
LAB_82f652b8:
      dVar5 = extraout_f1 * dVar5;
      uVar1 = 0x12;
      goto LAB_82f651f4;
    }
LAB_82f65258:
    param_3 = (unsigned __int64)auStack_40[0] + param_3;
    iVar3 = (int)param_3;
    if (0xa00 < iVar3) goto LAB_82f65264;
    if (iVar3 < 0x401) {
      if (-0x9fe < iVar3) {
        if (-0x3fe < iVar3) {
          param_1 = (double)fn_82F717E8();
LAB_82f652fc:
          fn_82F79400(uVar1,0xffffffffc007feff);
          return param_1;
        }
        dVar5 = (double)fn_82F717E8(uVar2,param_3 + 0x600);
        uVar1 = 0x12;
        goto LAB_82f651f4;
      }
      goto LAB_82f652b8;
    }
    dVar5 = (double)fn_82F717E8(uVar2,param_3 + -0x600);
  }
  else {
    if ((int)auStack_40[0] <= 0x7fffffff - iVar4) goto LAB_82f65258;
LAB_82f65264:
    dVar5 = (double)fn_82F6DF48(lbl_831BB918,extraout_f1);
  }
  uVar1 = 0x11;
LAB_82f651f4:
  lStack_38 = (__int64)iVar4;
  dVar5 = (double)fn_82F79310(param_1,(double)(__int64)iVar4,dVar5,uVar1,0x19);
  return dVar5;
}

