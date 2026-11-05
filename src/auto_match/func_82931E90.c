typedef struct O_82931E90 { void *vt; unsigned a; unsigned b; unsigned c; unsigned d; unsigned e; unsigned *f; unsigned g, h, i; } O_82931E90;
extern unsigned *fn_829301D0(unsigned,unsigned,unsigned);
extern unsigned *fn_82934160(void);
extern unsigned int lbl_8202F158;

static __forceinline O_82931E90 *init(O_82931E90 *m) {
  m->a = 9; m->b = 0; m->vt = &lbl_8202F158; m->c = 0; m->d = 0; m->e = 10; m->f = 0; m->g = 0; m->h = 0; m->i = 0; return m; }
O_82931E90 *fn_82931E90(char *src)
{
  unsigned *mem = fn_82934160();
  O_82931E90 *o, *r = (O_82931E90 *)fn_829301D0(*mem, 0x28, 0x10);
  if (r != 0) o = init(r); else o = 0;
  if (o == 0) return 0;
  o->d = *(unsigned *)(src + 0x10);
  o->e = *(unsigned *)(src + 0x14);
  o->g = *(unsigned *)(src + 0x1c);
  o->h = *(unsigned *)(src + 0x20);
  o->i = *(unsigned *)(src + 0x24);
  if (*(int **)(src + 0x18) != 0) {
    o->f = (unsigned *)(*(unsigned (**)(void *))(**(int **)(src + 0x18) + 4))(*(int **)(src + 0x18));
    if (o->f == 0) return 0;
  }
  return o;
}
