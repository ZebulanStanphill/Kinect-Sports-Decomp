// Destroys two vectors in reverse member order, releasing their buffers.
#include <vector>
#include "game/Allocator_825089A0.h"
struct Element_82889B80 { int data; };
typedef std::vector<Element_82889B80, Allocator_825089A0<Element_82889B80, 0> > Vector;
struct State_82889B80 { int pad; Vector a, b; };
extern "C" void fn_82889B80(State_82889B80 *self) { self->~State_82889B80(); }
