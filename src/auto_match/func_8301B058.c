#define true 1
extern int fn_830198B8();
extern int fn_83019B78();


unsigned int * fn_8301B058(int param_1,int param_2)

{
  int iVar1;
  char cVar4;
  unsigned int *puVar2;
  unsigned int *puVar3;
  
  puVar3 = (unsigned int *)(param_1 + 4);
  iVar1 = *(int *)(param_2 + 0xc);
  puVar2 = (unsigned int *)*puVar3;
  do {
    if (puVar2 == (unsigned int *)0x0) {
fn_83019B78:
      cVar4 = fn_830198B8();
      if (cVar4 == '\0') {
        puVar2 = (unsigned int *)0x0;
      }
      else {
        if (*(unsigned int **)(param_1 + 8) == (unsigned int *)0x0) {
          *puVar3 = *(unsigned int *)(param_1 + 0xc);
        }
        else {
          **(unsigned int **)(param_1 + 8) = *(unsigned int *)(param_1 + 0xc);
        }
        puVar2 = *(unsigned int **)(param_1 + 0xc);
        *(unsigned int **)(param_1 + 8) = puVar2;
        *(unsigned int *)(param_1 + 0xc) = *puVar2;
        *puVar2 = 0;
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        puVar2 = (unsigned int *)(*(int *)(param_1 + 8) + 4);
        *(int *)(*(int *)(param_1 + 8) + 4) = iVar1;
      }
      return puVar2;
    }
    if (puVar2[1] == iVar1) {
      if (puVar2 != (unsigned int *)0xfffffffc) {
        return puVar3;
      }
      goto fn_83019B78;
    }
    puVar2 = (unsigned int *)*puVar2;
  } while( true );
}

