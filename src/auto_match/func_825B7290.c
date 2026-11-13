extern int fn_82522D98();
extern int fn_82569B10();
extern int fn_825B3A50();
extern int fn_825BCD10();


void fn_825B7290(void)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  
  fn_825B3A50(2,0xffffffff8260bea0,0,0xffffffff8260bef0);
  fn_825B3A50(0x20,0xffffffff8255fc70,0,0xffffffff82ba02a8);
  fn_825B3A50(1,0xffffffff82547ea0,0,0xffffffff82ba02a8);
  fn_825B3A50(4,0xffffffff82574110,0xffffffff82574180,0xffffffff825741f8);
  fn_825B3A50(5,0xffffffff825a4d38,0,0xffffffff825a4dd0);
  fn_825B3A50(8,0xffffffff82559818,0,0xffffffff82559890);
  fn_825B3A50(0x73,0xffffffff82559818,0,0xffffffff82559890);
  fn_825B3A50(0x16,0xffffffff825e4990,0,0xffffffff82ba02a8);
  fn_825B3A50(0x11,0xffffffff825fd970,0,0xffffffff82ba02a8);
  fn_825B3A50(0xe,0xffffffff8260bef8,0xffffffff8260c0d8,0xffffffff8260bf98);
  fn_825B3A50(0x61,0,0,0);
  fn_825B3A50(0x41,0xffffffff8260c0d8,0,0xffffffff82ba02a8);
  fn_825B3A50(0x42,0xffffffff8260c0d8,0,0xffffffff82ba02a8);
  fn_825B3A50(0x6e,0xffffffff8260c000,0xffffffff8260c0d8,0xffffffff8260c0f0);
  fn_825B3A50(0x6a,0,0,0);
  puVar1 = (unsigned int *)fn_82569B10();
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  uVar2 = fn_825BCD10(0x400,0x2c);
  iVar3 = fn_82569B10();
  *(unsigned int *)(iVar3 + 100) = uVar2;
  iVar3 = fn_82569B10();
  iVar4 = fn_82569B10();
  *(unsigned int *)(iVar3 + 0x3c) = **(unsigned int **)(iVar4 + 0x14);
  iVar3 = fn_82569B10();
  *(unsigned char *)(iVar3 + 0x40) = 0;
                    /* WARNING: Subroutine does not return */
  fn_82522D98(0x2010);
}

