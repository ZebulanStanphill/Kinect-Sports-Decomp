extern int fn_8267C4F0();
extern int fn_82687270();


void fn_82759498(unsigned char *param_1)

{
  if (((*param_1 & 0x10) != 0) && (*(unsigned int *)(param_1 + 4) != 0)) {
    fn_8267C4F0(*(unsigned int *)(param_1 + 4));
  }
  if ((*(int *)(param_1 + 8) == 0) && (*(unsigned int *)(param_1 + 0xc) != 0)) {
    fn_82687270(*(unsigned int *)(param_1 + 0xc));
  }
  return;
}

