#define true 1
extern unsigned int *auStack_444;
extern unsigned int *auStack_50;
extern int fn_82230218();
extern int fn_82230300();
extern int fn_82250A18();
extern int fn_82485BD8();
extern int fn_82486B08();
extern int fn_82A1DD38();
extern unsigned int iStack_448;
extern unsigned int iStack_44c;
extern unsigned int iStack_450;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_34;
extern unsigned int uStack_58;


void fn_8228A420(int param_1)

{
  unsigned __int64 uVar1;
  int iVar2;
  __int64 lVar3;
  int *piVar4;
  struct { int first; int second; } stack_pair_450;

  int iStack_448;
  unsigned char auStack_444 [1004];
  unsigned __int64 uStack_58;
  unsigned char auStack_50 [28];
  unsigned char uStack_34;
  
  piVar4 = (int *)(param_1 + 0x6c0);
  lVar3 = 0;
  do {
    fn_82486B08(&stack_pair_450.first);
    stack_pair_450.first = piVar4[-6];
    if (stack_pair_450.first == 3) {
      if (*(__int64 *)(piVar4 + -4) == 0) {
        uStack_58 = 0;
        uStack_34 = 1;
      }
      else {
LAB_8228a478:
        uVar1 = (**(int (***)())(**(int **)(*piVar4 + 0x8c0) + 100))();
        fn_82A1DD38(auStack_444,uVar1,1000);
        stack_pair_450.second = piVar4[-5];
        iStack_448 = piVar4[1];
        uStack_58 = *(unsigned __int64 *)(piVar4 + -4);
        uStack_34 = 0;
        fn_82230218(auStack_50,piVar4 + 2,0,0xffffffffffffffff);
      }
    }
    else if (stack_pair_450.first != 4) goto LAB_8228a478;
    fn_82A1DD38(lVar3 + (unsigned __int64)*(unsigned int *)(param_1 + 0x11f0) + 0x838,&stack_pair_450.first,0x420);
    fn_82230300(auStack_50,1,0);
    lVar3 = lVar3 + 0x420;
    piVar4 = piVar4 + 0x10;
    if (0x107f < (int)lVar3) {
      iVar2 = lbl_832975B0;
      if (lbl_832975B0 == 0) {
        iVar2 = fn_82250A18();
      }
      fn_82485BD8(*(unsigned int *)(param_1 + 0x11f0),*(char *)(iVar2 + 4) == '\0');
      return;
    }
  } while( true );
}

