extern int fn_82C106C8();
extern int fn_82C10B28();
extern int fn_82C11050();
extern unsigned int stack0x00000014;


unsigned __int64 fn_82C06948(int *param_1)

{
  int (**pcVar1)();
  int iVar2;
  unsigned __int64 uVar3;
  int *piStack00000014;
  int aiStack_20 [4];
  
  aiStack_20[0] = 0;
  piStack00000014 = param_1;
  if (*param_1 != 0) {
    pcVar1 = *(int (***)())(*param_1 + 4);
    if (pcVar1 != (int (**)())0x0) {
      (*pcVar1)();
    }
    fn_82C10B28(piStack00000014[0x98],8);
  }
  fn_82C11050(piStack00000014[0x8f]);
  uVar3 = fn_82C11050(piStack00000014[0x8e]);
  if (piStack00000014[1] != 0) {
    fn_82C10B28(piStack00000014[0x98],8,piStack00000014 + 1);
  }
  if (piStack00000014[2] != 0) {
    if (*(int *)(piStack00000014[2] + 4) != 0) {
      (**(int (***)())(piStack00000014[2] + 4))(piStack00000014[2]);
    }
    fn_82C10B28(piStack00000014[0x98],8,piStack00000014 + 2);
  }
  if (piStack00000014[0x90] != 0) {
    fn_82C10B28(piStack00000014[0x98],8,piStack00000014 + 0x90);
  }
  iVar2 = piStack00000014[0x91];
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 4) != 0) {
      fn_82C10B28(piStack00000014[0x98],8,iVar2 + 4);
    }
    fn_82C10B28(piStack00000014[0x98],8,piStack00000014 + 0x91);
  }
  iVar2 = piStack00000014[0x92];
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x10) != 0) {
      fn_82C10B28(piStack00000014[0x98],8,iVar2 + 0x10);
    }
    if (*(int *)(piStack00000014[0x92] + 0xc) != 0) {
      fn_82C10B28(piStack00000014[0x98],8,piStack00000014[0x92] + 0xc);
    }
    if (*(int *)(piStack00000014[0x92] + 8) != 0) {
      fn_82C10B28(piStack00000014[0x98],8,piStack00000014[0x92] + 8);
    }
    aiStack_20[0] = *(int *)(piStack00000014[0x92] + 4);
    if (aiStack_20[0] != 0) {
      fn_82C10B28(piStack00000014[0x98],8,aiStack_20);
    }
    fn_82C10B28(piStack00000014[0x98],8,piStack00000014 + 0x92);
  }
  if (piStack00000014[0x99] != 0) {
    uVar3 = fn_82C10B28(piStack00000014[0x98],8,piStack00000014 + 0x99);
  }
  if (piStack00000014[0x9a] != 0) {
    fn_82C10B28(piStack00000014[0x98],8,piStack00000014 + 0x9a);
  }
  if (piStack00000014[0x9f] != 0) {
    uVar3 = fn_82C106C8(piStack00000014[0x98]);
  }
  if (piStack00000014[0xa0] != 0) {
    uVar3 = fn_82C106C8(piStack00000014[0x98]);
  }
  if (piStack00000014[0xa1] != 0) {
    uVar3 = fn_82C106C8(piStack00000014[0x98]);
  }
  if (piStack00000014[0xa2] != 0) {
    uVar3 = fn_82C106C8(piStack00000014[0x98]);
  }
  fn_82C10B28(piStack00000014[0x98],8,&stack0x00000014);
  return uVar3;
}

