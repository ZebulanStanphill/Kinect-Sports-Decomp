typedef struct VObj { int (**vt)(); } VObj;
int fn_82683C70(VObj *self, int a)
{
  VObj *o = (VObj *)self->vt[0](self);
  if (o != 0)
    return o->vt[3](o, a);
  return 0;
}
