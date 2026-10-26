// Destroy an object through virtual slot 0x08, then release its storage
// through the system allocator. The object's concrete type is unknown.

struct System_8242EE58 {
 virtual void vf00(); virtual void vf04(); virtual float vf08();
 virtual unsigned __int64 vf0C();
 virtual void vf10(); virtual void vf14(); virtual void vf18();
 virtual void vf1C(); virtual void vf20();
 virtual void *vf24(unsigned int, int); virtual void vf28(void *);
};
extern "C" System_8242EE58 *fn_825089A0();
struct Object_8242EE58 {
 virtual void vf00(); virtual void vf04(); virtual void vf08(int);
};
extern "C" void fn_8242EE58(Object_8242EE58 *self) {
 self->vf08(0); fn_825089A0()->vf28(self);
}
