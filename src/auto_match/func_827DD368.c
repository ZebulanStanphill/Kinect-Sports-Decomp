typedef struct Ovl { int a, b, c, d; void *hEvent; } Ovl;
typedef struct Req { int h; int pad[6]; Ovl *ovl; } Req;
extern unsigned int fn_82A1E650(void *h, unsigned int ms);
extern void *fn_827D9ED0(int h);
extern int fn_82A29AC0(void *h, Ovl *ovl, unsigned int *n, int wait);
extern int fn_82A1F470(void);

int fn_827DD368(int unused, Req *r)
{
  Ovl *ovl = r->ovl;
  int h = r->h;
  unsigned int n;

  if (fn_82A1E650(ovl->hEvent, 0) == 0x102)
    return 0x3e5;
  if (fn_82A29AC0(fn_827D9ED0(h), ovl, &n, 0) == 0)
    return fn_82A1F470();
  return 0;
}
