#define true 1
extern int fn_8281D480();


unsigned __int64
fn_827EAAF0(double param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned char *param_5)

{
  unsigned char bVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  double dVar4;
  double dVar5;
  float afStack_70 [28];
  
  uVar3 = (unsigned int)*param_5;
  dVar5 = -param_1;
  uVar2 = 2;
  bVar1 = 0;
  while( true ) {
    dVar4 = (double)fn_8281D480(uVar3 * 0x10 + param_2 + 0x48,param_3);
    afStack_70[uVar3] = (float)dVar4;
    if ((dVar5 < dVar4) && (uVar2 = 1, param_1 < dVar4)) break;
    bVar1 = bVar1 + 1;
    uVar3 = (uVar3 + 1 & 0xff) % 6;
    if (5 < bVar1) {
      return uVar2;
    }
  }
  *param_5 = (unsigned char)uVar3;
  return 0;
}

