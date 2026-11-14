extern int fn_82230110();
extern int fn_82230300();
extern int fn_822B2888();
extern int fn_82579B78();
extern int XMemSet();
extern unsigned int lbl_82195518;
extern unsigned int lbl_82195A80;
extern unsigned int lbl_82195A88;
extern unsigned int lbl_82195AD0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8245B248(int param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  
  *(unsigned int *)(param_1 + 0x38) = 0;
  *(unsigned int *)(param_1 + 0x3c) = 0;
  uVar3 = lbl_82195518;
  *(unsigned int *)(param_1 + 0x60) = 0;
  uVar2 = lbl_82195A88;
  uVar1 = lbl_82195A80;
  *(unsigned __int64 *)(param_1 + 0x40) = uVar3;
  *(unsigned __int64 *)(param_1 + 0x48) = uVar1;
  *(unsigned __int64 *)(param_1 + 0x50) = uVar3;
  *(unsigned __int64 *)(param_1 + 0x58) = uVar2;
  fn_82230300(param_1 + 100,0,0);
  fn_82230300(param_1 + 0x80,0,0);
  *(unsigned int *)(param_1 + 0xc4) = 0;
  *(unsigned int *)(param_1 + 200) = 0;
  *(unsigned int *)(param_1 + 0xcc) = 0;
  *(unsigned int *)(param_1 + 0xd8) = 0;
  *(unsigned int *)(param_1 + 0xec) = 0;
  fn_82230300(param_1 + 0xf0,0,0);
  *(unsigned int *)(param_1 + 0x10c) = 0;
  *(unsigned int *)(param_1 + 0x110) = 0;
  *(unsigned int *)(param_1 + 0x114) = 0;
  *(unsigned __int64 *)(param_1 + 0x120) = uVar3;
  *(unsigned __int64 *)(param_1 + 0x128) = uVar3;
  *(unsigned int *)(param_1 + 0x534) = 0;
  *(unsigned int *)(param_1 + 0x53c) = 0;
  *(unsigned int *)(param_1 + 0x540) = 0;
  *(unsigned int *)(param_1 + 0x558) = 0;
  *(unsigned int *)(param_1 + 0x55c) = 0;
  fn_822B2888(param_1 + 0xf0,0x400);
  *(unsigned __int64 *)(param_1 + 0x5b8) = uVar3;
  *(unsigned int *)(param_1 + 0x560) = 0;
  *(unsigned int *)(param_1 + 0x564) = 0;
  *(unsigned int *)(param_1 + 0x570) = 0;
  *(unsigned int *)(param_1 + 0x574) = 0;
  *(unsigned int *)(param_1 + 0x578) = 0;
  *(unsigned int *)(param_1 + 0x57c) = 1;
  *(unsigned int *)(param_1 + 0x580) = 0;
  *(unsigned int *)(param_1 + 0x584) = 0;
  *(unsigned int *)(param_1 + 0x588) = 0;
  *(unsigned int *)(param_1 + 0x58c) = 0;
  *(unsigned int *)(param_1 + 0x5c0) = 0;
  fn_82230300(param_1 + 0x5dc,0,0);
  fn_82230300(param_1 + 0x5f8,0,0);
  *(unsigned int *)(param_1 + 0x63c) = 0;
  fn_82230110(param_1 + 0x640,0xffffffff82196582);
  uVar1 = lbl_82195AD0;
  *(unsigned short *)(param_1 + 0x65c) = 0;
  *(unsigned __int64 *)(param_1 + 0x670) = uVar1;
  *(unsigned __int64 *)(param_1 + 0x680) = uVar3;
  *(unsigned __int64 *)(param_1 + 0x688) = uVar3;
  *(unsigned short *)(param_1 + 0x65e) = 0;
  *(unsigned int *)(param_1 + 0x660) = 1;
  *(unsigned int *)(param_1 + 0x664) = 1;
  *(unsigned int *)(param_1 + 0x668) = 0x8000;
  *(unsigned int *)(param_1 + 0x66c) = 0x8000;
  *(unsigned short *)(param_1 + 0x690) = 0xabab;
  *(unsigned int *)(param_1 + 0x698) = 0;
  *(unsigned int *)(param_1 + 0x69c) = 0;
  *(unsigned int *)(param_1 + 0x6a0) = 0;
  *(unsigned int *)(param_1 + 0x6a4) = 0;
  *(unsigned int *)(param_1 + 0x6a8) = 0;
  *(unsigned int *)(param_1 + 0x6ac) = 0;
  *(unsigned int *)(param_1 + 0x6b0) = 0;
  *(unsigned int *)(param_1 + 0x6b4) = 1;
  fn_82579B78(param_1 + 0x6c8);
  *(unsigned int *)(param_1 + 0x71c) = 0;
  *(unsigned int *)(param_1 + 0x718) = 3;
                    /* WARNING: Subroutine does not return */
  XMemSet(param_1 + 0x590,0,0x28);
}

