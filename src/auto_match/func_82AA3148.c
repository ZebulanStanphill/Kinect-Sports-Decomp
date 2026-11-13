extern int fn_82AA2B30(unsigned int *p1, unsigned int p2, void *p3, void *p4, void *p5,
                       void *p6, void *p7, void *p8, void *p9, void *p10);
extern int fn_82AA27D8(unsigned int *p1, unsigned int p2, void *p3, void *p4, void *p5,
                       void *p6, void *p7, void *p8, void *p9, void *p10);

int fn_82AA3148(unsigned int *param_1, unsigned int param_2, void *param_3, void *param_4,
                void *param_5, void *param_6, void *param_7, void *param_8,
                void *param_9, void *param_10)
{
  if (param_1 != 0 && param_2 >= 4 && param_3 != 0 && param_5 != 0) {
    if ((*param_1 & 0xffff0000) == 0xfffe0000) {
      return fn_82AA2B30(param_1, param_2, param_3, param_4, param_5,
                         param_6, param_7, param_8, param_9, param_10);
    }
    if ((*param_1 & 0xffff0000) == 0xffff0000) {
      return fn_82AA27D8(param_1, param_2, param_3, param_4, param_5,
                         param_6, param_7, param_8, param_9, param_10);
    }
  }
  return (int)0x80070057;
}
