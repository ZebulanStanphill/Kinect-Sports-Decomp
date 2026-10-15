// The compiler generates the deleting destructor of
// EventHandle_EMITTER_INVALIDATED_c where it emits the class's vtable, which
// GetInstance does. The linker folded the identical deleting destructors of
// all four states into this one.
#include "func_82869EA0.cpp"
