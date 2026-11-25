// Havok base types (Common/Base/Types/hkBaseTypes.h), as far as the game's
// code needs them. The game links Havok 2010.x for Xbox 360: 32-bit pointers,
// big-endian, hkMemoryRouter-based allocation.
#ifndef HAVOK_HKBASETYPES_H
#define HAVOK_HKBASETYPES_H

#define HK_CALL
#define HK_FORCE_INLINE __forceinline
#define HK_NULL 0

typedef signed char hkInt8;
typedef unsigned char hkUint8;
typedef short hkInt16;
typedef unsigned short hkUint16;
typedef int hkInt32;
typedef unsigned int hkUint32;
typedef __int64 hkInt64;
typedef unsigned __int64 hkUint64;
typedef float hkReal;
typedef unsigned int hk_size_t;
typedef unsigned long hkUlong;   // pointer-sized integer
typedef char hkChar;
// A boolean in a register: zero or any non-zero value. It is signed: four collision agent
// constructors (func_82D6AC38, func_82D6B358, func_82D6C808, func_82D6DDA8) only match so.
typedef int hkBool32;

// Havok's boolean: one byte, compared as a char.
class hkBool {
public:
    hkBool() {}
    hkBool(bool b) : m_bool(char(b)) {}
    operator bool() const { return m_bool != 0; }
    hkBool &operator=(bool b) { m_bool = char(b); return *this; }
    char m_bool;
};

// Passed to the "finish" constructors that the serialization system runs on
// objects loaded in place from a packfile; they set the vtable and leave the
// members alone.
class hkFinishLoadedObjectFlag {
public:
    hkFinishLoadedObjectFlag() : m_finishing(0) {}
    int m_finishing;
};

class hkClass;
class hkStatisticsCollector;

#endif
