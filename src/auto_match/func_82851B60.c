typedef void (*Resolve_82851B60)(int key, unsigned int *out);

typedef struct Rec_82851B60 {
  unsigned short size;
  unsigned char type;
  unsigned char pad3;
  unsigned int value;
} Rec_82851B60;

typedef struct Slot_82851B60 {
  int key;
  unsigned int value;
  int pending;
  int pad[2];
} Slot_82851B60;

typedef struct Obj_82851B60 {
  Rec_82851B60 *recs;
  int pad4;
  void *res;
  int padc;
  Slot_82851B60 *slots;
  char pad14[0xe];
  unsigned short slotCount;
} Obj_82851B60;

extern Resolve_82851B60 lbl_83211304[];
extern unsigned int fn_82817B08(void *res);
extern void fn_82817B50(void *res, unsigned int idx, int *out);
extern void fn_82817BC8(int h, int *out);

void fn_82851B60(Obj_82851B60 *o, Resolve_82851B60 fallback)
{
  Rec_82851B60 *r = o->recs;
  void *res = o->res;
  int i;
  unsigned int out;
  Slot_82851B60 *slots;

  for (; r->type != 0x1d; r = (Rec_82851B60 *)((char *)r + r->size)) {
    out = 0;
    if (r->type == 0x20) {
      unsigned int idx = r->value;
      if (idx < fn_82817B08(res)) {
        int h;
        int name;
        fn_82817B50(res, idx, &h);
        fn_82817BC8(h, &name);
        out = 0;
        if (lbl_83211304[1] != 0) {
          lbl_83211304[1](name, &out);
        }
        r->value = out;
      }
    }
  }
  slots = o->slots;
  for (i = 0; i < o->slotCount; i++) {
    out = 0;
    if (slots[i].value == 0) {
      if (lbl_83211304[2] != 0) {
        lbl_83211304[2](slots[i].key, &out);
        if (out != 0) goto store;
      }
      if (fallback != 0) {
        fallback(slots[i].key, &out);
        if (out != 0) goto store;
      }
      out = 0;
store:
      slots[i].value = out;
      slots[i].pending = 0;
    }
  }
}
