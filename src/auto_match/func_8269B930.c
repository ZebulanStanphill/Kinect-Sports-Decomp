extern unsigned int *auStack_20;
extern int fn_8267BED0();


void fn_8269B930(int param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int auStack_20 [2];
  
  puVar1 = *(unsigned int **)(param_1 + 0x84);
  if (puVar1 == (unsigned int *)0x0) {
    auStack_20[0] = 0x143;
    puVar1 = (unsigned int *)fn_8267BED0(param_1,0x38,auStack_20);
    if (puVar1 == (unsigned int *)0x0) {
      puVar1 = (unsigned int *)0x0;
    }
    else {
      *puVar1 = *param_2;
      puVar1[1] = param_2[1];
      *(unsigned __int64 *)(puVar1 + 2) = *(unsigned __int64 *)(param_2 + 2);
      *(unsigned __int64 *)(puVar1 + 4) = *(unsigned __int64 *)(param_2 + 4);
      *(unsigned __int64 *)(puVar1 + 6) = *(unsigned __int64 *)(param_2 + 6);
      puVar1[8] = param_2[8];
      puVar1[9] = param_2[9];
      puVar1[10] = param_2[10];
      puVar1[0xb] = param_2[0xb];
      puVar1[0xc] = param_2[0xc];
      puVar1[0xd] = param_2[0xd];
    }
    *(unsigned int **)(param_1 + 0x84) = puVar1;
  }
  else {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    *(unsigned __int64 *)(puVar1 + 2) = *(unsigned __int64 *)(param_2 + 2);
    *(unsigned __int64 *)(puVar1 + 4) = *(unsigned __int64 *)(param_2 + 4);
    *(unsigned __int64 *)(puVar1 + 6) = *(unsigned __int64 *)(param_2 + 6);
    puVar1[8] = param_2[8];
    puVar1[9] = param_2[9];
    puVar1[10] = param_2[10];
    puVar1[0xb] = param_2[0xb];
    puVar1[0xc] = param_2[0xc];
    puVar1[0xd] = param_2[0xd];
  }
  return;
}

