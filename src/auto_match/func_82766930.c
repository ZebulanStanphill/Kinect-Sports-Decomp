extern unsigned int lbl_82014C50;


__int64 fn_82766930(unsigned int *param_1,int param_2,unsigned char *param_3)

{
  unsigned char bVar1;
  unsigned __int64 uVar2;
  
  bVar1 = *(unsigned char *)(*(int *)*param_1 + param_2);
  *param_3 = bVar1;
  bVar1 = (&lbl_82014C50)[bVar1 & 0xf];
  for (uVar2 = (unsigned __int64)bVar1; uVar2 != 0; uVar2 = uVar2 - 1) {
    param_2 = param_2 + 1;
    param_3 = param_3 + 1;
    *param_3 = *(unsigned char *)(*(int *)*param_1 + param_2);
  }
  return (unsigned __int64)bVar1 + 1;
}

