extern int fn_825529B0(int);
extern void fn_82552AD8(int, char *, float);
extern char lbl_8327FB00[];

void fn_8254F190(int param_1, float param_2)
{
  if (*(unsigned *)(param_1 + 4) != 0 && *(int *)(param_1 + 0x1c8) != 0) {
    *(float *)(param_1 + 0x1b8) = param_2;
    if (fn_825529B0(param_1 + 0x1a0) != 0) {
      fn_82552AD8(param_1 + 0x1a0, lbl_8327FB00 + 0x78, *(float *)(param_1 + 0x1b8));
    }
  }
}
