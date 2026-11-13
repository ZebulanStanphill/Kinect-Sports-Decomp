extern unsigned int *auStack_6c;
extern int fn_82F691F0();


void fn_822D5B50(int *param_1)

{
  unsigned char auStack_6c [108];
  
  (**(int (***)())(*param_1 + 8))();
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_6c,0,0x38);
}

