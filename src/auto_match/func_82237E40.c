typedef struct Link_82237E40 {
  struct Link_82237E40 *next;
  int prev;
} Link_82237E40;

int fn_82237E40(Link_82237E40 *self)
{
  int r = 0;
  Link_82237E40 *next = self->next;
  int prev;
  if (next == self)
    return 1;
  if (next->next == self) {
    prev = self->prev;
    if (prev != 0) {
      if (((Link_82237E40 *)prev)->next != self)
        r = 1;
      if ((int)next == prev)
        return 1;
    }
  }
  return r;
}
