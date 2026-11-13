extern float lbl_82006848;
extern char *fn_82CE6150(char *, int, float);
char *fn_82D93B58(char *param_1, int param_2)
{ char b[2]; char *p; char r; float d = lbl_82006848;
  p = fn_82CE6150(&b[0], param_2 + 0x20, d);
  if (*p == 0 || *fn_82CE6150(&b[1], param_2 + 0x60, d) == 0 || (*(char *)(param_2 + 0xa2) != 0 && *(char *)(param_2 + 0xc2) == 0)) r = 0; else r = 1;
  *param_1 = r; return param_1; }
