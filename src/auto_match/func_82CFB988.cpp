#include "havok/hkBase.h"
class hkSocket : public hkReferencedObject {
public:
 class ReaderAdapter : public hkReferencedObject {
 public:
  hkSocket *owner;
  __forceinline ReaderAdapter() : owner(0) {}
  virtual ~ReaderAdapter();
 };
 class WriterAdapter : public hkReferencedObject {
 public:
  hkSocket *owner;
  __forceinline WriterAdapter() : owner(0) {}
  virtual ~WriterAdapter();
 };
 ReaderAdapter reader;
 WriterAdapter writer;
 hkSocket();
 virtual ~hkSocket();
};
extern "C" {extern hkBool lbl_8323B4D8;}
extern "C" {extern void (*lbl_8317F60C)(void);}
hkSocket::hkSocket() {
 reader.owner=this;writer.owner=this;
 if(!lbl_8323B4D8 && lbl_8317F60C) {lbl_8317F60C();lbl_8323B4D8=true;}
}
