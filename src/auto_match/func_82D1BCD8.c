extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82D0B0C0();
extern int fn_82D0C6B0();
extern int fn_82D0D640();
extern int fn_82D0D6E8();
extern int fn_82D0DC58();


unsigned __int64 fn_82D1BCD8(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [32];
  
  if ((int)param_1[1] >= 4) {
    fn_82D0D6E8(auStack_40);
    uVar1 = param_1[1];
    uVar2 = *param_1;
    uVar3 = fn_82D0B0C0(auStack_50);
    iVar4 = fn_82D0DC58(auStack_40,uVar2,uVar1,uVar3);
    if (iVar4 != -1) {
      fn_82D0C6B0(auStack_40,1,param_2);
      fn_82D0D640(auStack_40);
      return 0;
    }
    fn_82D0D640(auStack_40);
  }
  return 1;
}

