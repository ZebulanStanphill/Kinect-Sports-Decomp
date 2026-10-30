extern void fn_82230300(void *, int, int);
extern void fn_8223B688(void *, void *);
extern void fn_82240378(void *, void *);
extern void fn_8257AB78(void *, void *, void *);
extern unsigned int *fn_8257AD50(void *, void *, void *);

typedef struct {
  unsigned int end;
  unsigned int node;
} Tree_8257AAC8;

char *fn_8257AAC8(Tree_8257AAC8 *t, void *key)
{
  struct {
    unsigned int it[4];
    char empty[28];
    char pad[4];
    char keycopy[28];
    char value[28];
  } l;
  unsigned int node;

  fn_8257AB78(l.it, t, key);
  node = l.it[0];
  if (node == t->node) {
    fn_82230300(l.empty, 0, 0);
    fn_8223B688(l.keycopy, key);
    fn_82240378(l.value, l.empty);
    node = *fn_8257AD50(l.it, t, l.keycopy);
    fn_82230300(l.value, 1, 0);
    fn_82230300(l.keycopy, 1, 0);
    fn_82230300(l.empty, 1, 0);
  }
  return (char *)node + 0x24;
}
