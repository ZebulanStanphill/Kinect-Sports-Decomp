// hkBufferedStreamWriter::seekTellSupported (Common/Base/System/Io/Writer/Buffered/hkBufferedStreamWriter.cpp).
#include "havok/hkBufferedStreamWriter.h"

hkBool hkBufferedStreamWriter::seekTellSupported() const
{
    return m_stream ? m_stream->seekTellSupported() : hkBool(true);
}
