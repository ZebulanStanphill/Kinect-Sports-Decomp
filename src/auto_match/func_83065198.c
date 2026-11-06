extern int fn_83064FD8(int, unsigned int, int);
extern int fn_830670A8();
extern void fn_83068C20(void);
extern void fn_83068C40(void);

int fn_83065198(int param_1, unsigned int param_2, int param_3, unsigned int param_4, int param_5)
{
  if (param_2 != 0) {
    unsigned int v = param_4 ? param_4 : fn_830670A8();
    *(unsigned int *)(param_1 + 0x28) = v;
    *(int *)(param_1 + 0x20) = param_5;
    *(void **)(param_1 + 0x14) = (void *)fn_83068C20;
    *(void **)(param_1 + 0x18) = (void *)fn_83068C40;
    *(char *)(param_1 + 0x24) = 0;
    return fn_83064FD8(param_1, param_2, param_3);
  }
  return 0;
}
