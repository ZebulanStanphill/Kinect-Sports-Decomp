// Advance the session state and emit its configuration when ready.
struct System_828E1898 {
 virtual void vf00(); virtual void vf04(); virtual float vf08();
};
struct Config_828E1898 { char pad[0x10]; int mode; char settings[0x40]; };
struct Session_828E1898 { char pad[0x84]; unsigned int value; int pad1; Config_828E1898 *config; };
struct State_828E1898 { char pad[0xc]; int pending; float time; int pad1; Session_828E1898 *session; char pad2[8]; int value; };
extern "C" {
System_828E1898 *fn_825089A0();
unsigned char fn_828ACC40(Session_828E1898 *);
unsigned char fn_828ACCE8(Session_828E1898 *);
unsigned char fn_828865A0(State_828E1898 *);
unsigned char fn_828A1C30(Session_828E1898 *);
unsigned char fn_828A1C28(Session_828E1898 *);
unsigned char fn_828ECF30(Config_828E1898 *);
void *fn_828D45F8(State_828E1898 *);
void fn_828E1760(void *,void *,void *,void *,unsigned int,unsigned char,void *,unsigned char,unsigned char,int,unsigned char,unsigned char);
void fn_828E0DE0(State_828E1898 *,int);
void fn_828AE818(Session_828E1898 *,int);
void fn_828E1898(State_828E1898 *self) {
 if (fn_828ACC40(self->session)) {
  if (self->pending) { self->time=fn_825089A0()->vf08(); self->pending=0; }
 } else if (fn_828ACCE8(self->session)) {
  if (fn_828865A0(self)) {
   Config_828E1898 *config=self->session->config;
   unsigned int value=self->session->value;
   int mode=config->mode;
   unsigned char a=fn_828A1C30(self->session);
   unsigned char b=fn_828A1C28(self->session);
   int own=self->value;
   unsigned char c=fn_828ECF30(config);
   Session_828E1898 *session=self->session;
   fn_828E1760(fn_828D45F8(self),(char *)config+0x1c,(char *)config+0x14,(char *)config+0x40,value,mode==1,(char *)session+0x60,c,0,own,b,a);
   fn_828E0DE0(self,2);
  } else { fn_828AE818(self->session,6); fn_828E0DE0(self,0); }
 }
}
}
