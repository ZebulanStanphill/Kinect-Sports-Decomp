typedef struct { unsigned int key; int a, b, c; } Entry;
typedef struct { Entry *begin; Entry *end; } Vec;

extern void fn_8251E530(Vec *v, Entry *e);
extern void fn_82566E58(unsigned int key, int obj);

void fn_8255B400(int param_1, unsigned int key)
{
  Entry *it;
  Entry *end;
  Vec *v;

  v = (Vec *)(param_1 + 0x10);
  end = v->end;
  for (it = v->begin; it < end; it++) {
    if (it->key == key) {
      if (key == *(unsigned int *)(param_1 + 0x358)) {
        *(int *)(param_1 + 0x358) = 0;
        *(int *)(param_1 + 4) = 2;
      }
      fn_82566E58(it->key, param_1);
      fn_8251E530(v, it);
      return;
    }
  }
}
