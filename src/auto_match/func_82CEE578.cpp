#include "havok/hkBase.h"
class hkStreamWriter:public hkReferencedObject {};
class hkBufferedStreamWriter: public hkStreamWriter {public:hkBufferedStreamWriter(void*,int,hkBool);char pad[0x18];};
class hkOstream:public hkReferencedObject {public:hkOstream(hkStreamWriter*);hkStreamWriter* writer;};
class hkErrStream:public hkOstream {public:HK_FORCE_INLINE hkErrStream(char* buffer,int size):hkOstream(0) {
 writer=new(buffer+size-32) hkBufferedStreamWriter(buffer,size-32,true); writer->addReferenceLockUnchecked();
}};
extern "C" hkErrStream* fn_82CEE578(hkErrStream*p,char*b,int n){p->hkErrStream::hkErrStream(b,n);return p;}
