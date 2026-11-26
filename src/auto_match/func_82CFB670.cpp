#include "havok/hkBase.h"
#include "havok/hkStreamWriter.h"
extern "C" void *fopen(const char *, const char *);
class hkStdioStreamWriter : public hkStreamWriter {
public:
 hkStdioStreamWriter(hkFinishLoadedObjectFlag f) : hkStreamWriter(f) {}
 virtual hkBool isOk() const;
 virtual int write(const void *buf, int nbytes);
 void *m_handle;
 hkBool m_ownsHandle;
};
static HK_FORCE_INLINE const void *streamVtable() {
 union { void *ptr; char buf[sizeof(hkStdioStreamWriter)]; } u;
 hkFinishLoadedObjectFlag f;
 new (u.buf) hkStdioStreamWriter(f);
 return u.ptr;
}
extern "C" hkStdioStreamWriter *fn_82CFB670(hkStdioStreamWriter *self, const char *name) {
 self->m_referenceCount=1;
 *(const void **)self=streamVtable();
 self->m_handle=0;
 self->m_ownsHandle=true;
 if (name) self->m_handle=fopen(name,"wb");
 return self;
}
