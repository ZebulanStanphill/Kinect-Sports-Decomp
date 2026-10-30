extern void fn_8267C498(void *p);
extern void fn_82722690(void *p, void *a, void *b);
extern void fn_8272A868(void *p, void *c);

void fn_8272A920(char *p, void *a, void *b, void *c)
{
  if (*(void **)(p + 0x1c) != 0) {
    fn_8267C498(*(void **)(p + 0x1c));
    *(void **)(p + 0x1c) = 0;
  }
  fn_82722690(p, a, b);
  fn_8272A868(p, c);
}
