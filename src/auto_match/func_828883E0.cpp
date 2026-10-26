// Reset the global timer state and record the system clock in milliseconds.
struct System_828883E0 { virtual void vf00(); virtual void vf04(); virtual void vf08(); virtual unsigned __int64 vf0C(); };
struct State_828883E0 { int active, count, start; };
extern "C" {
System_828883E0 *fn_825089A0();
void fn_82888338();
extern State_828883E0 lbl_83213E3C;
void fn_828883E0() {
 fn_82888338();
 lbl_83213E3C.count=0;
 System_828883E0 *system=fn_825089A0();
 unsigned __int64 now=system->vf0C();
 lbl_83213E3C.active=1;
 lbl_83213E3C.start=(int)(now/1000);
}
}
