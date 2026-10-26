// Update the global object list after the system-clock interval has elapsed.
// The first call initializes a local static timestamp. Each update visits the
// list, updates two lazily created services, and records a fresh timestamp.
// The clock, list, and node names describe only the layouts accessed here.

struct Clock_828A5328 { virtual void vf00(); virtual void vf04(); virtual float vf08(); };
struct Node_828A5328 { Node_828A5328 *next; int pad[3]; void *value; };
struct List_828A5328 { int pad; Node_828A5328 *head; };
extern "C" {
 Clock_828A5328 *fn_825089A0(); extern unsigned int lbl_83213FDC; extern float lbl_83213FD8, lbl_82023FE4;
 extern List_828A5328 lbl_83213F00; extern void *lbl_83213EFC, *lbl_83213F8C, *lbl_83213FC8;
 void fn_828EFF68(); void fn_828864C0(); void fn_828B2BF8(); void fn_828B2C98(); void fn_8288A350(void *);
 void fn_828A4660(void *, float); void fn_828EA790(Node_828A5328 **); void *fn_828A1660(); void fn_828C19A8(void *);
 void *fn_828A17A0(); void fn_828D0788(void *); void fn_828864E8();
}
static void *get_first_828A5328() { return lbl_83213F8C ? lbl_83213F8C : fn_828A1660(); }
static void *get_second_828A5328() { return lbl_83213FC8 ? lbl_83213FC8 : fn_828A17A0(); }
extern "C" void fn_828A5328() {
 float now=fn_825089A0()->vf08();
 static float previous=now; float prev=previous;
 float delta=now-prev;
 if (delta >= lbl_82023FE4) {
 fn_828EFF68(); fn_828864C0(); fn_828B2BF8(); fn_828B2C98(); fn_8288A350(lbl_83213EFC);
 Node_828A5328 *it=lbl_83213F00.head->next;
 while(it!=lbl_83213F00.head) { fn_828A4660(it->value, delta); fn_828EA790(&it); }
 fn_828C19A8(get_first_828A5328()); fn_828D0788(get_second_828A5328()); fn_828864E8(); previous=fn_825089A0()->vf08();
 }
}
