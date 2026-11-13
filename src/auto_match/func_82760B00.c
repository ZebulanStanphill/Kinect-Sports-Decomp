typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8275D3A8();
extern int fn_8275FD58();


void fn_82760B00(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int aiStack_20 [2];
  
  fn_8275FD58(aiStack_20,param_1);
  do {
    if (*(unsigned char *)(aiStack_20[0] + 0x20) == 1) {
LAB_82760b40:
      bVar1 = true;
    }
    else {
      bVar1 = false;
      if ((*(unsigned char *)(aiStack_20[0] + 0x20) & 0x80) == 0) goto LAB_82760b40;
    }
    if (bVar1) {
      return;
    }
    if (*(char *)(param_1 + 0x20) == -0x7c) {
      iVar2 = *(int *)(param_1 + 100);
      iVar3 = *(int *)(param_1 + 0x68);
LAB_82760b84:
      *(int *)(param_1 + 0x30) = iVar3 + *(int *)(param_1 + 0x30);
      *(int *)(param_1 + 0x2c) = iVar2 + *(int *)(param_1 + 0x2c);
    }
    else if (*(char *)(param_1 + 0x20) == -0x7b) {
      iVar2 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x54);
      iVar3 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x58);
      goto LAB_82760b84;
    }
    fn_8275D3A8(param_1);
  } while( true );
}

