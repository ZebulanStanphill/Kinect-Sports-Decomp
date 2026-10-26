typedef struct G G; typedef struct O O;
extern void fn_8301B7B8(G *g, O *o);
extern void fn_83032D88(void *p);
extern G *lbl_832642F8;
typedef struct { O *o; } H;
typedef struct { int a, b; H *h; int c; void *p; } S;
void fn_83033910(S *s)
{
if (lbl_832642F8) { if (s->h->o) fn_8301B7B8(lbl_832642F8, s->h->o); }
if (s->p) { fn_83032D88(s->p); s->p = 0; }
}
