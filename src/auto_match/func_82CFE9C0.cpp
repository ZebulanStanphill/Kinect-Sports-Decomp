#include "havok/hkClass.h"

// A 0x10-byte stream writer built on the stack (fn_82CFEBF0 constructs it,
// fn_82CFEBE0 destroys it); probably hkCrc32StreamWriter, making this
// hkClassEnum::getSignature().
struct Writer_82CFE9C0 {
    unsigned char data[16];
};
extern "C" void fn_82CFEBF0(Writer_82CFE9C0 *w, int initial);
extern "C" void fn_82CFEBE0(Writer_82CFE9C0 *w);

extern "C" void fn_82CFE9C0(const hkClassEnum *e)
{
    Writer_82CFE9C0 w;

    fn_82CFEBF0(&w, 0);
    e->writeSignature(reinterpret_cast<hkStreamWriter *>(&w));
    fn_82CFEBE0(&w);
}
