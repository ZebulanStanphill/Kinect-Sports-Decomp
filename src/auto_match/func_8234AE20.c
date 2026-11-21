extern unsigned int fn_8234B400;
extern unsigned int lbl_821B1C70;
extern unsigned int lbl_821C2424;

/* WARNING: Inlined function: __savegprlr_26 */

unsigned int *
fn_8234AE20(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int param_4)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  unsigned char *puStack_60;
  int (**pcStack_5c)();
  unsigned int *puStack_58;
  unsigned int uStack_54;
  unsigned char **ppuStack_50;
  
  *param_1 = param_4;
  puVar5 = param_1 + 1;
  fn_82230110(puVar5,0xffffffff821b1acc);
  puVar3 = (unsigned int *)0x0;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar6 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0x40000000;
  param_1[0xe] = 1;
  param_1[0xf] = 0;
  param_1[0x12] = &lbl_821C2424;
  param_1[0x18] = 0;
  puVar4 = puVar5;
  if (0xf < (unsigned int)param_1[6]) {
    puVar4 = (unsigned int *)*puVar5;
  }
  iVar2 = fn_8234B190(param_1,puVar4);
  if (iVar2 != 0) {
    uVar1 = fn_827F2038(0x110);
    if ((uVar1 & 0xffffffff) != 0) {
      puVar3 = (unsigned int *)fn_827F3070(uVar1,param_2);
    }
    puVar4 = (unsigned int *)param_1[8];
    if (puVar3 != puVar4) {
      if (puVar4 != (unsigned int *)0x0) {
        (**(int (***)())*puVar4)(puVar4,1);
      }
      param_1[8] = puVar3;
    }
    if (0xf < (unsigned int)param_1[6]) {
      puVar5 = (unsigned int *)*puVar5;
    }
    fn_8234B0C8(uVar6,param_1,puVar5);
    ppuStack_50 = &puStack_60;
    uStack_54 = puStack_58;
    puStack_60 = &lbl_821B1C70;
    pcStack_5c = fn_8234B400;
    puStack_58 = param_1;
    fn_82511668(param_1 + 0x12,&puStack_60);
    fn_825113E0(param_3,0xd,param_1 + 0x12);
  }
  return param_1;
}
