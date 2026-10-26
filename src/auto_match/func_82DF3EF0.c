typedef struct { void *f[4]; } Vt;
typedef struct { Vt *vt; int a, b; unsigned char fl; } O;
void fn_82DF3EF0(O *o)
{
  if (!(o->fl & 1)) { unsigned char *f = &o->fl; ((void (*)(O *))o->vt->f[3])(o); *f |= 1; }
}
