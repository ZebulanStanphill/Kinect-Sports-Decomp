typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8226BD48();
extern int fn_82F63CA0();


void fn_8226B6A8(unsigned __int64 param_1,int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  unsigned int uVar6;
  int *piVar7;
  
  iVar1 = *(int *)(param_2 + 0xc);
  uVar6 = 0;
  if (*(int *)(param_2 + 0x10) - iVar1 >> 2 != 0) {
    iVar5 = 0;
    do {
      (**(int (***)())(**(int **)(iVar5 + iVar1) + 4))(param_1);
      iVar1 = *(int *)(param_2 + 0xc);
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar6 < (unsigned int)(*(int *)(param_2 + 0x10) - iVar1 >> 2));
  }
  fn_8226BD48(param_1,param_2);
  do {
    piVar7 = *(int **)(param_2 + 0xc);
    bVar3 = true;
    if (piVar7 != *(int **)(param_2 + 0x10)) {
      do {
        cVar4 = (**(int (***)())(*(int *)*piVar7 + 0xc))((int *)*piVar7,param_2 + 0x20);
        if ((cVar4 != '\0') && (*(char *)(param_2 + 0x74) != '\0')) {
          puVar2 = (unsigned int *)*piVar7;
          if (puVar2 != (unsigned int *)0x0) {
            (**(int (***)())*puVar2)(puVar2,1);
          }
          fn_82F63CA0(piVar7,piVar7 + 1,(*(int *)(param_2 + 0x10) - (int)(piVar7 + 1) >> 2) << 2);
          bVar3 = false;
          *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -4;
          break;
        }
        piVar7 = piVar7 + 1;
      } while (piVar7 != *(int **)(param_2 + 0x10));
    }
    if (bVar3) {
      return;
    }
  } while( true );
}

