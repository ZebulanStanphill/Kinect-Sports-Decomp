typedef struct { void *vt; unsigned int uses; unsigned int weak; unsigned int val; } Rep_82F515F0;
typedef struct { unsigned int val; Rep_82F515F0 *rep; } Ptr_82F515F0;
extern void fn_822315A0(Rep_82F515F0 *);
extern void *fn_8265C9E0(unsigned int);
extern char lbl_821C0D3C[];
void fn_82F515F0(Ptr_82F515F0 *s, unsigned int v)
{
  Rep_82F515F0 *mem = fn_8265C9E0(0x10); Rep_82F515F0 *r;
  if (mem != 0) { mem->val = v; mem->uses = 1; mem->vt = lbl_821C0D3C; mem->weak = 1; r = mem; } else r = 0;
  if (s->rep != 0) fn_822315A0(s->rep);
  s->rep = r; s->val = v;
}
