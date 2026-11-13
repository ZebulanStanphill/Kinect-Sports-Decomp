#define true 1
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_aa0;
extern unsigned int *auStack_ad0;
extern unsigned int *auStack_af0;
extern unsigned int *auStack_b00;
extern int fn_822509A0();
extern int fn_82359C18();
extern int fn_82F565A0();
extern int fn_82F56D40();
extern int fn_82F58670();
extern int fn_82F63108();
extern unsigned int stack0x0000001c;


void fn_82F58960(int param_1,int *param_2)

{
  unsigned int *puVar1;
  int iVar2;
  int *piStack0000001c;
  unsigned int auStack_b00 [4];
  unsigned char auStack_af0 [16];
  int *piStack_ae0;
  unsigned char auStack_ad0 [48];
  unsigned char auStack_aa0 [2696];
  
  piStack0000001c = param_2;
  fn_82F56D40(auStack_b00,param_1,&stack0x0000001c);
  if (auStack_b00[0] != *(unsigned int *)(param_1 + 4)) {
    iVar2 = fn_82F58670(param_1,&stack0x0000001c);
    (**(int (***)())(*param_2 + 8))(param_2,auStack_ad0);
    puVar1 = *(unsigned int **)(iVar2 + 4);
    auStack_b00[0] = *puVar1;
    while( true ) {
      if ((unsigned __int64)auStack_b00[0] == ZEXT48(puVar1)) break;
      fn_82F565A0(auStack_af0,(unsigned __int64)auStack_b00[0] + 0x18);
      (**(int (***)())(*param_2 + 4))(param_2,auStack_aa0);
      if (piStack_ae0 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      (**(int (***)())(*piStack_ae0 + 4))(piStack_ae0,auStack_ad0,0);
      fn_82359C18(auStack_af0);
      fn_822509A0(auStack_b00);
      puVar1 = *(unsigned int **)(iVar2 + 4);
    }
  }
  return;
}

