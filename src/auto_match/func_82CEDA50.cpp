// hkOstream::operator<<(hkBool) (Common/Base/System/Io/OStream/hkOStream.cpp). operator<<(const char *)
// is defined in the same file and inlined here; the local helper is that inline copy.
#include "havok/hkOstream.h"
#include "havok/hkString.h"

extern "C" char lbl_82196F18[];   // "true"
extern "C" char lbl_82196F10[];   // "false"

class hkOstreamInline : public hkOstream {
public:
    HK_FORCE_INLINE hkOstream &writeString(const char *str)
    {
        hkStreamWriter *writer = m_writer;
        if (str)
            writer->write(str, hkString::strLen(str));
        else
            writer->write("(null)", 6);
        return *this;
    }
};

hkOstream &hkOstream::operator<<(hkBool b)
{
    return static_cast<hkOstreamInline *>(this)->writeString(b ? lbl_82196F18 : lbl_82196F10);
}
