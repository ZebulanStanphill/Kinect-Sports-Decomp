typedef unsigned int U32;
typedef struct { void *vt; U32 uses; U32 weak; U32 val; } Rep_8256BE68;
typedef struct { U32 val; Rep_8256BE68 *rep; } Ptr_8256BE68;
extern void fn_822315A0(Rep_8256BE68 *);
extern void *fn_8265C9E0(U32);
extern char lbl_821C531C[];
void fn_8256BE68(Ptr_8256BE68 *s, U32 v)
{
  Rep_8256BE68 *mem = fn_8265C9E0(0x10); Rep_8256BE68 *r;
  if (mem != 0) { mem->val = v; mem->uses = 1; mem->vt = lbl_821C531C; mem->weak = 1; r = mem; } else r = 0;
  if (s->rep != 0) fn_822315A0(s->rep);
  s->rep = r; s->val = v;
}
