// Initialize the object's timestamp and replace its owned worker state.
struct System_824C4008 { virtual void v0(); virtual void v4(); virtual void v8(); virtual unsigned __int64 ticks(); };
extern "C" System_824C4008 *fn_825089A0();
struct Owner_824C4008 { char pad[0x5c]; char *data; };
struct Worker_824C4008 { void *first; char *second; };
struct State_824C4008 { void **vtable; Owner_824C4008 *owner; unsigned __int64 stamp; Worker_824C4008 *worker; };
extern "C" {
void *lbl_821C0844[];
void *fn_8265C9E0(unsigned int);
void fn_8265CA20(void *);
Worker_824C4008 *fn_824C1358(void *, void *);
void fn_8224F690(void *);
void fn_82521120(void *);
void fn_822315A0(void *);
void fn_824C41E8(Worker_824C4008 **);
State_824C4008 *fn_824C4008(State_824C4008 *self, Owner_824C4008 *owner) {
 self->owner = owner; self->vtable = lbl_821C0844;
 self->stamp = fn_825089A0()->ticks();
 self->worker = 0;
 void *mem = fn_8265C9E0(0x30);
 Worker_824C4008 *p = mem ? fn_824C1358(mem, owner->data + 0x40c) : 0;
 Worker_824C4008 **dst = &self->worker;
 Worker_824C4008 *temp = p;
 if (dst != &temp) {
  Worker_824C4008 *old = *dst; temp = 0;
  if (p != old) {
   if (old) {
    void *first = old->first;
    if (first) { fn_8224F690(first); fn_8265CA20(first); old->first = 0; }
    if (old->second) {
     fn_82521120(old->second);
     char *second = old->second;
     if (second) { void *rep = *(void **)(second + 0x5c); if (rep) fn_822315A0(rep); fn_8224F690(second + 0xc); fn_8265CA20(second); }
     old->second = 0;
    }
    fn_8265CA20(old);
   }
   *dst = p;
  }
 }
 fn_824C41E8(&temp);
 return self;
}
}
