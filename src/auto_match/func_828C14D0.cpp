// Register a unique notification and record its timestamp in the lookup tree.
#include <map>
#include <list>
#include "game/Allocator_825089A0.h"
typedef unsigned __int64 Key_828C14D0;
struct System_828C14D0 { virtual void vf00(); virtual void vf04(); virtual void vf08(); virtual Key_828C14D0 vf0C(); };
struct Payload_828C14D0 { char pad[8]; Key_828C14D0 key; char pad1[0x38]; unsigned int category; };
struct Element_828C0B08 { Payload_828C14D0 *data; };
typedef std::list<Element_828C0B08,Allocator_825089A0<Element_828C0B08,2> > List_828C14D0;
typedef std::map<Key_828C14D0,Key_828C14D0,std::less<Key_828C14D0>,Allocator_825089A0<std::pair<const Key_828C14D0,Key_828C14D0>,2> > Map_828C14D0;
struct State_828C14D0 { char pad[0x2c]; List_828C14D0 items; Map_828C14D0 times; };
template <> void List_828C14D0::_Insert(const_iterator,const Element_828C0B08 &);
extern "C" {

Key_828C14D0 *fn_828C1398(Map_828C14D0 *,const Key_828C14D0 *);
void *fn_8265C9E0(unsigned int);
Payload_828C14D0 *fn_828C11D0(void *,unsigned int,const Key_828C14D0 *,void *);
void fn_828C14D0(State_828C14D0 *self,unsigned int category,const Key_828C14D0 *key,void *context) {
 for (List_828C14D0::iterator i=self->items.begin();i!=self->items.end();++i)
  if (i->data->key==*key && i->data->category==category) return;
 Key_828C14D0 now=((System_828C14D0 *)fn_825089A0())->vf0C();
 Map_828C14D0::iterator found=self->times.find(*key);
 if (found==self->times.end()) {
  *fn_828C1398(&self->times,key)=now;
  if (self->items.size()<=4) {
   void *memory=fn_8265C9E0(0x50);
   Element_828C0B08 item;
   if (memory) item.data=fn_828C11D0(memory,category,key,context);
   else item.data=0;
   self->items._Insert(self->items.end(),item);
  }
 }
}
}
