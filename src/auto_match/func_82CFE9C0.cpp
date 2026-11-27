#include "havok/hkClass.h"
#include "havok/hkCrc32StreamWriter.h"

// hkClassEnum::getSignature(): the CRC-32 of the enum's signature, written to an hkCrc32StreamWriter on the stack.
// fn_82CFEBE0 is the writer's getCrc (~m_crc); the writer's implicit destructor leaves no code.
extern "C" hkUint32 fn_82CFEBE0(const hkCrc32StreamWriter *w);   // hkCrc32StreamWriter::getCrc

extern "C" hkUint32 fn_82CFE9C0(const hkClassEnum *e)
{
    hkCrc32StreamWriter w;
    e->writeSignature(&w);
    return fn_82CFEBE0(&w);
}
