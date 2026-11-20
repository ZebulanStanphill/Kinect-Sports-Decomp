struct FormatRange_827920C8 {
    unsigned int index;  /* 0x0 */
    unsigned int length; /* 0x4 */
    int format;          /* 0x8 */
};

struct RangeArray_827920C8 {
    FormatRange_827920C8 *data; /* 0x0 */
    unsigned int size;          /* 0x4 */

    unsigned int GetSize() const
    {
        return size;
    }

    FormatRange_827920C8 &operator[](unsigned int index)
    {
        return data[index];
    }
};

struct RangeIterator_827920C8 {
    RangeArray_827920C8 *array; /* 0x0 */
    int index;                  /* 0x4 */

    bool IsFinished() const
    {
        return index < 0 || (unsigned int)index >= array->GetSize();
    }

    FormatRange_827920C8 &operator*()
    {
        return (*array)[index];
    }

    void operator++()
    {
        if (index < (int)array->GetSize()) {
            ++index;
        }
    }
};

struct Text_827920C8 {
    unsigned short *text; /* 0x0 */
    unsigned int size;    /* 0x4 */

    unsigned int GetSize() const
    {
        return size;
    }
};

struct CharIterator_827920C8 {
    char placeHolder[0x10];                /* 0x0 */
    RangeIterator_827920C8 formatIterator; /* 0x10 */
    Text_827920C8 *text;                   /* 0x18 */
    unsigned int curTextIndex;             /* 0x1c */

    bool IsFinished() const
    {
        return text == 0 || curTextIndex >= text->GetSize();
    }

    void operator++();
};

void CharIterator_827920C8::operator++()
{
    if (!IsFinished()) {
        ++curTextIndex;
        if (!formatIterator.IsFinished()) {
            FormatRange_827920C8 &range = *formatIterator;

            if (curTextIndex >= range.index + range.length) {
                ++formatIterator;
            }
        }
    } else {
        curTextIndex = text->GetSize();
    }
}
