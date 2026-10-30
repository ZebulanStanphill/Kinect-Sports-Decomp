#include "stdext/exception.h"
extern "C" void (*lbl_83263250)(const stdext::exception &);
extern "C" __declspec(noreturn) void fn_82F63C78(const unsigned short *,const unsigned short *,const unsigned short *,unsigned,unsigned);
void stdext::exception::_Raise() const {if(lbl_83263250)(*lbl_83263250)(*this);_Doraise();fn_82F63C78(0,0,0,0,0);}
