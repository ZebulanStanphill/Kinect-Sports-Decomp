// std::_Mutex::~_Mutex(): destroys and frees the lock object. fn_82BA02A8 is the
// (empty) lock destruction and fn_8265CA20 operator delete, by the names C units
// use.
#include <yvals.h>

extern "C" {
void fn_82BA02A8(void *mutex);
void fn_8265CA20(void *ptr);
}

std::_Mutex::~_Mutex()
{
    fn_82BA02A8(_Mtx);
    fn_8265CA20(_Mtx);
}
