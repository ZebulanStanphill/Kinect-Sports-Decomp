typedef struct Node_828C5FA0 Node_828C5FA0;
typedef struct { void *s0; void (*print)(Node_828C5FA0 *, void *, unsigned int); } NodeVt_828C5FA0;
struct Node_828C5FA0 { NodeVt_828C5FA0 *vt; };
typedef struct { char pad0[8]; int freq; char padc[4]; Node_828C5FA0 *left; Node_828C5FA0 *right; } Obj_828C5FA0;
extern char *strcat(char *, const char *);
extern char lbl_82015A34[];
extern void *fn_82240158(void *, const char *);
extern void *fn_82520AC8(void *, int);
extern void fn_82517B60(void *, int);
extern void fn_8223FDB8(void *);

void fn_828C5FA0(Obj_828C5FA0 *o, void *os, unsigned int depth)
{
  char buf[256];
  unsigned int i;
  int freq;
  void *s;
  buf[0] = 0;
  for (i = 0; i < depth; i++) {
    strcat(buf, lbl_82015A34);
  }
  freq = o->freq;
  s = fn_82240158(os, buf);
  s = fn_82240158(s, "Node: Freq = ");
  s = fn_82520AC8(s, freq);
  fn_82517B60(s, 10);
  fn_8223FDB8(s);
  s = fn_82240158(os, buf);
  s = fn_82240158(s, "{");
  fn_82517B60(s, 10);
  fn_8223FDB8(s);
  o->left->vt->print(o->left, os, depth + 1);
  o->right->vt->print(o->right, os, depth + 1);
  s = fn_82240158(os, buf);
  s = fn_82240158(s, "}");
  fn_82517B60(s, 10);
  fn_8223FDB8(s);
}
