typedef struct Elem { char a[0x60]; char b[0xc]; } Elem;
typedef struct S { char pad[0xc4]; unsigned int count; char pad2[0xc]; Elem *arr; } S;
extern void fn_82FE4EF0(Elem *e);
extern void fn_82FE4700(void *e);
void fn_82FE0768(S *s)
{
  unsigned int i;
  if (s->arr) {
    for (i = 0; i < s->count; i++) {
      fn_82FE4EF0(&s->arr[i]);
      fn_82FE4700(s->arr[i].b);
    }
  }
}
