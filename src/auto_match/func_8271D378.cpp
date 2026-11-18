struct Node_8271D378 {
    int pad;
    Node_8271D378 *lower; /* 0x4 */
};

extern "C" void fn_82694D70(Node_8271D378 *node);

class String_8271D378
{
  public:
    Node_8271D378 *node;

    __forceinline void ResolveLower() const
    {
        if (node->lower == 0) {
            fn_82694D70(node);
        }
    }

    __forceinline bool EqualsNoCase(const String_8271D378 &other) const
    {
        ResolveLower();
        other.ResolveLower();
        return node->lower == other.node->lower;
    }

    bool Compare(const String_8271D378 &other, bool caseSensitive) const;
};

bool String_8271D378::Compare(const String_8271D378 &other, bool caseSensitive) const
{
    if (caseSensitive) {
        return node == other.node;
    }
    return EqualsNoCase(other);
}
