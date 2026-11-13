extern int fn_822315A0(void *);

unsigned int * fn_828BB4F8(unsigned int *param_1,int param_2,unsigned int param_3)
{
  unsigned int *puVar1;
  unsigned int iVar2;
  char *uVar3;
  unsigned char cVar4;
  unsigned int * it;
  
  puVar1 = *(unsigned int **)(param_2 + 0xfc);
  it = (unsigned int *)*puVar1;
  while (it != puVar1) {
    if (*(int *)(it[10] + 8) == param_3) {
      iVar2 = it[0xb];
      uVar3 = it[10];
      *param_1 = 0;
      param_1[1] = 0;
      if (iVar2 != 0) {
        cVar4 = fn_8223AAC0(iVar2);
        if (cVar4 != 0) {
        if (param_1[1] != 0) fn_822315A0(param_1[1]);
        param_1[1] = iVar2;
        *param_1 = uVar3;
        }
      }
      return param_1;
    }
    fn_828A1958(&it);
  }
  *param_1 = 0; param_1[1] = 0;
  return param_1;
}
