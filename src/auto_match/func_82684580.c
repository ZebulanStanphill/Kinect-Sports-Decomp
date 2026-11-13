extern int fn_8267B890();
extern int fn_8267C4F0();
extern int fn_82685F70();
extern int fn_82687C88();
extern int fn_826E66E8();
extern unsigned int lbl_82005A34;
extern unsigned int lbl_831E7E64;


void fn_82684580(int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned uVar2;
  unsigned iVar3;
  unsigned int *puVar4;
  unsigned allocated;
  
  uVar1 = *param_2;
  param_1[3] = uVar1;
  uVar1 = uVar1 >> 0x1c & 1;
  uVar2 = fn_8267B890(lbl_831E7E64,0x14,0);
  if (uVar2 != 0) {
    iVar3 = fn_82687C88(uVar2,uVar1);
  }
  else { iVar3 = 0; }
  param_1[2] = iVar3;
  uVar2 = fn_8267B890(lbl_831E7E64,0x44,0);
  if (uVar2 != 0) {
    iVar3 = fn_826E66E8(uVar2,param_1[2],uVar1);
  }
  else { iVar3 = 0; }
  param_1[1] = iVar3;
  if (iVar3 != 0) {
    (*(int (**)())(*param_1 + 8))(param_1,10,param_2[1]);
    allocated = fn_8267B890(lbl_831E7E64,0x10,0);
    if (allocated != 0) {
      unsigned *memory=(unsigned *)allocated;
      memory[1] = 1;
      memory[2] = 0xd;
      *memory = (unsigned)&lbl_82005A34;
      memory[3] = 0;
      puVar4=memory;
    } else {puVar4=0;}
    (*(int (**)())(*param_1 + 8))(param_1,0xd,puVar4);
    if (puVar4 != (unsigned int *)0x0) {
      fn_8267C4F0(puVar4);
    }
    (*(int (**)())(*param_1 + 8))(param_1,0x1e,param_2[2]);
    (*(int (**)())(*param_1 + 8))(param_1,0x1d,param_2[3]);
    uVar2 = fn_8267B890(lbl_831E7E64,0x18,0);
    if (uVar2 != 0) { uVar2 = fn_82685F70(uVar2,uVar1); } else { uVar2=0; }
    (*(int (**)())(*param_1 + 8))(param_1,0x10,uVar2);
    if ((uVar2 & 0xffffffff) != 0) {
      fn_8267C4F0(uVar2);
    }
  }
  return;
}

