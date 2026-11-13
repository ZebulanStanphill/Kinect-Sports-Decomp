extern unsigned int *auStack_120;
extern int fn_82E1F690();
extern int fn_82F64068();
extern int fn_82F668D8();
extern unsigned int uStack_1d;


void fn_82E206E8(char *param_1)

{
  unsigned char auStack_120 [260];
  unsigned char uStack_1d;
  
  fn_82F64068(auStack_120,0x104,0x103,"%s_%s_%04d.log",*(unsigned int *)(param_1 + 0x10),
                    *(unsigned int *)(param_1 + 0x14),*(unsigned int *)(param_1 + 4));
  if (*param_1 != '\0') {
    fn_82F668D8(auStack_120,0x104,".cmp",4);
  }
  if (param_1[1] != '\0') {
    fn_82F668D8(auStack_120,0x104,".enc",4);
  }
  auStack_120[259] = 0;
  fn_82E1F690(auStack_120);
  return;
}

