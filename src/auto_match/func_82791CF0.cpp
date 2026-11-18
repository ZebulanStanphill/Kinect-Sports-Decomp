extern "C" void fn_8267C4F0(void *format);

struct FormatRange_82791CF0 {
    unsigned int index;  /* 0x0 */
    unsigned int length; /* 0x4 */
    void *format;        /* 0x8 */
};

struct RangeArray_82791CF0 {
    FormatRange_82791CF0 *data; /* 0x0 */
    unsigned int size;          /* 0x4 */

    unsigned int GetSize() const
    {
        return size;
    }

    FormatRange_82791CF0 &operator[](unsigned int index)
    {
        return data[index];
    }
};

struct RangeIterator_82791CF0 {
    RangeArray_82791CF0 *array; /* 0x0 */
    int index;                  /* 0x4 */

    bool IsFinished() const
    {
        return index < 0 || (unsigned int)index >= array->GetSize();
    }

    FormatRange_82791CF0 &operator*()
    {
        return (*array)[index];
    }
};

struct Text_82791CF0 {
    unsigned short *text; /* 0x0 */
    unsigned int size;    /* 0x4 */

    const unsigned short *ToWStr() const
    {
        return text;
    }

    unsigned int GetSize() const
    {
        return size;
    }
};

struct StyledRun_82791CF0 {
    const unsigned short *text; /* 0x0 */
    unsigned int index;         /* 0x4 */
    unsigned int length;        /* 0x8 */
    void *format;               /* 0xc */

    __forceinline StyledRun_82791CF0 &Set(const unsigned short *newText, unsigned int newIndex,
                                          unsigned int newLength)
    {
        void **slot;

        index = newIndex;
        length = newLength;
        text = newText;
        slot = &format;
        if (*slot != 0) {
            fn_8267C4F0(*slot);
        }
        *slot = 0;
        return *this;
    }
};

extern "C" StyledRun_82791CF0 *fn_827903D0(StyledRun_82791CF0 *run, const unsigned short *text,
                                           unsigned int index, unsigned int length, void *format);

struct RunIterator_82791CF0 {
    StyledRun_82791CF0 placeHolder;        /* 0x0 */
    int unused10;                          /* 0x10 */
    RangeIterator_82791CF0 formatIterator; /* 0x14 */
    Text_82791CF0 *text;                   /* 0x1c */
    unsigned int curTextIndex;             /* 0x20 */

    StyledRun_82791CF0 &operator*();
};

StyledRun_82791CF0 &RunIterator_82791CF0::operator*()
{
    if (!formatIterator.IsFinished()) {
        FormatRange_82791CF0 &range = *formatIterator;
        unsigned int offset = curTextIndex;
        unsigned int position = range.index;

        if (offset < position) {
            return placeHolder.Set(text->text + offset, offset, range.index - offset);
        }
        return *fn_827903D0(&placeHolder, text->ToWStr() + position, position, range.length, range.format);
    } else {
        unsigned int offset = curTextIndex;

        return placeHolder.Set(text->ToWStr() + offset, offset, text->GetSize() - offset);
    }
}
