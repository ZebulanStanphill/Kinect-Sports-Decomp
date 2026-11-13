extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_828F5D48();
extern int fn_828F8E78();
extern int fn_82936220();
extern int fn_829371F8();
extern int fn_8293F5D8();


__int64 fn_8293F968(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int param_4,
                      unsigned int param_5)

{
  unsigned int *puVar1;
  __int64 lVar2;
  
  puVar1 = (unsigned int *)fn_8265C940(0x150,0x24810000);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[0x19] = 0;
    puVar1[0x4e] = 0;
    puVar1[0x4f] = 0;
    puVar1[0x20] = 0;
    puVar1[0x1f] = 1;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
  }
  if (puVar1 == (unsigned int *)0x0) {
    lVar2 = -0x7ff8fff2;
  }
  else {
    puVar1[0x14] = param_5;
    puVar1[0x13] = param_4;
    lVar2 = fn_828F5D48(param_1,2);
    if (-1 < lVar2) {
      lVar2 = fn_8293F5D8(puVar1,param_1,param_2,2,0,0);
      if (-1 < lVar2) {
        lVar2 = fn_82936220(puVar1,param_3);
      }
      fn_828F8E78(param_1);
    }
    fn_829371F8(puVar1);
    fn_8265C990(puVar1,0x24810000);
  }
  return lVar2;
}

