typedef struct Obj_82487720 Obj_82487720;
typedef struct ObjVtbl_82487720 {
    void (*slot0)(Obj_82487720 *self);
    void (*SetValue)(Obj_82487720 *self, float value, int flag);
} ObjVtbl_82487720;
struct Obj_82487720 {
    ObjVtbl_82487720 *vt;
    unsigned int id;
};
typedef struct { Obj_82487720 *obj; void *rc; } Ptr_82487720;
typedef struct {
    void *vt;
    unsigned int id;
    float value;
} Msg_82487720;

extern Ptr_82487720 *fn_82365BD8(Ptr_82487720 *);
extern void fn_822315A0(void *);

int fn_82487720(Msg_82487720 *msg)
{
  Ptr_82487720 *p;
  Ptr_82487720 tmp;
  Obj_82487720 *o;
  p = fn_82365BD8(&tmp);
  o = p->obj;
  if (o->id != msg->id) {
    o->vt->SetValue(o, msg->value, 0);
  }
  if (p->rc != 0) {
    fn_822315A0(p->rc);
  }
  return 1;
}
