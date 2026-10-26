// Grow the block map of a deque with four elements per block, preserving
// its wrapped block order and clearing the newly added map entries. The
// element type stands in for the game's four-byte value type. Allocation
// uses category 1 of the system allocator.
//
// Typed library range helpers retain placement-construction null checks.
// Passing the local growth count by reference to the inlined member keeps
// it in the saved register used by the original function.

namespace std {extern "C" __declspec(noreturn) void fn_82F622A8(const char *);}
#define _Xlength_error fn_82F622A8
#include <deque>
#undef _Xlength_error
#include "game/Allocator_825089A0.h"
struct Element_828A3658 {int value;};
typedef std::deque<Element_828A3658,Allocator_825089A0<Element_828A3658,1> > Deque;
struct Access_828A3658 : Deque {
 __forceinline void grow(unsigned &count) {
 unsigned old=this->_Mapsize;
 unsigned limit=max_size()/4;
 if(limit-old < count) std::fn_82F622A8("deque<T> too long");
 unsigned increment=old/2; if(increment<8)increment=8;
 if(count<increment && old<=limit-increment)count=increment;
 unsigned offset=this->_Myoff/4;
 Element_828A3658 **map=this->_Almap.allocate(this->_Mapsize+count);
 Element_828A3658 **cursor=map+offset;
 cursor=std::_Uninitialized_copy(this->_Map+offset,this->_Map+this->_Mapsize,cursor,this->_Almap);
 if(offset<=count) {
 cursor=std::_Uninitialized_copy(this->_Map,this->_Map+offset,cursor,this->_Almap);
 std::_Uninitialized_default_fill_n(cursor,count-offset,(Element_828A3658**)0,this->_Almap);
 std::_Uninitialized_default_fill_n(map,offset,(Element_828A3658**)0,this->_Almap);
 }else {
 std::_Uninitialized_copy(this->_Map,this->_Map+count,cursor,this->_Almap);
 cursor=std::_Uninitialized_copy(this->_Map+count,this->_Map+offset,map,this->_Almap);
 std::_Uninitialized_default_fill_n(cursor,count,(Element_828A3658**)0,this->_Almap);
 }
 if(this->_Map) this->_Almap.deallocate(this->_Map,this->_Mapsize);
 this->_Map=map; this->_Mapsize=count+this->_Mapsize;
 }
};
extern "C" void fn_828A3658(Deque *self,unsigned count){static_cast<Access_828A3658*>(self)->grow(count);}
