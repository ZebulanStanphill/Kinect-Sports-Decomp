extern unsigned int *auStack_38;
extern int fn_82569A68();
extern int fn_825BC748();
extern int fn_82536288();


void fn_82566E58(int param_1,unsigned int *param_2)

{
  unsigned char auStack_38 [40];

  fn_82569A68(param_1,0);
  if (*(int *)(param_1 + 0x7c) != 0) {
    fn_825BC748(*param_2);
    (**(int (***)())(*(int *)(param_1 + 0x7c) + 0x178))(*(int *)(param_1 + 0x7c));
    *(unsigned int *)(param_1 + 0x7c) = 0;
  }
                    /* WARNING: Subroutine does not return */
  fn_82536288(auStack_38,0,4);
}
