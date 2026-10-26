extern int fn_82FAF518(void);
extern void fn_83035D68(void *a, void *b);
typedef struct { char pad[0xa8]; void **begin; void **end; } S;
int fn_83032018(S *s, void *b)
{
  int r = fn_82FAF518();
  if (r == 1) {
    void **p = s->begin;
    void **e = s->end;
    for (; p != e; p++) fn_83035D68(*p, b);
  }
  return r;
}
