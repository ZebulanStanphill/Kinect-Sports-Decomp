struct TextFormat_82795EE0;
struct Allocator_82795EE0;

extern "C" void fn_8267C4F0(TextFormat_82795EE0 *format);

struct FormatPtr_82795EE0 {
    TextFormat_82795EE0 *object; /* 0x00 */

    FormatPtr_82795EE0(TextFormat_82795EE0 *format) : object(format)
    {
    }

    ~FormatPtr_82795EE0()
    {
        if (object) {
            fn_8267C4F0(object);
        }
    }
};

struct FormatRange_82795EE0;

/* The range's out-of-line constructor: index, length and a counted copy of the format.
   Called by its C name so that link-time code generation sees its body: the compiler then
   keeps the format pointer in a register across the call instead of reading it back. */
extern "C" FormatRange_82795EE0 *fn_82790678(FormatRange_82795EE0 *range, unsigned int index,
                                             unsigned int length, const FormatPtr_82795EE0 *data);

struct FormatRange_82795EE0 {
    unsigned int index;        /* 0x00 */
    unsigned int length;       /* 0x04 */
    TextFormat_82795EE0 *data; /* 0x08 */

    ~FormatRange_82795EE0()
    {
        if (data) {
            fn_8267C4F0(data);
        }
    }
};

struct FormatRanges_82795EE0 {
    void *data;         /* 0x00 */
    unsigned int count; /* 0x04 */

    void SetRange(const FormatRange_82795EE0 &range);

    void SetRange(unsigned int index, unsigned int length, const FormatPtr_82795EE0 &data)
    {
        FormatRange_82795EE0 range;

        SetRange(*fn_82790678(&range, index, length, &data));
    }

    unsigned int Count() const
    {
        return count;
    }
};

extern "C" TextFormat_82795EE0 *fn_8278E7B0(Allocator_82795EE0 *allocator,
                                            const TextFormat_82795EE0 *format);

struct Paragraph_82795EE0 {
    void *text;                       /* 0x00 */
    unsigned int size;                /* 0x04 */
    char pad8[8];                     /* 0x08 */
    FormatRanges_82795EE0 formatInfo; /* 0x10 */

    bool HasTermNull() const;
    unsigned short *CreatePosition(Allocator_82795EE0 *allocator, unsigned int pos, unsigned int length);

    unsigned int GetSize() const
    {
        return size;
    }

    unsigned int GetLength() const
    {
        unsigned int length = GetSize();

        if (length > 0 && HasTermNull()) {
            return length - 1;
        }
        return length;
    }

    void AppendTermNull(Allocator_82795EE0 *allocator, const TextFormat_82795EE0 *defaultFormat);
};

void Paragraph_82795EE0::AppendTermNull(Allocator_82795EE0 *allocator,
                                        const TextFormat_82795EE0 *defaultFormat)
{
    if (!HasTermNull()) {
        unsigned int pos = GetLength();
        unsigned short *p = CreatePosition(allocator, pos, 1);

        if (p) {
            *p = 0;
            if (formatInfo.Count() == 0 && defaultFormat) {
                FormatPtr_82795EE0 format = fn_8278E7B0(allocator, defaultFormat);

                formatInfo.SetRange(pos, 1, format);
            }
        }
    }
}
