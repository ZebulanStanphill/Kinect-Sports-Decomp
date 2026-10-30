typedef struct { char p[0x1c]; unsigned char f[4]; } Flags;
typedef struct { char p[0x30]; Flags *fl; } Inner;
typedef struct { Inner *in; } Obj;

float fn_827FF010(Obj *o, float *param_2)
{
  Flags *fl = o->in->fl;
  float *p = param_2;
  if (fl->f[0] != 0) p++;
  if (fl->f[1] != 0) p++;
  if (fl->f[2] != 0) p++;
  if (fl->f[3] != 0) p++;
  return *p;
}
