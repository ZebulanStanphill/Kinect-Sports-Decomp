extern unsigned int *auStack_250;
extern unsigned int *auStack_450;
extern unsigned int *auStack_650;
extern unsigned int *auStack_690;
extern unsigned int *auStack_6d0;
extern unsigned int *auStack_710;
extern int fn_82297868();
extern int fn_8229B6C8();
extern int fn_8229C8C8();
extern int fn_8229C9C0();
extern int fn_8229CCA8();
extern int fn_82358FD8();
extern int fn_82528EE0();
extern int fn_82F64CE0();
extern unsigned int lbl_821916F4;


void fn_8229B4C8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8,
                  unsigned __int64 param_9,unsigned __int64 param_10)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned int in_stack_00000054;
  unsigned char auStack_710 [64];
  unsigned char auStack_6d0 [64];
  unsigned char auStack_690 [64];
  unsigned char auStack_650 [512];
  unsigned char auStack_450 [512];
  unsigned char auStack_250 [592];
  
  if (*(int *)(param_4 + 0xc) == 0) {
    *(int *)(param_4 + 0x4c) = (int)param_5;
    fn_82358FD8(param_5,auStack_650,0x100,0xffffffff821aafa4);
    uVar1 = fn_82F64CE0(auStack_650);
    fn_82297868(param_4 + 0x70,auStack_650,uVar1);
    if ((int)param_6 == 4) {
      fn_82358FD8(*(unsigned int *)(param_4 + 0x4c),auStack_450,0x100,0xffffffff821aaf6c);
      fn_82358FD8(*(unsigned int *)(param_4 + 0x4c),auStack_250,0x100,0xffffffff821aaf58);
      uVar1 = fn_82F64CE0(auStack_650);
      fn_82297868(param_4 + 0x8c,auStack_650,uVar1);
      fn_8229C9C0(param_4,4,auStack_450,auStack_650,auStack_250,auStack_650);
    }
    else {
      if ((int)param_6 == 2) {
        uVar1 = 0xffffffff821aaf6c;
      }
      else {
        uVar1 = 0xffffffff821aaf58;
      }
      fn_82358FD8(*(unsigned int *)(param_4 + 0x4c),auStack_450,0x100,uVar1);
      uVar3 = param_8;
      if ((param_8 & 0xffffffff) == 0) {
        uVar3 = 0xffffffff820e975c;
      }
      fn_8229C8C8(param_4,param_6,auStack_450,auStack_650,uVar3);
    }
    if (((param_8 & 0xffffffff) != 0) && (iVar2 = thunk_FUN_82f64ce0(param_8), 0 < iVar2)) {
      fn_82358FD8(*(unsigned int *)(param_4 + 0x4c),auStack_710,0x20,0xffffffff821a8344);
      fn_82528EE0(param_2,auStack_6d0,0x20,0xffffffff821a8518,param_2);
      fn_82528EE0(param_3,auStack_690,0x20,0xffffffff821a8518,param_3);
      fn_8229CCA8(param_4,auStack_710,param_8,param_9,param_10,auStack_6d0,in_stack_00000054,
                      auStack_690);
    }
    fn_8229B6C8((double)lbl_821916F4,param_1,param_4);
  }
  return;
}

