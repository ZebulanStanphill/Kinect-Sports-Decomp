typedef struct N { void *key; int pad[7]; struct N *next; } N;
extern unsigned int fn_828FC3D0(void *key);
extern int fn_82A2AEE0(void *a, void *b);
N *fn_828FC450(N **buckets, void *key)
{
  N *n;
  for (n = buckets[fn_828FC3D0(key)]; n != 0; n = n->next) {
    if (fn_82A2AEE0(n->key, key) == 0) return n;
  }
  return 0;
}
