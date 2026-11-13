extern unsigned int *auStack_50;
extern unsigned int *auStack_58;
extern int fn_82E50BE8();
extern int fn_82E73540();
extern int fn_82E74F58();
extern int fn_82E758E0();
extern unsigned int uStack_60;


__int64 fn_82E75BB8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int *param_4,
                      unsigned int *param_5)

{
  unsigned int *puVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  int iVar4;
  __int64 lVar5;
  __int64 lVar6;
  unsigned __int64 uStack_60;
  unsigned int auStack_58 [2];
  unsigned __int64 auStack_50 [10];
  
  if ((((param_2 & 0xffffffff) == 0) || (param_4 == (int *)0x0)) || (param_5 == (unsigned int *)0x0))
  {
    lVar2 = -0x7fffbffd;
  }
  else {
    *param_4 = 0;
    *param_5 = 0;
    uStack_60 = 0;
    lVar2 = fn_82E74F58();
    if (-1 < lVar2) {
      auStack_50[0] = 0;
      auStack_58[0] = 0;
      lVar5 = *(__int64 *)(param_1 + 8);
      lVar6 = (__int64)uStack_60 / 10000;
      uStack_60 = uStack_60 & 0xffffffff;
      lVar2 = fn_82E758E0(param_1,param_2,param_3,auStack_50,&uStack_60,auStack_58);
      if (-1 < lVar2) {
        uVar3 = fn_82E50BE8(0x40,0,0,0,0);
        if ((uVar3 & 0xffffffff) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = fn_82E73540(uVar3,param_2,lVar6 + lVar5,auStack_50[0],
                                    *(unsigned short *)(param_1 + 0x14),(((unsigned __int64)(uStack_60) >> 0) & 0xFFFFFFFF) & 0xff,
                                    auStack_58[0]);
        }
        *param_4 = iVar4;
        if (iVar4 != 0) {
          *param_5 = 1;
          return lVar2;
        }
        lVar2 = -0x7ff8fff2;
      }
    }
    puVar1 = (unsigned int *)*param_4;
    if (puVar1 != (unsigned int *)0x0) {
      (**(int (***)())*puVar1)(puVar1,1);
    }
    *param_4 = 0;
  }
  return lVar2;
}

