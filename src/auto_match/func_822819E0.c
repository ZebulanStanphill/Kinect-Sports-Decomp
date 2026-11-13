extern unsigned int *auStack_10e0;
extern unsigned int *auStack_12de;
extern unsigned int *auStack_1300;
extern int fn_822315A0();
extern int fn_8226D2A8();
extern int fn_82279768();
extern int fn_822C5B18();
extern int fn_823F2E20();
extern int fn_8265C9E0();
extern int fn_82F691F0();
extern unsigned int lbl_820E975C;
extern unsigned int lbl_821A8D8C;
extern unsigned int uStack_12e0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_822819E0(int param_1,unsigned int *param_2)

{
  unsigned __int64 uVar1;
  unsigned int *puStack_1310;
  unsigned int *puStack_130c;
  unsigned char auStack_1300 [32];
  unsigned short uStack_12e0;
  unsigned char auStack_12de [510];
  unsigned char auStack_10e0 [4304];
  
  puStack_1310 = (unsigned int *)*param_2;
  *(unsigned int **)(param_1 + 100) = puStack_1310;
  fn_8226D2A8(auStack_10e0);
  puStack_130c = (unsigned int *)fn_8265C9E0(0x140);
  if (puStack_130c == (unsigned int *)0x0) {
    puStack_130c = (unsigned int *)0x0;
  }
  else {
    puStack_130c[1] = 1;
    puStack_130c[2] = 1;
    *puStack_130c = &lbl_821A8D8C;
    if (puStack_130c + 4 != (unsigned int *)0x0) {
      uVar1 = fn_822C5B18(auStack_1300,param_1 + 0x48);
      fn_82279768(puStack_130c + 4,&puStack_1310,param_1 + 0x2c,1,1,uVar1,0,1);
    }
  }
  puStack_1310 = puStack_130c + 4;
  fn_823F2E20(auStack_10e0,&puStack_1310);
  if (puStack_130c != (unsigned int *)0x0) {
    fn_822315A0();
  }
  uStack_12e0 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_12de,0,0x1fe);
}

