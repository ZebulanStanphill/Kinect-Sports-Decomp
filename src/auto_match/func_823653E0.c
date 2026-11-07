typedef struct { unsigned int handle; int pad[3]; } Ref_823653E0;
typedef struct { char pad[0x40]; unsigned int state; } Screen_823653E0;
typedef struct { char pad[0xa0]; int screen; } Obj_823653E0;

extern void fn_82520158(const char *, Ref_823653E0 *, int);

static int isValid(Ref_823653E0 *r)
{
  return r->handle != 0 ? (r->handle & 0xff000000) < 0x7a000000 : 0;
}

int fn_823653E0(Obj_823653E0 *o)
{
  Ref_823653E0 r;
  fn_82520158("ui_boxingResultsScreen", &r, 0);
  if (!isValid(&r) || (o->screen != 0 && ((Screen_823653E0 *)o->screen)->state == 1) || (o->screen != 0 && ((Screen_823653E0 *)o->screen)->state == 2))
    return 0;
  return 1;
}
