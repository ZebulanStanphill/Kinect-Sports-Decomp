#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82F8F000();
extern int fn_82F90AC8();
extern int fn_82F938B0();
extern unsigned int lbl_8216B72C;
extern unsigned int lbl_8216B770;
extern unsigned int lbl_8216BC9C;


void fn_82F909F0(unsigned int *param_1)

{
  unsigned int *puStack00000014;
  
  *param_1 = &lbl_8216BC9C;
  param_1[1] = &lbl_8216B72C;
  param_1[2] = &lbl_8216B770;
  puStack00000014 = param_1;
  fn_82F90AC8(param_1 + 0x1a);
  fn_82F8F000(ZEXT48(puStack00000014) + 0x30);
  fn_82F938B0(ZEXT48(puStack00000014) + 0xc);
  return;
}

