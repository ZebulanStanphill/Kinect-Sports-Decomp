#include "havok/hkOstream.h"

extern "C" {

typedef struct Error_82CEE5F8 Error_82CEE5F8;

typedef struct Vtable_82CEE5F8 {
    void *slots[3];                                                                       /* 0x0 */
    int (*message)(Error_82CEE5F8 *, int, unsigned int, const char *, const char *, int); /* 0xc */
} Vtable_82CEE5F8;

struct Error_82CEE5F8 {
    Vtable_82CEE5F8 *vtable; /* 0x0 */
};

typedef struct Object_82CEE5F8 {
    void *vtable;                     /* 0x0 */
    unsigned short m_memSizeAndFlags; /* 0x4 */
    unsigned short m_referenceCount;  /* 0x6 */
} Object_82CEE5F8;

typedef struct Stream_82CEE5F8 {
    char data[16]; /* 0x0 */
} Stream_82CEE5F8;   /* an hkErrStream */

extern Error_82CEE5F8 *lbl_8323B464;
extern void fn_82CEE578(Stream_82CEE5F8 *, char *, int);
extern hkOstream *fn_82CED9E8(hkOstream *, const void *);   /* hkOstream::operator<<(const void *) */
extern hkOstream *fn_82CEDC88(hkOstream *, int);            /* hkOstream::operator<<, %i */
extern void __debugbreak(void);

void fn_82CEE5F8(Object_82CEE5F8 *object, const char *context)
{
    Stream_82CEE5F8 stream;
    char buffer[512];
    int count;
    fn_82CEE578(&stream, buffer, 512);
    count = (short)object->m_referenceCount;
    *fn_82CEDC88(&(*fn_82CED9E8(&(*(hkOstream *)&stream << "Reference count error on object "), object)
                   << " with ref count of "),
                 count)
        << " in " << context << ".\n"
        << " * Are you calling delete instead of removeReference?\n"
        << " * Have you called removeReference too many times?\n"
        << " * In a multithreaded environment, what is the hkReferencedObject lock mode you use "
           "(see setLockMode())?\n"
        << " * Is this a valid object?\n"
        << " * Do you have more than 32768 references? (unlikely)\n";
    if (lbl_8323B464->vtable->message(lbl_8323B464, 3, 0x2c66f2d8, buffer, ".\\System\\Error\\hkError.cpp",
                                      0x21)) {
        __debugbreak();
    }
    ((hkOstream *)&stream)->hkOstream::~hkOstream();
}

}
