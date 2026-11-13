typedef struct Stream_82693A98 {
  int handle;
  int f04, f08;
  unsigned int flags;
  unsigned int size;
} Stream_82693A98;
typedef struct Reader_82693A98 { Stream_82693A98 *s; } Reader_82693A98;
extern unsigned int fn_826BD758(int handle, unsigned int n);

unsigned int fn_82693A98(Reader_82693A98 *r)
{
  Stream_82693A98 *s = r->s;
  unsigned int n = s->size;
  unsigned int got;

  if ((s->flags & 0x8000000) != 0) {
    return n;
  }
  got = fn_826BD758(s->handle, n);
  if (got == n) {
    r->s->flags |= 0x8000000;
  }
  return got;
}
