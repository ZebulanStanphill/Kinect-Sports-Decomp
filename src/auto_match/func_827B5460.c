extern int fn_82F68918();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005344;
extern unsigned int uStack_51;


void fn_827B5460(unsigned __int64 param_1,double param_2,double param_3)

{
  int iVar1;
  unsigned int uVar2;
  double dVar3;
  double extraout_f1;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  unsigned char uStack_51;
  
  iVar1 = fn_82F6A548();
  uVar2 = 0;
  dVar3 = (double)(lbl_82002AE0 /
                  (float)((double)(float)(param_2 + param_3) * (double)lbl_82005344 + extraout_f1));
  dVar7 = (double)(float)(dVar3 * extraout_f1);
  dVar6 = (double)(float)(dVar3 * param_2);
  dVar3 = (double)(float)(dVar3 * param_3);
  do {
    dVar5 = (double)uVar2;
    dVar4 = (double)fn_82F68918((double)(float)(dVar5 * dVar7));
    uStack_51 = (unsigned char)(__int64)dVar4;
    *(unsigned char *)(uVar2 + iVar1) = uStack_51;
    dVar4 = (double)fn_82F68918((double)(float)(dVar5 * dVar6));
    uStack_51 = (unsigned char)(__int64)dVar4;
    *(unsigned char *)(iVar1 + 0x100 + uVar2) = uStack_51;
    dVar4 = (double)fn_82F68918((double)(float)(dVar5 * dVar3));
    uStack_51 = (unsigned char)(__int64)dVar4;
    *(unsigned char *)(iVar1 + 0x200 + uVar2) = uStack_51;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x100);
  fn_82F6A594(iVar1);
  return;
}

