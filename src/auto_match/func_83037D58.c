extern int fn_82A1DDC0();
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_83037F70();
extern unsigned int lbl_831BC768;
extern unsigned int uRam831bc8dc;


unsigned __int64 fn_83037D58(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  
  if (((unsigned __int64)uRam831bc8dc - (unsigned __int64)(unsigned int)param_1[7] & 0xffffffff) < (param_3 & 0xffffffff))
  {
    if (*(char *)(param_1 + 8) != '\0') {
      return 0x34;
    }
    uVar4 = param_1[6] + 1;
    uVar1 = param_1[1] - *param_1 >> 3;
    uVar5 = -(unsigned int)(uVar4 < uVar1) & uVar4;
    if (param_1[4] == uVar5) {
      if (((unsigned int)param_1[3] <= uVar1) ||
         (uVar2 = fn_82FA5060(lbl_831BC768,(unsigned __int64)uRam831bc8dc,param_3,uVar4 - uVar1),
         (uVar2 & 0xffffffff) == 0)) {
        *(unsigned char *)(param_1 + 8) = 1;
        return 0x34;
      }
      puVar3 = (unsigned int *)fn_83037F70(param_1,uVar5);
      if (puVar3 == (unsigned int *)0x0) {
        *(unsigned char *)(param_1 + 8) = 1;
        fn_82FA5190(lbl_831BC768,uVar2);
        return 0x34;
      }
      *puVar3 = (int)uVar2;
      param_1[4] = param_1[4] + 1;
    }
    else {
      uVar2 = (unsigned __int64)*(unsigned int *)(uVar5 * 8 + *param_1);
    }
    param_1[6] = uVar5;
    param_1[7] = (int)param_3;
    fn_82A1DDC0(uVar2,param_2,param_3);
  }
  else {
    fn_82A1DDC0((unsigned __int64)*(unsigned int *)(param_1[6] * 8 + *param_1) + (unsigned __int64)(unsigned int)param_1[7],
                      param_2);
    param_1[7] = (int)param_3 + param_1[7];
  }
  *(int *)(param_1[6] * 8 + *param_1 + 4) = param_1[7];
  return 1;
}

