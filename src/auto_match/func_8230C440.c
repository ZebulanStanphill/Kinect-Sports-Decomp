typedef struct Sub { void *vt; int a; int inner; } Sub;
typedef struct P { void *vt; char pad[0x14]; Sub sub; } P;
extern void fn_82359C18(void *p);
extern char lbl_821AF1C8[], lbl_821AF398[], lbl_821C7FB8[];
void fn_8230C440(P *p)
{
  Sub *s = &p->sub; p->vt = lbl_821AF398; fn_82359C18(&s->inner); s->vt = lbl_821C7FB8; p->vt = lbl_821AF1C8;
}
