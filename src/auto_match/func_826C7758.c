typedef struct Node_826C7758 {
  char pad0[8];
  int refCount;
  int pad0c;
  unsigned int size;
} Node_826C7758;

typedef struct Str_826C7758 {
  Node_826C7758 *node;
} Str_826C7758;

typedef struct Value_826C7758 {
  unsigned char type;
  char pad1[0xf];
} Value_826C7758;

typedef struct Obj_826C7758 Obj_826C7758;

typedef struct Target_826C7758 Target_826C7758;
typedef struct TargetVt_826C7758 {
  void *slots[11];
  unsigned char (*GetMember)(Target_826C7758 *self, void *env, Str_826C7758 *name, Value_826C7758 *out);
} TargetVt_826C7758;
struct Target_826C7758 {
  TargetVt_826C7758 *vt;
};

typedef struct Holder_826C7758 {
  char pad0[0x10];
  Target_826C7758 target;
} Holder_826C7758;

typedef struct ObjVt_826C7758 {
  void *slots[22];
  char *(*GetContext)(Obj_826C7758 *self);
} ObjVt_826C7758;

struct Obj_826C7758 {
  ObjVt_826C7758 *vt;
  char pad4[0x6c - 0x4];
  Holder_826C7758 *fallback;
  char pad70[0x148 - 0x70];
  char env[0x1b0 - 0x148];
  Holder_826C7758 *holder;
};

extern unsigned char fn_8269EA50(Obj_826C7758 *self, void *name);
extern Str_826C7758 *fn_826A76D0(Str_826C7758 *out, void *name, void *table);
extern void fn_82696330(Value_826C7758 *v);
extern void fn_826944C8(Node_826C7758 *n);

static __forceinline Holder_826C7758 *GetPtr(Holder_826C7758 **p) { return *p; }
static __forceinline Holder_826C7758 *GetProto(Obj_826C7758 *self) { return self->fallback; }

int fn_826C7758(Obj_826C7758 *self, void *name)
{
  Str_826C7758 str;
  Value_826C7758 value;
  Holder_826C7758 *h;

  if (fn_8269EA50(self, name)) {
    return 1;
  }
  fn_826A76D0(&str, name, self->vt->GetContext(self) + 0x78);
  if (str.node->size != 0) {
    value.type = 0;
    h = GetPtr(&self->holder) ? GetPtr(&self->holder) : GetProto(self);
    if (h != 0 && h->target.vt->GetMember(&h->target, self->env, &str, &value)) {
      fn_82696330(&value);
      {
        Node_826C7758 *n = str.node;
        if (--n->refCount == 0) {
          fn_826944C8(n);
        }
      }
      return 1;
    }
    fn_82696330(&value);
  }
  {
    Node_826C7758 *n = str.node;
    if (--n->refCount == 0) {
      fn_826944C8(n);
    }
  }
  return 0;
}
