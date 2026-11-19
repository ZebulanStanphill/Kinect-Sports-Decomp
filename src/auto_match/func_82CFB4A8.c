extern void fclose(void *p);
typedef struct { int a, b; void *ptr; unsigned char owned; } T;
void fn_82CFB4A8(T *t)
{
  if (t->ptr != 0 && t->owned) {
    fclose(t->ptr);
  }
  t->ptr = 0;
}
