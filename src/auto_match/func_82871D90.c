typedef struct { int head; int end; } Tree;
typedef struct { int pad; Tree t; } Obj;
extern int *fn_82872A90(int *out, Tree *t, unsigned int *key);

unsigned char fn_82871D90(Obj *o, unsigned int key)
{
  unsigned int k;
  int it[1];
  if (key == 0) {
    return 0;
  }
  k = key;
  return *fn_82872A90(it, &o->t, &k) != o->t.end;
}
