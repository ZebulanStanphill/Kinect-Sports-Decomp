extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_825602B8();
extern int fn_82562820();
extern int fn_827EB678();
extern unsigned int lbl_83280B98;


int fn_82531C80(unsigned __int64 param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned char auStack_f0 [16];
  unsigned char auStack_e0 [224];
  
  auStack_f0[0] = 0;
  iVar4 = 0;
  uVar3 = 0;
  puVar2 = &lbl_83280B98;
  do {
    iVar1 = fn_825602B8(uVar3);
    if ((iVar1 != 0) &&
       ((fn_82562820(*puVar2,auStack_e0), iVar4 != 0 ||
        (iVar1 = fn_827EB678(auStack_e0,param_1,param_2,auStack_f0), iVar1 != 0)))) {
      iVar4 = 1;
    }
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 1;
  } while ((uVar3 & 0xffffffff) < 2);
  return iVar4;
}

