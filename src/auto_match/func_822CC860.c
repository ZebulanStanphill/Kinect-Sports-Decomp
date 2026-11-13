extern int fn_822CD0A8();
extern int fn_825113E0();
extern int fn_82511668();
extern int fn_8251F720();
extern unsigned int lbl_821AD208;
extern unsigned int lbl_821AD20C;
extern unsigned int lbl_821C2424;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_34;


unsigned int *
fn_822CC860(unsigned int *param_1,unsigned int param_2,int *param_3,unsigned int param_4,
             unsigned __int64 param_5,unsigned int param_6)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned char **ppuStack_40;
  int (**pcStack_3c)();
  unsigned int *puStack_38;
  unsigned int uStack_34;
  unsigned char ***pppuStack_30;
  
  param_1[2] = param_2;
  uVar1 = ltcg_pool_0_0f;
  *param_1 = &lbl_821AD208;
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xffffffff;
  param_1[7] = 0;
  param_1[8] = 0;
  puVar2 = param_1 + 0xe;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = param_6;
  param_1[0xd] = param_4;
  param_1[0xe] = &lbl_821C2424;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[4] = 0;
  param_1[6] = 0xffffffff;
  param_1[5] = 0;
  if (*param_3 != 0) {
    uVar1 = fn_8251F720(param_3,0);
    param_1[7] = uVar1;
  }
  pppuStack_30 = &ppuStack_40;
  pcStack_3c = fn_822CD0A8;
  uStack_34 = puStack_38;
  ppuStack_40 = &lbl_821AD20C;
  puStack_38 = param_1;
  fn_82511668(puVar2,&ppuStack_40);
  fn_825113E0(param_5,0x1c,puVar2);
  fn_825113E0(param_5,0x1e,puVar2);
  fn_825113E0(param_5,0x1a,puVar2);
  fn_825113E0(param_5,0x1f,puVar2);
  return param_1;
}

