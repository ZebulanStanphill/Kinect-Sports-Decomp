// Allocation from the Soundscape heap.
//
// The heap and its functions have no names yet, so they are declared with their
// configured symbol names.

#ifndef R1_SOUNDSCAPE_HEAP_H
#define R1_SOUNDSCAPE_HEAP_H

extern "C" {
void *fn_82811400(void *tag, unsigned int unk);
void *fn_82811080(void *heap, unsigned int size, void *tag);
void fn_82811238(void *heap, void *block, void *tag);
extern char lbl_832116F8[];
}

// Class-specific operator new and delete. Classes allocated from this heap
// declare them; the operators are inlined into every new and delete.
// fn_82811400 fills in a six-word tag; every call seen passes it 4.
#define R1_SOUNDSCAPE_HEAP_OPERATORS                                           \
    static void *operator new(unsigned int size)                               \
    {                                                                          \
        unsigned int tag[6];                                                   \
        return fn_82811080(lbl_832116F8, size, fn_82811400(tag, 4));           \
    }                                                                          \
    static void operator delete(void *block)                                   \
    {                                                                          \
        unsigned int tag[6];                                                   \
        fn_82811238(lbl_832116F8, block, fn_82811400(tag, 4));                 \
    }

#endif
