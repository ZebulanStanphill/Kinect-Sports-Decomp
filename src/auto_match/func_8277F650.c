extern int fn_8277F5D8();
void *memcpy(void *d, const void *s, unsigned int n);


void fn_8277F650(int param_1,int param_2,int param_3)

{
  unsigned int *piVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  
  if (*(char *)(*(int *)(param_1 + 0x24) + param_3) != '\0') {
    piVar1 = *(int **)(param_2 + 4);
    if (piVar1 == (int *)0x0) {
      uVar3 = fn_8277F5D8(param_1,param_3);
      *(unsigned int *)(param_2 + 4) = uVar3;
    }
    else if ((piVar1[4] == param_3) || (*piVar1 == 0)) {
      piVar1[4] = param_3;
    }
    else {
      uVar3 = fn_8277F5D8(param_1,param_3);
      memcpy((void *)uVar3,*(void **)(param_2 + 4),0x18);
      puVar2 = *(unsigned int **)(param_2 + 4);
      *puVar2 = 0;
      puVar2[1] = 0xffffffff;
      puVar2[2] = 0xffffffff;
      puVar2[3] = 0xffffffff;
      puVar2[4] = param_3;
      puVar2[5] = 0;
    }
  }
  return;
}

