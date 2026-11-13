extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82F534F8();
extern int fn_82F538A0();
extern int fn_82F538B0();
extern int fn_82F538F0();
extern int fn_82F53928();
extern int fn_82F593F8();
extern int fn_8306ED30();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82021544;
extern unsigned int lbl_82165A98;


double fn_82F4FD98(int param_1,unsigned __int64 param_2)

{
  __int64 lVar1;
  double dVar2;
  double dVar3;
  __int64 alStack_70 [2];
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [80];
  
  lVar1 = fn_82F538F0((unsigned __int64)*(unsigned int *)(param_1 + 0xcf0) + 0x60);
  alStack_70[0] = fn_82F538F0((unsigned __int64)*(unsigned int *)(param_1 + 0xcf0) + 0x850);
  alStack_70[0] = lVar1 - alStack_70[0];
  dVar3 = (double)lbl_82002AE0;
  dVar2 = (double)fn_82F593F8((double)(float)((double)alStack_70[0] * lbl_82165A98),
                               (double)lbl_82021544,dVar3);
  lVar1 = 0;
  dVar3 = (double)(float)(dVar3 / dVar2);
  do {
    fn_82F538A0(alStack_70,(unsigned __int64)*(unsigned int *)(param_1 + 0xcf0) + 0x850,lVar1);
    fn_82F538A0(auStack_60,(unsigned __int64)*(unsigned int *)(param_1 + 0xcf0) + 0x60,lVar1);
    fn_8306ED30();
    fn_82F53928(param_2,lVar1);
    fn_82F538B0(auStack_50,param_2,lVar1);
    fn_82F534F8(dVar3);
    fn_82F53928(param_2,lVar1);
    lVar1 = lVar1 + 1;
  } while ((int)lVar1 < 0x19);
  return dVar2;
}

