extern unsigned int *auStack_15f;
extern int fn_82E20270();
extern int fn_82E20B48();
extern int fn_82F691F0();


unsigned __int64 fn_82E20C70(int param_1)

{
  unsigned char auStack_15f [351];
  
  if (*(char *)(param_1 + 2) != '\0') {
    return 1;
  }
  fn_82E20B48(param_1);
  fn_82E20270(0xffffffff8214bbec,0xffffffff821c550c,1);
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_15f,0,0xff);
}

