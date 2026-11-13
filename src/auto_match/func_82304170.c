extern int fn_822B84C0();
extern int fn_822C6880();
extern int fn_822C72E0();
extern int fn_8250E790();
extern int fn_8250EC68();
extern int fn_8255FA88();
extern int fn_827F6210();
extern int fn_827F6308();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_82304170(double param_1,int param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  double dVar3;
  
  *(float *)(param_2 + 0x58) = (float)(param_1 + (double)*(float *)(param_2 + 0x58));
  if (*(char *)(param_2 + 0xc0) == '\0') {
    fn_8250E790(param_2 + 0x6c);
    *(float *)(*(int *)(param_2 + 0x54) + 0x228) =
         (float)((double)*(float *)(*(int *)(param_2 + 0x54) + 0x228) - param_1);
    dVar3 = (double)ltcg_pool_0_0f;
    if ((double)*(float *)(*(int *)(param_2 + 0x54) + 0x228) < dVar3) {
      fn_8250EC68(param_2 + 0x6c);
      uVar1 = fn_822B84C0(*(unsigned int *)(*(int *)(param_2 + 0x54) + 0x118),
                                (unsigned __int64)*(unsigned int *)(param_2 + 0xac),
                                (unsigned __int64)*(unsigned int *)(param_2 + 0xac) + 4);
      fn_827F6308(uVar1,1);
      fn_827F6210((double)lbl_821CA460,uVar1);
      *(unsigned char *)(param_2 + 0xc0) = 1;
      *(float *)(*(int *)(param_2 + 0x54) + 0x228) = (float)dVar3;
      *(unsigned int *)(param_2 + 0x50) = 1;
      fn_822C6880(*(unsigned int *)(param_2 + 0x24));
    }
  }
  else {
    iVar2 = fn_8255FA88(*(unsigned int *)
                               (*(int *)(*(int *)(*(int *)(param_2 + 0x54) + 0x118) + 0xc) + 0x110))
    ;
    if (iVar2 != 0) {
      fn_822C72E0(param_2,0xffffffff821aeb2c);
    }
  }
  return;
}

