typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float f[4]; } __vector4;
typedef struct Iface_82234C48 Iface_82234C48;
struct Iface_82234C48 { struct VT_82234C48 *vt; };
typedef struct VT_82234C48 { void (*f0)(); void (*set)(Iface_82234C48 *,__vector4); void (*f8)(); void (*fc)(); void (*f10)(); void (*get)(Iface_82234C48 *,int,__vector4 *); } VT_82234C48;
typedef struct Sub_82234C48 { char pad[16]; Iface_82234C48 *out; int x; Iface_82234C48 *in; } Sub_82234C48;
void fn_82234C48(char *self,int arg) {
 __vector4 v;
 Sub_82234C48 *s=(Sub_82234C48 *)(self+0x50);
 s->in->vt->get(s->in,arg,&v);
 if(s->out) s->out->vt->set(s->out,v);
}
