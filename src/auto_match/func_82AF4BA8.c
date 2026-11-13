typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82B80EE0();
extern unsigned int lbl_821AAD20;


char fn_82AF4BA8(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned int param_4,unsigned __int64 param_5,
                  float *param_6)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  unsigned int uVar4;
  double dVar5;
  double dVar6;
  
  if ((*(unsigned int *)(param_2 + 8) & 0x3f80) == 0x3e00) {
    cVar3 = (-((param_5 & 2) != 0) & 3U) + 1;
  }
  else {
    bVar2 = false;
    bVar1 = false;
    if ((param_3 & 0xffffffff) != 0) {
      uVar4 = 0;
      dVar6 = (double)lbl_821AAD20;
      do {
        dVar5 = (double)fn_82B80EE0(param_2,param_4 >> (uVar4 & 0x3f) & 3,param_5);
        *param_6 = (float)dVar5;
        if (dVar6 <= dVar5) {
          if (dVar6 < dVar5) {
            bVar2 = true;
          }
        }
        else {
          bVar1 = true;
        }
        param_3 = param_3 - 1;
        uVar4 = uVar4 + 2;
        param_6 = param_6 + 1;
      } while (param_3 != 0);
    }
    if ((!bVar1) || (cVar3 = '\x01', !bVar2)) {
      cVar3 = '\x02';
    }
  }
  return cVar3;
}

