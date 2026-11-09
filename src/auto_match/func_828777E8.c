typedef struct {
  int x0;
  char key[0x28];
  float value;
} Entry_828777E8;

typedef struct {
  int x0;
  Entry_828777E8 *begin;
  Entry_828777E8 *end;
} Table_828777E8;

extern unsigned char fn_828647C0(void *key, void *name);

float fn_828777E8(Table_828777E8 *t, void *name)
{
  Entry_828777E8 *it = t->begin;
  Entry_828777E8 *end = t->end;
  while (it != end) {
    if (fn_828647C0(it->key, name)) break;
    it++;
  }
  if (it == t->end) return 0.0f;
  return it->value;
}
