extern int fn_82A3FF60();
extern int fn_82A4F4E0();
extern int fn_82A761F8();
extern int fn_82A76260();
extern unsigned int lbl_82089670;


__int64 fn_82A76478(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  unsigned int *puVar1;
  __int64 lVar2;
  
  puVar1 = (unsigned int *)fn_82A3FF60(0xffffffff83219d50,0x44,0x20970006,0);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar1[8] = 0;
    *puVar1 = &lbl_82089670;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0x7fffffff;
    puVar1[0xd] = 0;
  }
  if (puVar1 == (unsigned int *)0x0) {
    lVar2 = -0x7ff8fff2;
  }
  else {
    lVar2 = fn_82A76260(puVar1,param_1,param_2,param_3);
    if (lVar2 < 0) {
      fn_82A761F8(puVar1);
      fn_82A4F4E0(puVar1);
    }
    else {
      *param_4 = puVar1;
    }
  }
  return lVar2;
}

