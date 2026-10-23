#include "stdext/xmemory.h"
extern "C" long _InterlockedIncrement(long volatile *);
extern "C" long _InterlockedDecrement(long volatile *);
struct RefBase {
    virtual void _Destroy() = 0;
    virtual void _Delete_this() = 0;
    long _Uses;
    long _Weaks;
    void _Incwref() { _InterlockedIncrement((volatile long *)&_Weaks); }
    void _Decwref() { if (_InterlockedDecrement((volatile long *)&_Weaks) == 0) _Delete_this(); }
};
struct Obj;
struct WeakPtr {
    Obj *_Ptr;
    RefBase *_Rep;
};
struct Obj { void *vt; WeakPtr w; char pad[0x28]; int a,b,c,d,e,f,g,h; void *parent; int tail; };
struct Block { void *vt; long uses,weaks; Obj obj; };
struct Shared { Obj *ptr; RefBase *ctrl; };
extern "C" { char lbl_821CAA78[],lbl_821CB7D0[]; void fn_827D9980(void *,void *,unsigned int,unsigned int,int); }
extern "C" Shared *fn_8260C1A8(Shared *out,unsigned char *parent,const unsigned int *a,const unsigned int *b) {
 Block *block=(Block *)fn_8265C9E0(0x68);
 if (block) {
  block->uses=1; block->weaks=1; block->vt=lbl_821CAA78;
  Obj *obj=&block->obj;
  if (obj) {
   void *context=parent?parent+4:0;
   fn_827D9980(obj,context,*a,*b,1);
   block->obj.vt=lbl_821CB7D0;
   obj->a=0; obj->b=0; obj->c=0; obj->e=0; obj->f=0; obj->g=0; obj->parent=context;
  }
  out->ctrl=(RefBase *)block; out->ptr=obj;
  Obj *o=&block->obj;
  if (o) {
   WeakPtr *w=&o->w;
   ((RefBase *)block)->_Incwref();
   if (w->_Rep != 0) w->_Rep->_Decwref();
   w->_Rep=(RefBase *)block; w->_Ptr=o;
  }
  return out;
 }
 stdext::bad_alloc(0)._Raise();
}
