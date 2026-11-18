extern "C" long _InterlockedExchangeAdd(long volatile *, long);
extern "C" void fn_8267BE38(void *memory);

struct DataDesc_8272C5C0 {
    unsigned int size; /* 0x0 */
    long refCount;     /* 0x4 */
};

struct Heap_8272C5C0 {
    int unknown0;
};

struct String_8272C5C0 {
    unsigned int heapTypeBits; /* 0x0 */

    String_8272C5C0(Heap_8272C5C0 *heap, const String_8272C5C0 &source);

    __forceinline ~String_8272C5C0()
    {
        DataDesc_8272C5C0 *data = (DataDesc_8272C5C0 *)(heapTypeBits & ~3u);
        if (_InterlockedExchangeAdd(&data->refCount, -1) - 1 == 0) {
            fn_8267BE38(data);
        }
    }
};

struct Source_8272C5C0 {
    String_8272C5C0 GetName();
    String_8272C5C0 GetSpecialName();
};

struct Owner_8272C5C0 {
    char pad000[0x254];
    Heap_8272C5C0 stringHeap; /* 0x254 */
};

struct Context_8272C5C0 {
    char pad00[0x78];
    Owner_8272C5C0 *owner; /* 0x78 */
};

struct Input_8272C5C0 {
    char pad00[0xa0];
    Source_8272C5C0 *source; /* 0xa0 */
    char pada4[0x24];
    unsigned short flags; /* 0xc8 */
    unsigned short padca;
    String_8272C5C0 text; /* 0xcc */
    int *custom;          /* 0xd0 */

    bool HasCustom() const
    {
        return custom != 0 && *custom != 0;
    }

    bool IsSpecial() const
    {
        return (flags >> 1) & 1;
    }

    String_8272C5C0 GetText(Context_8272C5C0 *context, bool useCustom);
};

String_8272C5C0 Input_8272C5C0::GetText(Context_8272C5C0 *context, bool useCustom)
{
    if (useCustom) {
        if (HasCustom()) {
            return String_8272C5C0(&context->owner->stringHeap, text);
        } else if (IsSpecial()) {
            return String_8272C5C0(&context->owner->stringHeap, source->GetSpecialName());
        } else {
            return String_8272C5C0(&context->owner->stringHeap, source->GetName());
        }
    }
    return String_8272C5C0(&context->owner->stringHeap, source->GetName());
}
