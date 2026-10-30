extern void fn_8267C4C8(void *);

typedef struct {
  unsigned int x;
  unsigned int y;
  void *ref;
} Handle_82790730;

Handle_82790730 *fn_82790730(Handle_82790730 *a, Handle_82790730 *b)
{
  unsigned int x = b->x;
  unsigned int y = b->y;
  a->x = x;
  a->y = y;
  if (b->ref != 0) {
    fn_8267C4C8(b->ref);
  }
  a->ref = b->ref;
  return a;
}
