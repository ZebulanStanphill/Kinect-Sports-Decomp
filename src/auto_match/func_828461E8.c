extern int fn_82631578();
extern int fn_8283F728();
extern unsigned int iStack00000014;
extern unsigned int iStack00000034;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack0000003c;
extern unsigned int uStack00000044;
extern unsigned int uStack0000004c;


void fn_828461E8(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,int param_5,
                  unsigned int param_6,unsigned int param_7,unsigned int param_8)

{
  int iStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned int uStack0000002c;
  int iStack00000034;
  unsigned int uStack0000003c;
  unsigned int uStack00000044;
  unsigned int uStack0000004c;
  
  iStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  iStack00000034 = param_5;
  uStack0000003c = param_6;
  uStack00000044 = param_7;
  uStack0000004c = param_8;
  fn_8283F728(**(unsigned int **)(*(int *)(param_1 + 0x24) + param_5 * 0xc),param_3);
                    /* WARNING: Subroutine does not return */
  fn_82631578(uStack00000024,
                    *(unsigned int *)
                     (**(int **)(*(int *)(iStack00000014 + 0x24) + iStack00000034 * 0xc) + 8));
}

