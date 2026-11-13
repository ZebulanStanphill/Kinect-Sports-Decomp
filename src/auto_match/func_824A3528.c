typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);

typedef struct Body_824A3528 {
  char pad[0xd0];
  __vector4 pos;
} Body_824A3528;

typedef struct Node_824A3528 {
  char pad[0x40];
  Body_824A3528 *body;
} Node_824A3528;

typedef struct Src_824A3528 Src_824A3528;
typedef struct SrcVtbl_824A3528 {
  void (*get)(Src_824A3528 *self, void *a, int *b);
  void (*read)(Src_824A3528 *self, int b, Node_824A3528 **c);
} SrcVtbl_824A3528;
struct Src_824A3528 { SrcVtbl_824A3528 *vtbl; };

typedef struct Obj_824A3528 {
  char pad[0x30];
  float value;
  char pad34[8];
  float threshold;
  char pad40[0x10];
  __vector4 v50;
  int count;
} Obj_824A3528;

extern const float lbl_821CA45C[2];

void fn_824A3528(Obj_824A3528 *o, Src_824A3528 *s)
{
  int n;
  Node_824A3528 *node;
  char a[4];
  __vector4 pos;
  float threshold;

  s->vtbl->get(s, a, &n);
  s->vtbl->read(s, n, &node);
  threshold = o->threshold;
  pos = node->body->pos;
  o->value = 0.0f;
  o->v50 = __VMXGetReg(77);
  if (pos.vector4_f32[1] > threshold) {
    if (++o->count > 0) {
      o->value = lbl_821CA45C[1];
    }
  } else {
    o->count = 0;
  }
}
