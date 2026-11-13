extern int fn_83068418();


unsigned int fn_83065A08(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  
  if (param_2 != 0) {
    if ((*(int *)(param_2 + 0x34) != 0) && (cVar1 = fn_83068418(), cVar1 == '\0')) {
      return *(unsigned int *)(param_2 + 0x34);
    }
    if ((*(int *)(param_2 + 0x30) != 0) && (cVar1 = fn_83068418(), cVar1 == '\0')) {
      return *(unsigned int *)(param_2 + 0x30);
    }
    while ((piVar2 = (int *)(param_2 + 0x2c), *(int *)(param_2 + 0x2c) != 0 &&
           (param_2 != *(int *)(param_1 + 4)))) {
      if ((*(int *)(*piVar2 + 0x30) != 0) &&
         ((*(int *)(*piVar2 + 0x30) != param_2 && (cVar1 = fn_83068418(), cVar1 == '\0')))) {
        return *(unsigned int *)(*piVar2 + 0x30);
      }
      param_2 = *piVar2;
    }
  }
  return 0;
}

