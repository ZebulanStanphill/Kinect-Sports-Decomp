#include <new>
#include <streambuf>
#include <string>

class RangeBuffer_822EC770 : public std::streambuf
{
  public:
    __forceinline RangeBuffer_822EC770(const std::string &text)
    {
        const char *data = text.data();
        begin = data;
        end = data + text.size();
    }

    const char *begin;
    const char *end;

  protected:
    virtual int_type underflow();
};

extern "C" unsigned char fn_822EC810(RangeBuffer_822EC770 *buffer, float *out);

static float zero_822EC770 = 0.0f;

extern "C" double fn_822EC770(const std::string &text)
{
    char storage[sizeof(RangeBuffer_822EC770)];
    RangeBuffer_822EC770 *buffer = new (storage) RangeBuffer_822EC770(text);
    float value;
    if (fn_822EC810(buffer, &value)) {
        float result = value;
        buffer->std::streambuf::~basic_streambuf();
        return result;
    }
    buffer->std::streambuf::~basic_streambuf();
    return zero_822EC770;
}
