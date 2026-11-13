extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82FA5060();
extern int fn_82FE71B8();
extern int fn_82FE7220();
extern int fn_82FE7428();
extern int fn_82FE7C08();
extern int fn_82FE8948();
extern unsigned int lbl_831BC768;


unsigned __int64
fn_82FE9E20(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4,
             unsigned __int64 param_5)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  unsigned int auStack_70 [4];
  unsigned char auStack_60 [96];
  
  if ((param_4 == (unsigned int *)0x0) || ((param_5 & 0xffffffff) == 0)) {
    uVar2 = 0x1f;
  }
  else {
    uVar1 = fn_82FE8948(param_3);
    if ((param_5 & 0xffffffff) == 1) {
      auStack_70[0] = fn_82FE8948(*param_4);
      uVar2 = fn_82FE7C08(param_1,param_2,uVar1,auStack_70,1);
    }
    else {
      puVar3 = (unsigned int *)fn_82FA5060(lbl_831BC768,(param_5 & 0x3fffffff) << 2);
      if (puVar3 == (unsigned int *)0x0) {
        uVar2 = 0x34;
      }
      else {
        if ((param_5 & 0xffffffff) != 0) {
          uVar5 = param_5;
          puVar6 = puVar3;
          do {
            uVar4 = fn_82FE8948(*(unsigned int *)((int)param_4 + ((int)puVar6 - (int)puVar3)));
            *puVar6 = uVar4;
            uVar5 = uVar5 - 1;
            puVar6 = puVar6 + 1;
          } while (uVar5 != 0);
        }
        uVar2 = fn_82FE71B8(auStack_60);
        if ((int)uVar2 == 1) {
          uVar2 = fn_82FE7428(0xffffffff82fe72a0,auStack_60,(int)param_1 == 0,param_2,uVar1,puVar3
                                ,param_5,0);
          uVar2 = fn_82FE7220(auStack_60,uVar2);
        }
      }
    }
  }
  return uVar2;
}

