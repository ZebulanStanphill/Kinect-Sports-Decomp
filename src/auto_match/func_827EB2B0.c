typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8281D480();


char fn_827EB2B0(double param_1,__int64 param_2,unsigned char *param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned char *param_6)

{
  bool bVar1;
  unsigned char bVar2;
  char cVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  double dVar6;
  
  uVar5 = -(unsigned __int64)((unsigned __int64)*param_6 < 6) & (unsigned __int64)*param_6;
  bVar1 = true;
  cVar3 = '\x01';
  bVar2 = 0;
  uVar4 = (unsigned __int64)(unsigned int)(0x80 >> ((unsigned int)uVar5 & 0x3f)) & 0xff;
  do {
    if ((uVar4 & *param_3) != 0) {
      dVar6 = (double)fn_8281D480(uVar5 * 0x10 + param_2 + 0x48,param_4);
      if (param_1 < dVar6) {
        *param_6 = (unsigned char)uVar5;
        return '\0';
      }
      if (-param_1 < dVar6) {
        bVar1 = false;
        cVar3 = '\0';
      }
      else {
        *param_3 = *param_3 & ~(unsigned char)uVar4;
      }
    }
    uVar5 = uVar5 + 1 & 0xff;
    if (uVar5 == 6) {
      uVar5 = 0;
      uVar4 = 0x80;
    }
    else {
      uVar4 = uVar4 >> 1;
    }
    bVar2 = bVar2 + 1;
  } while (bVar2 < 6);
  return !bVar1 + cVar3 * '\x02';
}

