extern void fn_82BFA8D8(void *); extern int fn_82BF3A88(const char *, int, unsigned); extern void fn_82BFABC8(void *);
typedef struct B_82BFB3E0 { int a; int b; int c; unsigned d; } B_82BFB3E0;
typedef struct O_82BFB3E0 { int pad[2]; int st; const char *name; B_82BFB3E0 *blk; } O_82BFB3E0;
void fn_82BFB3E0(O_82BFB3E0 *o) {
  char guard[4]; const char *s; B_82BFB3E0 *b;
  fn_82BFA8D8(guard);
  s = o->name;
  if (s == 0) goto bad;
  if (*o->name == 0) goto bad;
  b = o->blk;
  if (b == 0) goto bad;
  if (b->d == 0) goto bad;
  if (fn_82BF3A88(s, b->c, b->d) != 0) { o->st = 1; goto end; }
bad:
  o->st = 2;
end:
  fn_82BFABC8(guard);
}
