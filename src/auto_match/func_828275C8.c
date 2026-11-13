extern int fn_82518FF0();
extern int fn_828223C8();
extern char *iStack_40;


static char *next(char *cursor) { char *out; fn_828223C8(cursor,&out); return out; }
void fn_828275C8(char *param_1,int *param_2,int *param_3)

{
  unsigned int *puVar1;
  int iVar2;
  int iVar3;
  char *iStack_40;
  unsigned int * apuStack_3c;
  
  param_1 = param_1 + 0x2f4;
  iVar3 = 0;
  iVar2 = 0;
  while ((param_1=next(param_1)) != 0) {
    puVar1 = *(unsigned int **)(*(int *)(param_1 + 0x28) + 4);
    apuStack_3c = (unsigned int *)*puVar1;
    while (apuStack_3c != puVar1) {
      iVar3 = (unsigned int)*(unsigned short *)((int)apuStack_3c + 0x1e) + iVar3;
      iVar2 = apuStack_3c[5] * (unsigned int)*(unsigned short *)((int)apuStack_3c + 0x1e) + iVar2;
      fn_82518FF0(&apuStack_3c);
    }
  }
  *param_2 = iVar3;
  *param_3 = iVar2;
  return;
}

