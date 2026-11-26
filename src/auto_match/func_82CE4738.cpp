// hkSimpleLocalFrame's scalar deleting destructor (slot 0 of ??_7hkSimpleLocalFrame@@6B@). It calls hkSimpleLocalFrame's
// destructor fn_82CEFFA8, which keeps its fn_ name.
#include "havok/hkSimpleLocalFrame.h"

extern "C" {
void fn_82CEFFA8(hkSimpleLocalFrame *self);   // hkSimpleLocalFrame::~hkSimpleLocalFrame
}

extern "C" hkSimpleLocalFrame *fn_82CE4738(hkSimpleLocalFrame *self, unsigned int flags)
{
    fn_82CEFFA8(self);
    if (flags & 1)
        hkSimpleLocalFrame::operator delete(self);
    return self;
}
