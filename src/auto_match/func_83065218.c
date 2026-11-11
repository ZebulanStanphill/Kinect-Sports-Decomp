extern int fn_83064FD8(int, unsigned int, int);
extern int fn_830670A8();
extern void fn_83068C08(void);

int fn_83065218(int param_1, unsigned int param_2, int param_3, unsigned int param_4, int param_5, int param_6)
{
  if (param_2 != 0) {
    unsigned int v = param_4 ? param_4 : fn_830670A8();
    *(unsigned int *)(param_1 + 0x28) = v;
    *(void **)(param_1 + 0x14) = (void *)fn_83068C08;
    *(int *)(param_1 + 0x18) = param_6;
    *(int *)(param_1 + 0x20) = param_5;
    *(char *)(param_1 + 0x24) = 1;
    return fn_83064FD8(param_1, param_2, param_3);
  }
  return 0;
}
