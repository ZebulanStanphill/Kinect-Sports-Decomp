extern void fn_828223C8(void *p, void **out);
void fn_8282D7E0(int param_1)
{
  void *p = (void *)(param_1 + 0x2fc);
  void *next;
  do {
    fn_828223C8(p, &next);
    p = next;
  } while (p != 0);
}
