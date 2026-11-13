extern unsigned int *auStack_28;
extern unsigned int *auStack_30;
extern int fn_8288A398();
extern int fn_828C4348();
extern int fn_828C4370();
extern int fn_828C6408();
extern int fn_828C6AF0();
extern int fn_828E9D60();
extern int fn_828E9D90();


void fn_828BEFD0(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned int uVar4;
  unsigned char auStack_30 [8];
  unsigned char auStack_28 [8];
  
  if ((int)param_1 == 0x19) {
    fn_8288A398();
    fn_828C4370(auStack_30,0xffffffff8321434c);
    iVar3 = fn_828E9D90(param_2);
    uVar1 = iVar3 + 7U & 0xfffffff8;
    uVar2 = fn_828C4348(auStack_28,auStack_30);
    fn_828C6408(0xffffffff8321434c,uVar2,param_2);
    uVar4 = fn_828E9D90(param_2);
    if (uVar1 < uVar4) {
      fn_828E9D60(param_2,uVar1);
    }
  }
  else {
    fn_828C6AF0(0xffffffff8321434c,param_1,param_2);
  }
  return;
}

