typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82518FF0();
extern int fn_828223C8();
extern unsigned unsigned int iStack_40;

static unsigned int next(unsigned int p) { unsigned int n; fn_828223C8(p,&n); return n; }

void fn_82827308(int param_1,int *param_2)

{
  unsigned int *puVar1;
  bool bVar2;
  int iVar3;
  unsigned int iStack_40;
  unsigned int * apuStack_3c;
  
  iVar3 = *(int *)(param_1 + 0x28);
  param_1 = param_1 + 0x2f4;
  while (param_1 = next(param_1), (unsigned int)param_1 != 0) {
    bVar2 = false;
    puVar1 = *(unsigned int **)(*(int *)(param_1 + 0x28) + 4);
    apuStack_3c = (unsigned int *)*puVar1;
    while (apuStack_3c != puVar1) {
      if ((void *)apuStack_3c[5] != 0) {
        bVar2 = true;
      }
      fn_82518FF0(&apuStack_3c);
    }
    if (!bVar2) {
      iVar3 = iVar3 + -1;
    }
  }
  *param_2 = iVar3;
  return;
}

