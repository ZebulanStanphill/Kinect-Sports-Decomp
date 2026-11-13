typedef unsigned char bool;
extern int fn_8223FDB8();
extern int fn_822EF4E0();


int fn_8223FD30(int param_1,int *param_2)

{
  fn_822EF4E0();
  if ((*(int *)((int)param_2 + *(int *)(*param_2 + 4) + 0xc) == 0) &&
     (*(int *)((int)param_2 + *(int *)(*param_2 + 4) + 0x3c) != 0)) {
    fn_8223FDB8(*(int *)((int)param_2 + *(int *)(*param_2 + 4) + 0x3c));
  }
  *(bool *)(param_1 + 4) = *(int *)((int)param_2 + *(int *)(*param_2 + 4) + 0xc) == 0;
  return param_1;
}

