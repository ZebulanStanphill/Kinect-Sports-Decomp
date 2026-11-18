struct Paragraph_82791070 {
    int unk0;                /* 0x00 */
    unsigned int size;       /* 0x04 */
    char pad8[0x14];         /* 0x08 */
    unsigned int startIndex; /* 0x1c */

    unsigned int GetSize() const
    {
        return size;
    }

    unsigned int GetStartIndex() const
    {
        return startIndex;
    }
};

struct ParagraphArray_82791070 {
    Paragraph_82791070 **data; /* 0x00 */
    unsigned int size;         /* 0x04 */

    unsigned int GetSize() const
    {
        return size;
    }

    Paragraph_82791070 *&operator[](unsigned int index)
    {
        return data[index];
    }

    Paragraph_82791070 **GetData() const
    {
        return data;
    }
};

struct ParagraphsIterator_82791070 {
    ParagraphArray_82791070 *array; /* 0x00 */
    int index;                      /* 0x04 */

    ParagraphsIterator_82791070() : array(0), index(-1)
    {
    }

    ParagraphsIterator_82791070(ParagraphArray_82791070 *arr, int idx) : array(arr), index(idx)
    {
    }

    Paragraph_82791070 *operator->()
    {
        return (*array)[index];
    }
};

extern "C" int fn_8278FB00(const Paragraph_82791070 *paragraph, unsigned int index);
extern "C" unsigned int fn_8278FED0(ParagraphArray_82791070 *array, unsigned int start, unsigned int end,
                                    const unsigned int *value,
                                    int (*less)(const Paragraph_82791070 *, unsigned int));

static __forceinline unsigned int LowerBound(ParagraphArray_82791070 &array, const unsigned int &value,
                                             int (*less)(const Paragraph_82791070 *, unsigned int))
{
    return fn_8278FED0(&array, 0, array.GetSize(), &value, less);
}

static __forceinline int Compare(const Paragraph_82791070 *paragraph, unsigned int index)
{
    unsigned int start = paragraph->GetStartIndex();

    if (index >= start && index < start + paragraph->GetSize()) {
        return 0;
    }
    return (int)(start - index);
}

struct StyledText_82791070 {
    char pad0[0xc];                     /* 0x00 */
    ParagraphArray_82791070 paragraphs; /* 0x0c */

    ParagraphsIterator_82791070 GetParagraphByIndex(unsigned int index, unsigned int *indexInParagraph);
};

/* Exact only when compiled together with the lower-bound search it calls (link-time code
   generation): the compiler then knows that the search leaves `index` alone and keeps a copy
   of it in a register across the call. */
ParagraphsIterator_82791070 StyledText_82791070::GetParagraphByIndex(unsigned int index,
                                                                     unsigned int *indexInParagraph)
{
    unsigned int i = LowerBound(paragraphs, index, fn_8278FB00);

    if (i < paragraphs.GetSize() && Compare(paragraphs.GetData()[i], index) == 0) {
        ParagraphsIterator_82791070 it(&paragraphs, (int)i);

        if (indexInParagraph) {
            *indexInParagraph = index - it->GetStartIndex();
        }
        return it;
    }
    return ParagraphsIterator_82791070();
}
