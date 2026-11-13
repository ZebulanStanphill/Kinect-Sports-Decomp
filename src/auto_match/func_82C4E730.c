#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
extern int fn_82C562F0();


unsigned __int64
fn_82C4E730(unsigned __int64 param_1,int param_2,unsigned char *param_3,__int64 param_4,int param_5)

{
  unsigned char uVar1;
  unsigned char *puVar2;
  unsigned short *puVar4;
  unsigned __int64 uVar3;
  
  puVar4 = (unsigned short *)
           fn_82C562F0(param_1,(param_4 + 1U & 0x7fffffff) << 1,0xffffffff82196582);
  *(unsigned short **)(param_5 + 0x24) = puVar4;
  if (puVar4 == (unsigned short *)0x0) {
    uVar3 = 0xfffffffffffffff7;
  }
  else {
    if (0 < param_4) {
      param_2 = param_2 - (int)param_3;
      do {
        uVar1 = *param_3;
        puVar2 = param_3 + param_2;
        param_3 = param_3 + 1;
        *puVar4 = CONCAT11(uVar1,*puVar2);
        puVar4 = puVar4 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
    uVar3 = 0;
    *puVar4 = 0;
  }
  return uVar3;
}

