extern "C" void fn_8267C4C8(int format);
extern "C" void fn_8267C4F0(unsigned int format);

struct FormatRange_82791FD0 {
    unsigned int index;  /* 0x0 */
    unsigned int length; /* 0x4 */
    int format;          /* 0x8 */
};

struct RangeArray_82791FD0 {
    FormatRange_82791FD0 *data; /* 0x0 */
    unsigned int size;          /* 0x4 */

    unsigned int GetSize() const
    {
        return size;
    }

    FormatRange_82791FD0 &operator[](unsigned int index)
    {
        return data[index];
    }
};

struct RangeIterator_82791FD0 {
    RangeArray_82791FD0 *array; /* 0x0 */
    int index;                  /* 0x4 */

    bool IsFinished() const
    {
        return index < 0 || (unsigned int)index >= array->GetSize();
    }

    FormatRange_82791FD0 &operator*()
    {
        return (*array)[index];
    }
};

struct Text_82791FD0 {
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

struct FormatPtr_82791FD0 {
    unsigned int object; /* 0x0 */

    __forceinline void operator=(const int &other)
    {
        if (other != 0) {
            fn_8267C4C8(other);
        }
        if (object != 0) {
            fn_8267C4F0(object);
        }
        object = other;
    }

    __forceinline void Clear()
    {
        if (object != 0) {
            fn_8267C4F0(object);
        }
        object = 0;
    }
};

struct Character_82791FD0 {
    FormatPtr_82791FD0 format; /* 0x0 */
    unsigned int index;        /* 0x4 */
    unsigned short character;  /* 0x8 */
    int unusedC;               /* 0xc */
};

struct CharIterator_82791FD0 {
    Character_82791FD0 placeHolder;        /* 0x0 */
    RangeIterator_82791FD0 formatIterator; /* 0x10 */
    Text_82791FD0 *text;                   /* 0x18 */
    unsigned int curTextIndex;             /* 0x1c */

    bool IsFinished() const
    {
        return text == 0 || curTextIndex >= text->GetSize();
    }

    Character_82791FD0 &operator*();
};

Character_82791FD0 &CharIterator_82791FD0::operator*()
{
    if (!IsFinished()) {
        placeHolder.character = *(text->ToWStr() + curTextIndex);
        placeHolder.index = curTextIndex;
        if (!formatIterator.IsFinished()) {
            FormatRange_82791FD0 &range = *formatIterator;

            if (curTextIndex >= range.index) {
                placeHolder.format = range.format;
            } else {
                placeHolder.format.Clear();
            }
        } else {
            placeHolder.format.Clear();
        }
    } else {
        placeHolder.character = 0;
        placeHolder.index = curTextIndex;
        placeHolder.format.Clear();
    }
    return placeHolder;
}
