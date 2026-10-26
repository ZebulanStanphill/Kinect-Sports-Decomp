// Read queued events, retain them briefly, and notify registered listeners.
struct System_828B4E60 { virtual void vf00(); virtual void vf04(); virtual void vf08(); virtual unsigned __int64 vf0C(); };
struct Listener_828B4E60 { void **vtable; };
struct Node_828B4E60 { Node_828B4E60 *next,*prev; Listener_828B4E60 *value; };
struct Object_828B4E60 { char pad[0x20]; Node_828B4E60 *head; char pad2[0x14]; unsigned char active; char pad3[7]; int key; };
struct Payload_828B4E60 { char data[42]; };
struct Event_828B4E60 { void *vtable; int pad; int zero; unsigned __int64 time; Payload_828B4E60 payload; };
extern "C" {
extern char lbl_82024D24[]; System_828B4E60 *fn_825089A0();
void *fn_828B2BF8(); unsigned char fn_828B2278(void *,int); unsigned char fn_828B20B8(void *,int,Payload_828B4E60 *);
void fn_828B3D00(void *,Event_828B4E60 *); void fn_828B3E88(void *); int fn_828B2148(void *,int); void fn_828B4D60(Object_828B4E60 *);
}
extern "C" void fn_828B4E60(Object_828B4E60 *self) {
 if (self->active) {
 int key = self->key;
 if (fn_828B2278(fn_828B2BF8(),key) == 1) {
 Payload_828B4E60 payload;
 key = self->key;
 if (fn_828B20B8(fn_828B2BF8(),key,&payload)) {
 Event_828B4E60 event;
 do {
 event.vtable=lbl_82024D24; event.zero=0;
 event.time=fn_825089A0()->vf0C()+500;
 event.payload=payload;
 fn_828B3D00((char *)self+8,&event);
 event.vtable=lbl_82024D24;
 key=self->key;
 } while (fn_828B20B8(fn_828B2BF8(),key,&payload));
 }
 } else fn_828B3E88((char *)self+8);
 key=self->key;
 int value=fn_828B2148(fn_828B2BF8(),key);
 for (Node_828B4E60 *node=self->head->next; node!=self->head; node=node->next) {
 typedef void (*Callback)(Listener_828B4E60 *,int);
 ((Callback)node->value->vtable[16])(node->value,value);
 }
 }
 fn_828B4D60(self);
}
