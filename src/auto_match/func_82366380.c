typedef struct Obj_82366380 Obj_82366380;
typedef struct ObjVtbl_82366380 {
    void (*slot0)(Obj_82366380 *self);
    void (*SetValue)(Obj_82366380 *self, float value, int flag);
} ObjVtbl_82366380;
struct Obj_82366380 {
    ObjVtbl_82366380 *vt;
};
typedef struct { Obj_82366380 *obj; void *rc; } Ptr_82366380;
typedef struct { char pad0[0x10]; int id; } Key_82366380;
typedef struct {
    void *vt;
    void *table;
    float *value;
    int *flag;
} Self_82366380;

extern void *fn_82359558(void *table, int id);
extern Ptr_82366380 *fn_82522588(Ptr_82366380 *out, Key_82366380 **key);
extern void fn_822315A0(void *);

void fn_82366380(Self_82366380 *self, Key_82366380 **key)
{
  if (fn_82359558(self->table, (*key)->id) != 0) {
    Ptr_82366380 tmp;
    Obj_82366380 *o = fn_82522588(&tmp, key)->obj;
    o->vt->SetValue(o, *self->value, *self->flag);
    if (tmp.rc != 0)
      fn_822315A0(tmp.rc);
  }
}
