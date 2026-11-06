int fn_822CF640(int param_1, int param_2)
{
  int a;
  int b;
  int v;
  if (param_2 == 6) return 2;
  if (param_2 == 7) return 3;
  v = *(int *)(param_1 + 0x1c8);
  if (v < 0 || (v > 1 && (v <= 3 || v > 5))) a = 0; else a = 1;
  if (param_2 < 0 || (param_2 > 1 && (param_2 <= 3 || param_2 > 5))) b = 0; else b = 1;
  switch (*(unsigned int *)(param_1 + 0x1cc)) {
  case 4:
    if (a != 0) {
      if (b == 0) return 1;
      break;
    }
  case 1:
    if (b != 0) return 0;
    break;
  case 0:
    if (b == 0) return 1;
    break;
  }
  return 4;
}
