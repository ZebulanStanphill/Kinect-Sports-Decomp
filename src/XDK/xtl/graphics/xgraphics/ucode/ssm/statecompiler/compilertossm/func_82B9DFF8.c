extern unsigned int *auStack_60;
extern int fn_82AB15D0();
extern int fn_82AB6EC0();
extern int fn_82B6E130();
extern int fn_82B9A4B0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_820DA2D0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8316E4EC;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned __int64
fn_82B9DFF8(unsigned __int64 param_1,unsigned __int64 param_2,float *param_3,int (**param_4)(),unsigned __int64 param_5)

{
  float fVar1;
  int iVar3;
  unsigned __int64 uVar2;
  double dVar4;
  double dVar5;
  unsigned char auStack_60 [96];
  
  if ((param_1 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d2ff0,0xffffffff820ddb08,0xed8);
  }
  iVar3 = fn_82AB6EC0(param_1,0xa5);
  if (iVar3 == 3) {
    dVar4 = (double)fn_82B6E130(param_1,0xa6);
    dVar5 = (double)fn_82B6E130(param_1,0xa7);
    if ((float)(dVar5 - dVar4) == lbl_821AAD20) {
      *param_3 = 3.4028235e+38;
      goto LAB_82b9e0d4;
    }
    fVar1 = lbl_82002AE0 / (float)(dVar5 - dVar4);
  }
  else {
    dVar4 = (double)fn_82B6E130(param_1,0xa8);
    fVar1 = lbl_82002AE0 / (float)((double)lbl_820DA2D0 / dVar4);
  }
  *param_3 = fVar1;
LAB_82b9e0d4:
  uVar2 = fn_82AB6EC0(param_1,0xaa);
  if ((uVar2 & 0xffffffff) != 1) {
    uVar2 = fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820ddd10,0xffffffff820ddb08,0xef3);
  }
  if ((param_4 != (int (**)())0x0) && ((param_5 & 0xffffffff) != 0)) {
    fn_82B9A4B0((double)*param_3,uVar2,auStack_60);
    (*param_4)(param_5,0xffffffff820ddc50,lbl_8316E4EC,0x1b,auStack_60);
  }
  return 1;
}

