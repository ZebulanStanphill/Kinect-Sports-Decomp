extern void fn_8252DAB8(void *);
extern void *fn_8265C9E0(int);
extern char lbl_821C8BE0[], lbl_821C8BF0[], lbl_821C8C18[], lbl_821C8C3C[], lbl_821C8C58[];
typedef struct { char *vt; char pad[0xc]; unsigned short m10; char pad2[0x1a8 - 0x12]; char *m1a8; char *m1ac; char *m1b0; char *m1b4; } Obj_825BC9F8;
Obj_825BC9F8 *fn_825BC9F8(Obj_825BC9F8 *o)
{
  char **m;
  char **r;
  fn_8252DAB8(o);
  o->vt = lbl_821C8C58;
  m = (char **)fn_8265C9E0(4);
  if (m != 0) { r = m; *r = lbl_821C8BE0; } else r = 0;
  o->m1ac = (char *)r;
  m = (char **)fn_8265C9E0(4);
  if (m != 0) { r = m; *r = lbl_821C8BF0; } else r = 0;
  o->m1b0 = (char *)r;
  m = (char **)fn_8265C9E0(4);
  if (m != 0) { r = m; *r = lbl_821C8C18; } else r = 0;
  o->m1a8 = (char *)r;
  m = (char **)fn_8265C9E0(4);
  if (m != 0) { r = m; *r = lbl_821C8C3C; } else r = 0;
  o->m1b4 = (char *)r;
  o->m10 = 1;
  return o;
}