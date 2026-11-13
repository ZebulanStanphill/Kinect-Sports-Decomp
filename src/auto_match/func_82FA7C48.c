extern int fn_82FF7F18();


int * fn_82FA7C48(unsigned int *param_1)

{
  int *piVar1;
  unsigned char cVar2;
  
  cVar2 = fn_82FF7F18();
  if (cVar2 != '\0') {
    if (*param_1 == 0) {
      param_1[1] = param_1[2];
    }
    piVar1 = (int *)param_1[2];
    param_1[2] = *piVar1;
    *piVar1 = *param_1;
    *param_1 = (int)piVar1;
    param_1[5] = param_1[5] + 1;
    return piVar1 + 1;
  }
  return (int *)0x0;
}

