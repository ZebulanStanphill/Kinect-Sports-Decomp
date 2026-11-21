// hkBinaryPackfileReader.cpp: fills in the class pointer of every variant that lacks one and warns
// about the objects whose class the registry does not know.
#include "havok/hkBase.h"

class hkError : public hkReferencedObject
{
  public:
    virtual int message(int type, int id, const char *text, const char *file, int line);
};

class hkOstream;
class hkErrStream;
extern "C" {
extern hkError *lbl_8323B464;                                  // hkSingleton<hkError>::s_instance
void *fn_82CEA280(void *registry, void *object, int flags);    // class of an object
void fn_82CEE578(hkErrStream *stream, void *buf, int bufSize); // hkErrStream::hkErrStream
}

class hkOstream : public hkReferencedObject
{
  public:
    virtual ~hkOstream();
    hkOstream &operator<<(const char *text);
    hkOstream &operator<<(const void *pointer); // fn_82CED9E8
};

// hkErrStream derives from hkOstream; its constructor keeps its fn_ name and is called on the object directly.
class hkErrStream
{
  public:
    HK_FORCE_INLINE hkErrStream(void *buf, int bufSize)
    {
        fn_82CEE578(this, buf, bufSize);
    }

    HK_FORCE_INLINE ~hkErrStream()
    {
        ((hkOstream *)this)->hkOstream::~hkOstream();
    }

    char m_data[16];
};

struct Variant_82E0A208 {
    void *object; /* 0x0 */
    void *klass;  /* 0x4 */
};

extern "C" void fn_82E0A208(Variant_82E0A208 *variants, int count, void *registry)
{
    for (int i = 0; i < count; ++i) {
        Variant_82E0A208 &variant = variants[i];

        if (variant.object != HK_NULL && variant.klass == HK_NULL) {
            variant.klass = fn_82CEA280(registry, variant.object, 0);
            if (variant.klass == HK_NULL) {
                char buffer[512];
                hkErrStream ostr(buffer, 512);

                *(hkOstream *)&ostr << "Can not find class pointer for an object at 0x" << variant.object << ".\n"
                     << "You will have to set manually corresponding class pointer in the variant. "
                        "Otherwise you have to store metadata in the packfile.";
                lbl_8323B464->message(1, 0x67fde46, buffer, ".\\Packfile\\Binary\\hkBinaryPackfileReader.cpp",
                                      0x5d);
            }
        }
    }
}
