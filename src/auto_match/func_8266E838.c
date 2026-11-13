typedef unsigned char bool;
#define true 1
#define false 0
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_8257A9F0();
extern int fn_8265CA20();
extern int fn_8266D3E0();
extern int fn_8266DB60();
extern int fn_82670A18();
extern int fn_82670D68();
extern int fn_8267B850();
extern int fn_8267C4F0();
extern int fn_82685CF0();
extern int fn_82BFE128();
extern int fn_82BFE460();
extern int fn_82BFE530();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_48;


void fn_8266E838(int *param_1)

{
  unsigned int uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar6;
  unsigned __int64 uVar5;
  unsigned int *puVar7;
  unsigned int uVar8;
  int * apiStack_60;
  struct { int first; int second; } stack_pair_50;

  unsigned int uStack_48;
  
  fn_82670D68();
  bVar3 = false;
  if (param_1[0x3a] == 0) {
    iVar6 = 1;
  }
  else {
    iVar6 = fn_82BFE460();
  }
  if (iVar6 == 0) {
    stack_pair_50.first = 0;
    stack_pair_50.second = 0;
    uStack_48 = 0;
    while( true ) {
      if (param_1[0x3a] == 0) {
        iVar6 = 1;
      }
      else {
        iVar6 = fn_82BFE460();
      }
      if (iVar6 != 0) break;
      apiStack_60 = (int *)0x0;
      uVar5 = fn_82BFE530(param_1[0x3a],&apiStack_60);
      uVar5 = ((uVar5 & 0xffffffff) >> 0x1f) - 1 & ZEXT48(apiStack_60);
      apiStack_60 = (int *)uVar5;
      iVar6 = fn_82670A18(uVar5);
      if (iVar6 == 0) {
        fn_8257A9F0(&stack_pair_50.first,&apiStack_60);
      }
      else {
        if (uVar5 != 0) {
          (**(int (***)())(*(int *)uVar5 + 8))(uVar5,1);
        }
        bVar3 = true;
      }
    }
    iVar6 = param_1[0x36];
    while (iVar4 = stack_pair_50.first, iVar6 != param_1[0x37]) {
      if ((*(int *)(iVar6 + 4) == 0) || (bVar2 = false, *(int *)(*(int *)(iVar6 + 4) + 4) == 0)) {
        bVar2 = true;
      }
      if (bVar2) {
        fn_8266D3E0(iVar6 + 0xc,param_1[0x37],iVar6);
        fn_8266DB60((unsigned __int64)(unsigned int)param_1[0x37] - 0xc,(unsigned __int64)(unsigned int)param_1[0x37],
                      param_1 + 0x39);
        param_1[0x37] = param_1[0x37] + -0xc;
        param_1[0x3b] = 1;
      }
      else {
        iVar6 = iVar6 + 0xc;
      }
    }
    uVar8 = 0;
    uVar1 = stack_pair_50.second - stack_pair_50.first >> 2;
    if (uVar1 != 0) {
      puVar7 = (unsigned int *)(stack_pair_50.first + -4);
      do {
        puVar7 = puVar7 + 1;
        fn_82BFE128(param_1[0x3a],*puVar7);
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar1);
    }
    if (bVar3) {
      uVar5 = (**(int (***)())(*param_1 + 0xc))(param_1,0x10);
      fn_82685CF0();
      if ((uVar5 & 0xffffffff) != 0) {
        fn_8267C4F0(uVar5);
      }
      fn_8267B850(lbl_831E7E64);
    }
    if (iVar4 != 0) {
      fn_8265CA20(iVar4);
    }
  }
  return;
}

