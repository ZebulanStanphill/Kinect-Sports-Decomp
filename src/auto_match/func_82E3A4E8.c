#define true 1
extern unsigned int *auStack_40;
extern int fn_82E65CB8();
extern int fn_82E65EE8();
extern unsigned int uStack_44;
extern unsigned int uStack_48;


/* WARNING: Type propagation algorithm not settling */

__int64 fn_82E3A4E8(unsigned __int64 param_1,int *param_2,__int64 param_3,int *param_4)

{
  __int64 lVar1;
  int *piStack_50;
  int *piStack_4c;
  struct { unsigned int first; unsigned int second; } stack_pair_48;

  unsigned int auStack_40 [4];
  
  piStack_50 = (int *)0x0;
  piStack_4c = (int *)0x0;
  stack_pair_48.second = 0;
  lVar1 = fn_82E65EE8(0x200,&piStack_50);
  if (-1 < lVar1) {
    lVar1 = fn_82E65CB8(piStack_50,&piStack_4c);
    if (-1 < lVar1) {
      lVar1 = (**(int (***)())(*param_2 + 0x1c))(param_2,param_3);
      if (-1 < lVar1) {
        while( true ) {
          stack_pair_48.first = 0;
          auStack_40[1] = 0;
          lVar1 = (**(int (***)())(*param_2 + 0x1c))(param_2,param_3);
          if (lVar1 < 0) break;
          lVar1 = (**(int (***)())(*piStack_50 + 0xc))(piStack_50,&stack_pair_48.first,0,auStack_40 + 1);
          if (lVar1 < 0) break;
          lVar1 = (**(int (***)())(*param_2 + 0x24))(param_2,stack_pair_48.first,0x200,&stack_pair_48.second);
          (**(int (***)())(*piStack_50 + 0x10))(piStack_50);
          if ((int)lVar1 < 0) break;
          lVar1 = (**(int (***)())(*piStack_50 + 0x18))(piStack_50,stack_pair_48.second);
          if (lVar1 < 0) break;
          auStack_40[0] = 0;
          lVar1 = (**(int (***)())(*param_4 + 0x18))(param_4,piStack_4c,auStack_40);
          if ((lVar1 < 0) || (param_3 = (unsigned __int64)auStack_40[0] + param_3, (int)lVar1 == 0)) break;
        }
      }
    }
  }
  if (piStack_50 != (int *)0x0) {
    (**(int (***)())(*piStack_50 + 8))();
    piStack_50 = (int *)0x0;
  }
  if (piStack_4c != (int *)0x0) {
    (**(int (***)())(*piStack_4c + 8))();
  }
  return lVar1;
}

