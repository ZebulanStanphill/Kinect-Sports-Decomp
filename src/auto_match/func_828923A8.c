typedef struct {
  union { char buf[16]; char *ptr; } bx;
  unsigned int size;
  unsigned int res;
} String;

typedef struct {
  String s;
  char pad[0x34 - 0x18];
  void *p;
  int pad2[3];
} Value;

typedef struct {
  unsigned short key;
  Value value;
} Pair;

extern Value *fn_82890120(Value *dst, const Value *src);
extern void fn_822315A0(void *p);
extern void fn_8265CA20(void *p);

Pair *fn_828923A8(Pair *param_1, const unsigned short *param_2, const Value *param_3)
{
  Value tmp;
  unsigned short key;
  Value *t;

  key = *param_2;
  t = fn_82890120(&tmp, param_3);
  param_1->key = key;
  fn_82890120(&param_1->value, t);
  if (tmp.p != 0)
    fn_822315A0(tmp.p);
  if (tmp.s.res >= 16)
    fn_8265CA20(tmp.s.bx.ptr);
  return param_1;
}
