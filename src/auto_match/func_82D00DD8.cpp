#include "havok/hkBase.h"
class hkStackTracer : public hkReferencedObject { public: hkStackTracer() {} };
extern "C" hkStackTracer lbl_8323B510;
extern "C" hkStackTracer *fn_82D00DD8() { new (&lbl_8323B510) hkStackTracer(); return &lbl_8323B510; }
