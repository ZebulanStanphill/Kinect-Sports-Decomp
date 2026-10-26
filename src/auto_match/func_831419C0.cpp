// Destroy the global tree's elements and release its sentinel node through
// the system allocator. Iterator_831419C0 models the one-word tree iterator
// passed by value to the existing range-erase helper.

struct System_831419C0 {
 virtual void vf00(); virtual void vf04(); virtual float vf08();
 virtual unsigned __int64 vf0C();
 virtual void vf10(); virtual void vf14(); virtual void vf18();
 virtual void vf1C(); virtual void vf20();
 virtual void *vf24(unsigned int, int); virtual void vf28(void *);
};
extern "C" System_831419C0 *fn_825089A0();
struct Node_831419C0 { Node_831419C0 *next; };
struct Container_831419C0 { int pad; Node_831419C0 *head; };
struct Iterator_831419C0 { Node_831419C0 *p; };
extern "C" { extern Container_831419C0 lbl_83214540;
void fn_828EAF40(Iterator_831419C0 *, Container_831419C0 *, Iterator_831419C0, Iterator_831419C0); }
extern "C" void fn_831419C0() {
 Iterator_831419C0 result, first={lbl_83214540.head->next}, last={lbl_83214540.head};
 fn_828EAF40(&result, &lbl_83214540, first, last);
 Node_831419C0 *p=lbl_83214540.head; fn_825089A0()->vf28(p);
}
