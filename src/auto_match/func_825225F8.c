extern int fn_82230040();
extern int fn_825226C8();
extern int fn_8259A4C8();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821CAA78;
extern unsigned int lbl_83265A24;
extern unsigned int uStack_5c;


unsigned int *
fn_825225F8(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4,
             unsigned int *param_5,unsigned int *param_6,unsigned __int64 param_7)

{
  unsigned int *puVar1;
  __int64 lVar2;
  unsigned int *puVar3;
  unsigned char **ppuStack_60;
  unsigned int uStack_5c;
  
  puVar1 = (unsigned int *)fn_8265C9E0(0xd4);
  if (puVar1 != (unsigned int *)0x0) {
    puVar3 = puVar1 + 3;
    puVar1[1] = 1;
    puVar1[2] = 1;
    *puVar1 = &lbl_821CAA78;
    if (puVar3 != (unsigned int *)0x0) {
      lVar2 = param_7 + 4;
      if ((param_7 & 0xffffffff) == 0) {
        lVar2 = 0;
      }
      fn_8259A4C8(puVar3,*param_2,*param_3,*param_4,lbl_83265A24,*param_5,*param_6,lVar2);
    }
    *param_1 = 0;
    param_1[1] = 0;
    fn_825226C8(param_1,puVar3,puVar1);
    return param_1;
  }
  uStack_5c = 0;
  ppuStack_60 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_60);
}

