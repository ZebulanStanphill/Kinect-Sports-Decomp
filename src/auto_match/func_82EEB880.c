extern char lbl_821601C8[];
extern char lbl_821601B4[];
extern char lbl_82160160[];
extern char lbl_82160134[];
extern void fn_82F40718(void *p);

void fn_82EEB880(char **param_1)
{
  param_1[0] = lbl_821601C8;
  param_1[1] = lbl_821601B4;
  *(char **)((char *)param_1 + ((int *)param_1[2])[1] + 8) = lbl_82160160;
  *(char **)((char *)param_1 + ((int *)param_1[2])[2] + 8) = lbl_82160134;
  { int off = ((int *)param_1[2])[1]; *(int *)((char *)param_1 + off + 4) = off - 0x44; }
  { int off = ((int *)param_1[2])[2]; *(int *)((char *)param_1 + off + 4) = off - 0x50; }
  fn_82F40718(param_1 + 1);
}
