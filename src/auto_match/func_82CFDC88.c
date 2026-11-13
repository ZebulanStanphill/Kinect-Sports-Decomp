typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82CE7E68();
extern int fn_82CE7EE0();
extern int fn_82CEAC20();
extern int fn_82CFBE30();
extern int fn_82CFD510();
extern int fn_82D04AB8();
extern int fn_82D04B90();
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


__int64 fn_82CFDC88(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned char bVar1;
  bool bVar2;
  unsigned __int64 uVar3;
  char cVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  struct { unsigned int first; unsigned int second; } stack_pair_70;

  
  uVar6 = 0xffffffff82196ea4;
  bVar1 = *(unsigned char *)(param_1 + 0xc);
  if (*(int *)(param_1 + 4) == 0) {
    uVar3 = 0xffffffff82196ea4;
  }
  else {
    uVar3 = fn_82CEAC20();
  }
  if (*(unsigned int **)(param_1 + 8) != (unsigned int *)0x0) {
    uVar6 = (unsigned __int64)**(unsigned int **)(param_1 + 8);
  }
  fn_82CE7EE0(&stack_pair_70.first);
  if (((((bVar1 < 0x14) || (bVar1 == 0x1c)) || (bVar1 == 0x1e)) ||
      ((bVar1 == 0x1d || (bVar1 == 0x20)))) || (bVar1 == 0x21)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((bVar2) || (bVar1 == 0x1b)) {
    if (*(short *)(param_1 + 0xe) == 0) {
      fn_82D04AB8(&stack_pair_70.first,*(unsigned int *)((unsigned int)bVar1 * 0xc + -0x7ce8097c));
      goto LAB_82cfdf1c;
    }
    uVar3 = 0xffffffff82133c0c;
  }
  else {
    if (bVar1 == 0x14) {
      if (*(int *)(param_1 + 4) == 0) {
        if (*(char *)(param_1 + 0xd) == '\x02') {
          fn_82D04AB8(&stack_pair_70.first,0xffffffff82133c20);
        }
        else {
          fn_82D04AB8(&stack_pair_70.first,0xffffffff82133ce0);
        }
      }
      else {
        uVar3 = fn_82CEAC20();
        fn_82D04B90(&stack_pair_70.first,0xffffffff82133ce8,uVar3);
      }
      goto LAB_82cfdf1c;
    }
    if ((bVar1 == 0x16) || (bVar1 == 0x1a)) {
      uVar5 = (unsigned int)*(unsigned char *)(param_1 + 0xd);
      cVar4 = fn_82CFD510(*(unsigned char *)(param_1 + 0xd));
      if (cVar4 == '\0') {
        if (uVar5 == 0x14) {
          if (*(int *)(param_1 + 4) == 0) {
            fn_82D04B90(&stack_pair_70.first,0xffffffff82133c68);
            goto LAB_82cfdf1c;
          }
          uVar3 = 0xffffffff82133c78;
        }
        else {
          if (uVar5 != 0x19) goto LAB_82cfdf1c;
          uVar3 = 0xffffffff82133c54;
        }
      }
      else {
        uVar3 = 0xffffffff82133c88;
      }
    }
    else {
      if (bVar1 == 0x18) {
        fn_82D04B90(&stack_pair_70.first,0xffffffff82133cd8,uVar6);
        goto LAB_82cfdf1c;
      }
      if (bVar1 == 0x1f) {
        fn_82D04B90(&stack_pair_70.first,0xffffffff82133ccc,uVar6);
        goto LAB_82cfdf1c;
      }
      if (bVar1 != 0x19) goto LAB_82cfdf1c;
      if (*(short *)(param_1 + 0xe) == 0) {
        fn_82D04B90(&stack_pair_70.first,0xffffffff82133cc0,uVar3);
        goto LAB_82cfdf1c;
      }
      uVar3 = 0xffffffff82133cb0;
    }
  }
  fn_82D04B90(&stack_pair_70.first,uVar3);
LAB_82cfdf1c:
  fn_82CFBE30(param_2,stack_pair_70.first,param_3);
  fn_82CE7E68(&stack_pair_70.first);
  return (unsigned __int64)stack_pair_70.second - 1;
}

