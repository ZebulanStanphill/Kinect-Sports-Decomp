#define true 1
extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern int fn_82359C18();
extern int fn_82F63108();
extern unsigned int stack0x00000000;


void fn_823599A8(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int *piVar3;
  unsigned char *puVar4;
  unsigned __int64 uVar5;
  int aiStack_80 [8];
  unsigned int auStack_60 [8];
  unsigned char auStack_40 [64];
  
  if (*(int *)(param_2 + 0x10) == 0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    puVar4 = &stack0x00000000 + -0x60;
    if (*(int *)(param_2 + 0x10) != param_2) {
      puVar4 = (unsigned char *)0x0;
    }
    puVar2 = (unsigned int *)
             (**(int (***)())**(unsigned int **)(param_2 + 0x10))(*(unsigned int **)(param_2 + 0x10),puVar4)
    ;
  }
  uVar1 = *(unsigned int *)(param_1 + 0x34);
  uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x30);
  if (puVar2 == (unsigned int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    puVar4 = &stack0x00000000 + -0x80;
    if (puVar2 != (unsigned int *)(&stack0x00000000 + -0x60)) {
      puVar4 = (unsigned char *)0x0;
    }
    piVar3 = (int *)(**(int (***)())*puVar2)(puVar2,puVar4);
  }
  while( true ) {
    if ((uVar5 & 0xffffffff) == (unsigned __int64)uVar1) {
      if ((piVar3 != (int *)0x0) && (piVar3 == (int *)(&stack0x00000000 + -0x80))) {
        (**(int (***)())*piVar3)(piVar3,&stack0x00000000 + -0x40);
      }
      fn_82359C18(&stack0x00000000 + -0x80);
      fn_82359C18(&stack0x00000000 + -0x60);
      fn_82359C18(&stack0x00000000 + -0x40);
      return;
    }
    if (piVar3 == (int *)0x0) break;
    (**(int (***)())(*piVar3 + 4))(piVar3,uVar5);
    uVar5 = uVar5 + 8;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F63108();
}

