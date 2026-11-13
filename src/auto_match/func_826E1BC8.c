extern unsigned int *auStack_60;
extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_82687270();
extern int fn_826A6A38();
extern int fn_826F4070();
extern int fn_826F47F0();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int lbl_8200CCF4;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_54;


void fn_826E1BC8(unsigned __int64 param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  unsigned int auStack_60 [2];
  int *piStack_58;
  unsigned int uStack_54;
  int iStack_50;
  int iStack_4c;
  
  uVar1 = fn_826A6A38();
  uVar2 = fn_826A6A38(param_1);
  uVar3 = fn_826A6A38(param_1);
  uVar4 = fn_826A6A38(param_1);
  uVar5 = fn_826A6A38(param_1);
  uVar6 = fn_826A6A38(param_1);
  puVar7 = (unsigned int *)fn_8267B890(lbl_831E7E64,0x20,0);
  if (puVar7 == (unsigned int *)0x0) {
    puVar7 = (unsigned int *)0x0;
  }
  else {
    puVar7[1] = 1;
    *puVar7 = &lbl_8200CCF4;
    puVar7[2] = 0x40000;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
  }
  puVar7[2] = uVar2 & 0xffff | 0x90000;
  puVar7[4] = uVar3 & 0xffff;
  puVar7[5] = uVar4 & 0xffff;
  puVar7[6] = uVar5 & 0xffff;
  puVar7[7] = uVar6 & 0xffff;
  fn_826F4070(&piStack_58,puVar7);
  auStack_60[0] = uVar1 & 0xffff;
  fn_826F47F0(&iStack_50,param_1,auStack_60,&piStack_58);
  if ((iStack_50 == 0) && (iStack_4c != 0)) {
    fn_82687270();
  }
  if (piStack_58 != (int *)0x0) {
    (**(int (***)())(*piStack_58 + 8))(piStack_58,uStack_54);
  }
  fn_8267C498(puVar7);
  return;
}

