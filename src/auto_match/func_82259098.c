extern void fn_822315A0(void *);
extern void fn_82359C18(void *);
extern void fn_828E3228(void *);
extern void fn_828E32A0(void *);
extern char lbl_821968A4[];
extern char lbl_82198484[];

typedef struct {
  char pad[0x38];
  void *a38;
  char pad2[0x6c - 0x3c];
  void *a6c;
} Sub_82259098;
typedef struct {
  void *vt0;
  char pad[0x28 - 4];
  void *vt28;
  char pad2[0xa4 - 0x2c];
  void *a4;
} Obj_82259098;

static __forceinline void Release(void **f)
{
  if (*f != 0)
    fn_822315A0(*f);
}

void fn_82259098(Obj_82259098 *p)
{
  Sub_82259098 *s = (Sub_82259098 *)((char *)p + 0x30);
  *(void **)((char *)s - 0x30) = lbl_82198484;
  *(void **)((char *)s - 8) = lbl_821968A4;
  Release(&p->a4);
  Release(&s->a6c);
  fn_82359C18((char *)s + 0x50);
  fn_82359C18((char *)s + 0x38);
  fn_828E32A0(s);
  fn_828E3228(p);
}
