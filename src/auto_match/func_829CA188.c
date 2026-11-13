extern int fn_82F691F0();


unsigned __int64 fn_829CA188(void)

{
  int in_r8;
  
  if (*(int *)(in_r8 + 0x124) != 0) {
    return 0xffffffffc0000001;
  }
  *(unsigned int *)(in_r8 + 0x124) = 1;
  sync(0);
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(in_r8 + 0x164,0,0x2c);
}

