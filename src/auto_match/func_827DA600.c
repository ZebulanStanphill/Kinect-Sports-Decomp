typedef struct H H;
typedef void (*CB)(void *ctx, int r);
typedef struct { void *f[10]; } Vt;
struct H { Vt *vt; };
typedef struct { char pad[0x295 * 4]; H *h[64]; } S;
void fn_827DA600(S *s, void *ctx, unsigned int i, CB cb)
{
  H *h;
  if (i != 0xffffffff) {
    if (i < 0x40) h = s->h[i];
    else h = 0;
    if (h != 0) {
      ((void (*)(H *, void *, CB))h->vt->f[9])(h, ctx, cb);
      return;
    }
  }
  cb(ctx, 0);
}
