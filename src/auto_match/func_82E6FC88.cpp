#include <string.h>

struct Interface_82E6FC88 {
    virtual void slot00();
    virtual void slot04();
    virtual void slot08();
    virtual void slot0c();
    virtual int GetPosition(unsigned __int64 *);
    virtual void slot14();
    virtual void slot18();
    virtual int Seek(unsigned __int64);
    virtual void slot20();
    virtual void slot24();
    virtual void slot28();
    virtual void slot2c();
    virtual int Write(void *, unsigned int, unsigned int *);
};

struct Format_82E6FC88 {
    virtual void slot00();
    virtual void slot04();
    virtual void slot08();
    virtual void slot0c();
    virtual void slot10();
    virtual void slot14();
    virtual void slot18();
    virtual void slot1c();
    virtual void slot20();
    virtual void slot24();
    virtual void slot28();
    virtual void slot2c();
    virtual int GetFormat(unsigned short *);
};

typedef struct Owner_82E6FC88 {
    char pad[0x2c];
    Interface_82E6FC88 *stream;
    char pad30[0x28];
    Format_82E6FC88 *format;
} Owner_82E6FC88;

extern "C" void *fn_82E50BE8(unsigned int, int, int, int, int);
extern "C" void fn_82E4FE40(void *);

extern "C" int fn_82E6FC88(Owner_82E6FC88 *self, unsigned __int64 target)
{
    unsigned __int64 position = 0;
    unsigned short format;
    unsigned int written;
    unsigned int size;
    void *buffer;
    int result = self->stream->GetPosition(&position);
    if (result >= 0 && target > position) {
        format = 0;
        result = self->format->GetFormat(&format);
        if (result >= 0) {
            size = (unsigned int)target - (unsigned int)position;
            buffer = fn_82E50BE8(size, 0, 0, 0, 0);
            if (buffer == 0) {
                result = 0x8007000e;
            } else {
                memset(buffer, 0, size);
                result = self->stream->Seek(position);
                if (result >= 0) {
                    written = 0;
                    result = self->stream->Write(buffer, size, &written);
                }
                fn_82E4FE40(buffer);
            }
        }
    }
    return result;
}
