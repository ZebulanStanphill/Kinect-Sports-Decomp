typedef struct { void *vt; unsigned int uses; unsigned int weak; unsigned int val; } Rep_822D79D8;
typedef struct { unsigned int val; Rep_822D79D8 *rep; } Ptr_822D79D8;
extern void fn_822315A0(Rep_822D79D8 *);
extern void *fn_8265C9E0(unsigned int);
extern char lbl_821ADA44[];
void fn_822D79D8(Ptr_822D79D8 *s, unsigned int v)
{
  Rep_822D79D8 *mem = fn_8265C9E0(0x10); Rep_822D79D8 *r;
  if (mem != 0) { mem->val = v; mem->uses = 1; mem->vt = lbl_821ADA44; mem->weak = 1; r = mem; } else r = 0;
  if (s->rep != 0) fn_822315A0(s->rep);
  s->rep = r; s->val = v;
}
