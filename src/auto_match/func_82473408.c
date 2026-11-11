typedef struct Obj_82473408 Obj_82473408;
typedef struct {int pad[9];void (*release)(Obj_82473408 *);} VT_82473408;
struct Obj_82473408 {VT_82473408 *vt;};
typedef struct {float value;Obj_82473408 *obj;} Item_82473408;
typedef struct {char pad[0x18];Item_82473408 a[3];int x,y,z;} Self_82473408;
extern int lbl_832766DC,lbl_832766E0;
void fn_82473408(Self_82473408 *s) {
 Item_82473408 *p=s->a;int n;
 s->x=0;s->y=0;s->z=0;lbl_832766DC=0;lbl_832766E0=0;n=2;
 do {Obj_82473408 *o=p->obj;if(o) o->vt->release(o);++p;p->value=0.0f;} while(--n);
}
