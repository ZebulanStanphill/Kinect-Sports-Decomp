typedef unsigned char bool;
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define _iStack_38 ((*(unsigned __int64*)&iStack_38))
extern int fn_8223C478();
extern int fn_828E9DB8();
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


bool fn_828E5660(double param_1,unsigned __int64 param_2,unsigned __int64 param_3,__int64 param_4,
                  __int64 param_5)

{
  int iVar1;
  unsigned char uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  int *piVar7;
  double dVar8;
  int aiStack_40 [2];
  int iStack_38;
  int iStack_34;
  
  uVar3 = (unsigned int)param_5;
  param_4 = param_4 + param_5;
  if ((int)uVar3 < 0) {
    dVar8 = (double)(lbl_82002AE0 / (float)(__int64)(1 << (-uVar3 & 0x3f)));
  }
  else {
    dVar8 = (double)(__int64)(1 << (uVar3 & 0x3f));
  }
  iStack_34 = (int)(__int64)ABS((float)(dVar8 * param_1));
  uVar4 = (__int64)ABS((float)(dVar8 * param_1)) & 0xffffffff;
  _iStack_38 = CONCAT44(iStack_34,iStack_34);
  if (((double)lbl_821AAD20 <= param_1) || (uVar2 = 0, iStack_34 == 0)) {
    uVar2 = 1;
  }
  uVar6 = (unsigned __int64)(unsigned int)(1 << ((unsigned int)param_4 & 0x3f));
  uVar5 = uVar6 - 1;
  aiStack_40[0] = (int)uVar5;
  piVar7 = aiStack_40;
  if (uVar4 <= (uVar5 & 0xffffffff)) {
    piVar7 = &iStack_38;
  }
  iVar1 = *piVar7;
  if (0 < (int)(unsigned int)param_4) {
    fn_8223C478(param_2,1,0);
    fn_828E9DB8(param_2,uVar2,1);
    fn_8223C478(param_2,param_4,0);
    fn_828E9DB8(param_2,iVar1,param_4);
  }
  return uVar4 < uVar6;
}

