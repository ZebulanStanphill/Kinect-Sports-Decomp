typedef struct Sub_82FEC350 {
  int f0;
  float f4;
  int f8, fc;
  float f10;
  float f14;
  float f18;
} Sub_82FEC350;

typedef struct Node_82FEC350 {
  struct Node_82FEC350 *next;
  int f4;
  char *obj;
} Node_82FEC350;

extern float fn_8301E4B8(float v);
extern unsigned int fn_83025190(char *p);
extern char **lbl_832643F4[];
extern Node_82FEC350 *lbl_831BC774;

static __forceinline void Sub_Set(Sub_82FEC350 *s, float v)
{
  s->f14 = v;
  s->f4 = fn_8301E4B8(v);
}

void fn_82FEC350(unsigned int id, float v)
{
  char **it;
  Node_82FEC350 *n;
  char *o;

  it = lbl_832643F4[0];
  if (lbl_832643F4[0] != lbl_832643F4[1]) {
    do {
      o = *it;
      if (fn_83025190(o + 0x80) == id) {
        Sub_Set((Sub_82FEC350 *)(o + 0x10), v);
      }
      it = it + 1;
    } while (it != lbl_832643F4[1]);
  }
  for (n = lbl_831BC774; n != 0; n = n->next) {
    o = n->obj;
    if (fn_83025190(o + 0x70) == id) {
      Sub_Set((Sub_82FEC350 *)o, v);
    }
  }
}
