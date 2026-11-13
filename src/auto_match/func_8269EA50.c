typedef unsigned char bool;
extern int fn_8269D9C0();
extern unsigned int iStack_18;
extern unsigned int iStack_1c;
extern unsigned int iStack_20;
extern unsigned int uStack_14;


bool fn_8269EA50(__int64 param_1,int *param_2)

{
  __int64 lVar1;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  unsigned int uStack_14;
  
  iStack_20 = *param_2;
  if ((iStack_20 == 0x40) || (iStack_20 == 0x80)) {
    iStack_1c = 0;
    iStack_18 = 0xff;
    uStack_14 = ((((unsigned __int64)(uStack_14)) & (~(((unsigned __int64)0xFFFFFF) << 8))) | ((((unsigned __int64)((((unsigned __int64)(uStack_14) >> 8) & 0xFFFFFF) & 0xffff)) & ((unsigned __int64)0xFFFFFF)) << 8));
    uStack_14 = (unsigned int)(((unsigned __int64)(uStack_14) >> 8) & 0xFFFFFF);
  }
  else {
    iStack_1c = param_2[1];
    iStack_18 = param_2[2];
    uStack_14 = param_2[3];
  }
  lVar1 = fn_8269D9C0(param_1 + 0x88,&iStack_20);
  return (-(unsigned __int64)(lVar1 != 0) & lVar1 + 0x10U) != 0;
}

