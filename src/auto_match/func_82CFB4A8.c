extern void fn_82F67988(void *p);
typedef struct { int a, b; void *ptr; unsigned char owned; } T;
void fn_82CFB4A8(T *t)
{
  if (t->ptr != 0 && t->owned) {
    fn_82F67988(t->ptr);
  }
  t->ptr = 0;
}
