extern unsigned int *auStack_5c;
extern int fn_82635C30();
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82AA0958();
extern int fn_82AA0D90();
extern int fn_82AA0FC0();
extern unsigned int iStack_60;


__int64 fn_82AA14F8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                      unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,__int64 param_8)

{
  int iVar1;
  __int64 lVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned short *puVar5;
  int iStack_60;
  unsigned int auStack_5c [23];
  
  iStack_60 = 0;
  auStack_5c[0] = 0;
  lVar2 = fn_8265C940(0x124c,0x24870000);
  if (lVar2 == 0) {
    lVar3 = -0x7ff8fff2;
  }
  else {
    fn_82AA0D90(lVar2,param_1,param_2,param_5,param_7,param_8 != 0);
    fn_82AA0958(param_3,param_4,0xffffffff82aa0130,lVar2,0,1);
    lVar3 = fn_82AA0FC0(lVar2,&iStack_60,auStack_5c);
    iVar1 = iStack_60;
    if (-1 < lVar3) {
      uVar4 = (unsigned __int64)auStack_5c[0] / 0x14;
      if ((int)uVar4 != 0) {
        puVar5 = (unsigned short *)(iStack_60 + 2);
        do {
          fn_82635C30(param_6,*puVar5,puVar5 + 1);
          uVar4 = uVar4 - 1;
          puVar5 = puVar5 + 10;
        } while (uVar4 != 0);
      }
    }
    fn_8265C990(lVar2,0x24870000);
    if (iVar1 != 0) {
      fn_8265C990(iVar1,0x24870000);
    }
  }
  return lVar3;
}

