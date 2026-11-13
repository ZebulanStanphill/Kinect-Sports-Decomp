typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82FF5198();
extern int fn_83037A88();
extern int fn_83037B38();
extern unsigned int lbl_83264304;


void fn_8300F6F8(int param_1)

{
  short sVar1;
  int *piVar2;
  bool bVar3;
  unsigned short *puVar4;
  
  RtlEnterCriticalSection(param_1 + 4);
  do {
    if (((*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x38)) ||
        (*(int *)(param_1 + 0x34) != *(int *)(param_1 + 0x3c))) ||
       (bVar3 = true, *(char *)(param_1 + 0x40) != '\0')) {
      bVar3 = false;
    }
    if (bVar3) {
      RtlLeaveCriticalSection(param_1 + 4);
      return;
    }
    puVar4 = (unsigned short *)fn_83037B38(param_1 + 0x20);
    sVar1 = puVar4[1];
    if (sVar1 == 1) {
      fn_82FF5198(lbl_83264304,*(unsigned int *)(puVar4 + 4));
      piVar2 = *(int **)(puVar4 + 0xe);
LAB_8300f79c:
      (**(int (***)())(*piVar2 + 8))();
    }
    else if ((sVar1 != 6) && (sVar1 == 0x1f)) {
      piVar2 = *(int **)(puVar4 + 2);
      goto LAB_8300f79c;
    }
    fn_83037A88(param_1 + 0x20,*puVar4);
  } while( true );
}

