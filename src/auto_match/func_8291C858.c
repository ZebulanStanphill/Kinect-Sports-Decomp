typedef struct Src_8291C858 { unsigned char *ptr; unsigned int left; } Src_8291C858;
typedef struct Ctx_8291C858 { char pad[0x554]; Src_8291C858 *src; } Ctx_8291C858;
extern void *memcpy(void *, const void *, unsigned int);
extern void fn_829AB0F0(Ctx_8291C858 *, const char *);

void fn_8291C858(Ctx_8291C858 *c, void *dst, unsigned int n)
{
  Src_8291C858 *s = c->src;
  if (n > s->left) {
    fn_829AB0F0(c, "read error");
  }
  memcpy(dst, s->ptr, n);
  s->ptr += n;
  s->left -= n;
}
