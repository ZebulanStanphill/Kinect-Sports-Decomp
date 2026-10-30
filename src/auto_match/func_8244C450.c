extern void *fn_8265C9E0(int);
extern void *fn_82449C18(void *, void *);

void *fn_8244C450(void *a)
{
  void *p = fn_8265C9E0(0x48);
  if (p != 0) {
    return fn_82449C18(p, a);
  }
  return 0;
}
