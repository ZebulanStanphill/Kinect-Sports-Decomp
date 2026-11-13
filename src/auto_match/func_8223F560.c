extern int fn_8223F508();


unsigned int * fn_8223F560(unsigned int *param_1,int param_2)

{
  *param_1 = **(unsigned int **)(param_2 + 0x30);
  fn_8223F508(*param_1);
  return param_1;
}

