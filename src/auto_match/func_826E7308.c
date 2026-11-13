extern unsigned int *auStack_20;
extern int fn_8267BED0();
extern int fn_826E6C18();
extern unsigned int lbl_8200D660;


int *fn_826E7308(int *param_1, int *param_2)
{
  unsigned char cVar3;
  unsigned int uVar1;
  int uVar2;
  unsigned int auStack_20[2];

  param_1[1] = 1;
  *param_1 = (int)&lbl_8200D660;
  param_1[2] = 0;
  if (param_2 != 0) {
    cVar3 = (*(unsigned char (**)(int *))(*param_2 + 8))(param_2);
    if (cVar3 != 0) {
      auStack_20[0] = 2;
      uVar1 = fn_8267BED0(param_1, 0x1858, auStack_20);
      if (uVar1 != 0) {
        uVar2 = fn_826E6C18(uVar1, param_2);
      }
      else {
        uVar2 = 0;
      }
      param_1[2] = uVar2;
    }
  }
  return param_1;
}
