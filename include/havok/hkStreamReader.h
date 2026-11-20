// hkStreamReader (Common/Base/System/Io/Reader/hkStreamReader.h).
// The reader interface adds nine slots after hkReferencedObject.
#ifndef HAVOK_HKSTREAMREADER_H
#define HAVOK_HKSTREAMREADER_H

#include "havok/hkBase.h"

#ifndef HAVOK_HKRESULT_DEFINED
#define HAVOK_HKRESULT_DEFINED
enum hkResult { HK_SUCCESS = 0, HK_FAILURE = 1 };
#endif

class hkStreamReader : public hkReferencedObject {
public:
    enum SeekWhence { STREAM_SET = 0, STREAM_CUR = 1, STREAM_END = 2 };

    virtual hkBool isOk() const = 0;
    virtual int read(void *buf, int nbytes) = 0;
    virtual int skip(int nbytes);
    virtual hkBool markSupported() const;
    virtual hkResult setMark(int markLimit);
    virtual hkResult rewindToMark();
    virtual hkBool seekTellSupported() const;
    virtual hkResult seek(int offset, SeekWhence whence);
    virtual int tell() const;
};

#endif
