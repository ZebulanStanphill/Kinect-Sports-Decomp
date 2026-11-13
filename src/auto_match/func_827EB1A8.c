typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8281D480();


char fn_827EB1A8(double param_1,__int64 param_2,unsigned __int64 param_3,unsigned char *param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned char *param_7)

{
  bool bVar1;
  char cVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  double dVar6;
  
  param_3 = param_3 & 0xff;
  uVar5 = -(unsigned __int64)(*param_7 < param_3) & (unsigned __int64)*param_7;
  bVar1 = true;
  cVar2 = '\x01';
  uVar3 = 0;
  uVar4 = (unsigned __int64)(unsigned int)(0x80 >> ((unsigned int)uVar5 & 0x3f)) & 0xff;
  if (param_3 != 0) {
    do {
      if ((uVar4 & *param_4) != 0) {
        dVar6 = (double)fn_8281D480(uVar5 * 0x10 + param_2,param_5);
        if (param_1 < dVar6) {
          *param_7 = (unsigned char)uVar5;
          return '\0';
        }
        if (-param_1 < dVar6) {
          bVar1 = false;
          cVar2 = '\0';
        }
        else {
          *param_4 = *param_4 & ~(unsigned char)uVar4;
        }
      }
      uVar5 = uVar5 + 1 & 0xff;
      if (uVar5 == param_3) {
        uVar5 = 0;
        uVar4 = 0x80;
      }
      else {
        uVar4 = uVar4 >> 1;
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < param_3);
  }
  return !bVar1 + cVar2 * '\x02';
}

