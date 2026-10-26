// Registers an object with its owner and records its system timestamp.
struct System_828833A8 {
 virtual void vf00(); virtual void vf04(); virtual void vf08(); virtual unsigned __int64 vf0C();
};
struct Object_828833A8 {
 virtual void vf00(); virtual unsigned int vf04(); virtual void vf08();
 virtual void vf0C(); virtual void vf10(); virtual void vf14();
 virtual void vf18(); virtual void vf1C(); virtual void vf20();
 virtual void vf24(); virtual void vf28(); virtual void vf2C();
 virtual void vf30(); virtual void vf34(__int64);
 int pad[9-1]; int value; int pad2[7]; __int64 time;
};
struct Owner_828833A8 { char pad[0xb4]; void *service; };
extern "C" {
 char lbl_83212A00[];
 System_828833A8 *fn_825089A0();
 int fn_82886C90();
 Owner_828833A8 **fn_82883118(void *,const unsigned int *);
 int fn_828869A0(void *,unsigned int);
 void fn_8287FF40(void *,Object_828833A8 *);
}
extern "C" void fn_828833A8(unsigned int key,Object_828833A8 *self) {
 self->vf04();
 if(fn_82886C90()) {
  unsigned int local=key;
  Owner_828833A8 **entry=fn_82883118(lbl_83212A00,&local);
  unsigned int id=self->vf04();
  self->value=fn_828869A0((*entry)->service,id);
 }
 __int64 now=(int)fn_825089A0()->vf0C();
 self->vf34(now);
 { unsigned int local=key;
 Owner_828833A8 **entry=fn_82883118(lbl_83212A00,&local);
 fn_8287FF40((char *)*entry+0x70,self); }
 self->time=now;
}
