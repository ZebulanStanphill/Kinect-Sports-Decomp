// Advances the timed state and creates entries for active objects.
struct System_8288F588 { virtual void vf00(); virtual void vf04(); virtual float vf08(); };
struct Node_8288F588 { Node_8288F588 *next; int pad[3]; void *value; };
struct Owner_8288F588 { char pad[0x230]; Node_8288F588 *head; };
struct Settings_8288F588 { char pad[0x38]; void *value; };
struct Object_8288F588 {
 int pad0[4]; Owner_8288F588 *owner; int pad1[8]; Settings_8288F588 *settings;
 int pad2; int bits[5]; int state; float time1,time2;
};
struct Bits_8288F588 { unsigned int *word; unsigned int bit; };
extern "C" {
 System_8288F588 *fn_825089A0();
 float lbl_821961E4;
 int fn_82A4AAA8(void *);
 unsigned int fn_8240D928(void *);
 Bits_8288F588 *fn_8288DF40(void *,void *,unsigned int);
 void *fn_8265C9E0(unsigned int);
 void *fn_828C77A8(void *,Object_8288F588 *,void *,void *,int);
 void fn_82886518(void *,int,int);
 unsigned int fn_82897BD0(void *);
 void fn_828BE158(Owner_8288F588 *,void *,unsigned int,int);
 void fn_82381BC0(Node_8288F588 **);
}
extern "C" int fn_8288F588(Object_8288F588 *self) {
 float now=fn_825089A0()->vf08();
 if(self->state!=4) {
  if(1u & (self->state==2)) {
   if(now-self->time1>lbl_821961E4) { self->state=3; return 1; }
  } else {
   if(self->state==3) return 1;
   if(now-self->time2>lbl_821961E4) {
    Node_8288F588 *head=self->owner->head;
    Node_8288F588 *it=head->next;
    if(it!=head) {
     do {
      void *value=it->value;
      if(fn_82A4AAA8(value)==1) {
       unsigned int id=fn_8240D928(value);
       char storage[8];
       Bits_8288F588 *bits=fn_8288DF40(storage,self->bits,id);
       if(((1u<<bits->bit)&*bits->word)==0) {
        void *mem=fn_8265C9E0(0xa8);
        void *entry=mem?fn_828C77A8(mem,self,value,self->settings->value,0):0;
        fn_82886518(entry,-1,-1);
        Owner_8288F588 *owner=self->owner;
        fn_828BE158(owner,entry,fn_82897BD0(value),0);
       }
      }
      fn_82381BC0(&it);
     } while(it!=self->owner->head);
    }
    self->time2=0.0f;
    return 1;
   }
  }
 }
 return 0;
}
